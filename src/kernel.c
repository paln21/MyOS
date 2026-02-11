extern unsigned char __heap_base;

#define WIDTH 320
#define HEIGHT 200

unsigned int *vram = (unsigned int *)&__heap_base;

void kernel_main() {
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            vram[y * WIDTH + x] = 0xFFFF0000;
        }
    }
}

unsigned int* get_vram_pointer() {
    return vram;
}
