#include <stdio.h>
#include <math.h>
#include <unistd.h>

#define WIDTH 100
#define HEIGHT 20

int main() {
    for (int t = 0; t < 100; t++) {
        printf("\033[H\033[J"); // Terminali temizle
        for (int y = 0; y < HEIGHT; y++) {
            for (int x = 0; x < WIDTH; x++) {
                if (y == (int)(HEIGHT / 2 + (HEIGHT / 2 - 1) * sin(x * 0.1 + t * 0.2))) {
                    printf("*");
                } else {
                    printf(" ");
                }
            }
            printf("\n");
        }
        usleep(50000); // 50ms bekle
    }
    return 0;
}
