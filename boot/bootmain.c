#include <defs.h>

/**
 * 操作系统引导入口
 */
void bootmain(void) {

    //
    uint8_t *input = (uint8_t *)0xB8000;
    uint8_t color = (0 << 4) | (15 & 0x0F);

    *input++ = 'H'; *input++ = color;
    *input++ = 'e'; *input++ = color;
    *input++ = 'l'; *input++ = color;
    *input++ = 'l'; *input++ = color;
    *input++ = 'o'; *input++ = color;
    *input++ = ','; *input++ = color;
    *input++ = 'J'; *input++ = color;
    *input++ = 'U'; *input++ = color;
    *input++ = 'N'; *input++ = color;
    *input++ = 'I'; *input++ = color;
    *input++ = 'O'; *input++ = color;
    *input++ = 'R'; *input++ = color;
    *input++ = ' '; *input++ = color;
    *input++ = 'O'; *input++ = color;
    *input++ = 'S'; *input++ = color;
    *input++ = '!'; *input++ = color;
}