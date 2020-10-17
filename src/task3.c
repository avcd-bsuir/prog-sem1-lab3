// License: CC BY-NC-SA 4.0
/*
 * task3.c
 *
 * You are given a two-dimensional array of non-zero integers.
 * Determine how many times array elements change sign
 * (assuming that the array is viewed line by line from top to bottom, and on each line - from left to right).
 * Also take into account the change of sign when moving to a new line
 *
 * Written by AlexeyFilich
 * 25 sep 2020
 */

#include <stdbool.h>
#include <stdio.h>
#include "Random.h"

#define WIDTH 3
#define HEIGHT 3

int main(int argc, char* args[]) {
    int array[WIDTH][HEIGHT];
    bool state;
    int toggles = 0;
    for (int y = 0; y < HEIGHT; y++) { // Iterate rows
        for (int x = 0; x < WIDTH; x++) { // Cols
            int val;
            do {
                val = aRandInt(-10, 10);
            } while (val == 0);
            array[x][y] = val; // Set x, y item a random value but not 0
            printf("%3d ", val);
        }
        printf("\n");
    }
    state = array[0][0] > 0 ? true : false; // Set state true if first element is positive, false if negative
    for (int y = 0; y < HEIGHT; y++) { // Iterate rows
        for (int x = 0; x < WIDTH; x++) { // Cols
            if ((array[x][y] > 0 ? true : false) != state) { // If current item is different sign with current state
                state = !state; // Invert state
                toggles++; // Add toggle
            }
        }
    }
    printf("Toggles: %d\n", toggles);
    return 0;
}
