/*
    GNU linker script for STM32F405
*/

/* Specify the memory areas */
/* If the FS size is modified TEXT1_ADDR -in mpconfigboard.mk must be updated. */
MEMORY
{
    /* Define the physical memory regions. */
    FLASH (rx)      : ORIGIN = 0x08000000, LENGTH = 1024K /* entire flash */
    RAM (xrw)       : ORIGIN = 0x20000000, LENGTH = 128K
    CCMRAM (xrw)    : ORIGIN = 0x10000000, LENGTH = 64K /* not contiguous with RAM. */

    /* Define the region lengths used. These are not regions, they only define length. */
    FL_START_L (rx) : ORIGIN = 0, LENGTH = 16K /* sector 0. ISR/TEXT0. */
    FS_L (rx)       : ORIGIN = 0, LENGTH = 96K /* sectors 1,2,3,4. 16k+16K+16K+48K (48k of 64k) */
    U_L (rx)        : ORIGIN = 0, LENGTH = 16K /* unused part of sector 4. */
    FS2_L (rx)      : ORIGIN = 0, LENGTH = 48K /* sector 5 (48K of 128k used). Total fs 144K. */
    U2_L (rx)       : ORIGIN = 0, LENGTH = 80K /* unused part of sector 5. */
    
    STACK_L (xrw)   : ORIGIN = 0, LENGTH = 16K /* leaves 48k in CCMRAM for FS cache. */

    /* Define the regions used. These are all computed. */
    FLASH_START (rx): ORIGIN = ORIGIN(FLASH), LENGTH = LENGTH(FL_START_L) /* ISR/TEXT0 */
    FLASH_FS (rx)   : ORIGIN = ORIGIN(FLASH_START) + LENGTH(FLASH_START), LENGTH = LENGTH(FS_L)
    FLASH_FS2 (rx)  : ORIGIN = ORIGIN(FLASH_FS) + LENGTH(FLASH_FS) + LENGTH(U_L), LENGTH = LENGTH(FS2_L)
    
    /* Define the origin of TEXT1 region. */
    TEXT1_ORG (rx)  : ORIGIN = ORIGIN(FLASH_FS2) + LENGTH(FLASH_FS2) + LENGTH(U2_L), LENGTH = 0
    
    FLASH_TEXT (rx) : ORIGIN = ORIGIN(TEXT1_ORG), LENGTH = ORIGIN(FLASH) + LENGTH(FLASH) - ORIGIN(TEXT1_ORG)
    STACK (xrw)     : ORIGIN = ORIGIN(CCMRAM), LENGTH = LENGTH(STACK_L)
    CACHE (xrw)     : ORIGIN = ORIGIN(STACK) + LENGTH(STACK), LENGTH = LENGTH(CCMRAM) - LENGTH(STACK_L)
}

/* produce a link error if there is not this amount of RAM for these sections */
_minimum_stack_size = 2K;
_minimum_heap_size = 16K;

/* Filesystem cache in RAM, and storage in flash */
_micropy_hw_internal_flash_storage_ram_cache_start = ORIGIN(CACHE);
_micropy_hw_internal_flash_storage_ram_cache_end = ORIGIN(CACHE) + LENGTH(CACHE);
_micropy_hw_internal_flash_storage_start = ORIGIN(FLASH_FS);
_micropy_hw_internal_flash_storage_end = ORIGIN(FLASH_FS) + LENGTH(FLASH_FS);
_micropy_hw_internal_flash_storage2_start = ORIGIN(FLASH_FS2);
_micropy_hw_internal_flash_storage2_end = ORIGIN(FLASH_FS2) + LENGTH(FLASH_FS2);

/* Define the stack.  The stack is full descending so begins just above last byte
   of RAM.  Note that EABI requires the stack to be 8-byte aligned for a call. */
_estack = ORIGIN(STACK) + LENGTH(STACK) - _estack_reserve;
_sstack = ORIGIN(STACK);

/* RAM extents for the garbage collector */
_ram_start = ORIGIN(RAM);
_ram_end = ORIGIN(RAM) + LENGTH(RAM);

_heap_start = _ebss; /* heap starts just after statically allocated memory */
_heap_end = _ram_end;
