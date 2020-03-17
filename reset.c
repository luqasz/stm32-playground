#include <stdint.h>

extern int main(void);
extern unsigned int DATA_START[];
extern unsigned int DATA_END[];
extern unsigned int DATA_LOAD_ADDRESS[];
extern unsigned int BSS_START[];
extern unsigned int BSS_END[];

void
reset(void) {
    unsigned int *src;
    unsigned int *dst;

    /*
     * Initializes the .data section by copying it
     * from the location indicated by DATA_LOAD_ADDRESS.
    */
    dst = DATA_START;
    src = DATA_LOAD_ADDRESS;
    while (dst < DATA_END) {
        *dst = *src;
        src++;
        dst++;
    }

    /* Zeroes .bss section */
    dst = BSS_START;
    while(dst < BSS_END) {
        *dst = 0;
        dst++;
    }

    main();
}

