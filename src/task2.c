// License: CC BY-NC-SA 4.0
/*
 * task2.c
 *
 * Fill a two-dimensional array with ones and zeros in this way
 * so that the ones are placed as black squares are placed on the chessboard,
 * and zeros are like white boxes. The bottom left field on the chessboard is always black.
 *
 * Written by AlexeyFilich
 * 25 sep 2020
 */

#include <stdio.h>

#define WIDTH 10
#define HEIGHT 6

int main(int argc, char* args[]) {
    int array[WIDTH][HEIGHT]; // Create WIDTH x HEIGHT array of int
    for (int y = 0; y < HEIGHT; y++) { // Iterate rows
        array[0][y] = (HEIGHT % 2 == 0) ? (y % 2) : !(y % 2); // Start value should be 1 every odd or even row. What row is it depends on HEIGHT, because left-bottom item must be 1
        for (int x = 1; x < WIDTH; x++) // Cols
            array[x][y] = !array[x - 1][y]; // Value must be equal !prev_value
    }
    // Print array
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++)
            printf("%d", array[x][y]);
        printf("\n");
    }
    return 0;
}
