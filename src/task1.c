// License: CC BY-NC-SA 4.0
/*
 * task1.c
 *
 * Fill the array with real numbers from the keyboard.
 * Replace all elements with their squares. Print array before and after transformation.
 *
 * Written by AlexeyFilich
 * 25 sep 2020
 */

#include <stdio.h>
#include "Interactions.h"

#define size 4

int main(int argc, char* args[]) {
    float array[size]; // Create array w/ size elements in it
    printf("Input 10 float:\n");
    for (int i = 0; i < size; i++) // Read 5 elements with type check
        aScanCheck("Num: ", "%f", &array[i]);
    printf("Before: ");
    for (int i = 0; i < size; i++) // Print array before squaring
        printf("%.3f ", array[i]);
    printf("\nAfter:  ");
    for (int i = 0; i < size; i++) // Print array after squaring
        printf("%.3f ", array[i] * array[i]);
    printf("\n");
    return 0;
}
