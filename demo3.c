#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#define WIDTH 80
#define HEIGHT 24
#define STARS 100

typedef struct {
    int x, y;
} Star;

int main() {
    Star stars[STARS];
    srand(time(NULL));

    
    for (int i = 0; i < STARS; i++) {
        stars[i].x = rand() % WIDTH;
        stars[i].y = rand() % HEIGHT;
    }

    while (1) {
        printf("\033[H\033[J"); 
        for (int i = 0; i < STARS; i++) {
            printf("\033[%d;%dH*\033[0m", stars[i].y, stars[i].x);
            stars[i].x = (stars[i].x + 1) % WIDTH; 
        }
        usleep(100000);
    }

    return 0;
}
