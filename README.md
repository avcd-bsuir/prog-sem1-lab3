[![License](https://img.shields.io/badge/license-CC%20BY--NC--SA%204.0-blue.svg)](https://bit.ly/cc-by-nc-sa-40)

# Usage

To clone repository correctly use `--recursive` flag with `git`.

To compile and run a program use:
```
$ ./build.sh gcc src/<filename>
```

Executable will be started automatically. It can be found in `build/scr/` folder.

# Semester \<1\> lab \<3\>

## Task \<1\>

Fill the array with real numbers from the keyboard. Replace all elements with their squares. Print array before and after transformation.

Original (ru):

Заполнить массив вещественными числами с клавиатуры. Заменить все элементы на их квадраты. Вывести массив до и после преобразования.

## Task \<2\>

Fill a two-dimensional array with ones and zeros in this way so that the ones are placed as black squares are placed on the chessboard, and zeros are like white boxes. The bottom left field on the chessboard is always black.

Original (ru):

Заполнить двумерный массив единицами и нулями таким образом, чтобы единицы размещались так, как размещаются на шахматной доске черные поля, а нули - как белые поля. Левое нижнее поле на шахматной доске всегда черное.

## Task \<3\>

You are given a two-dimensional array of non-zero integers. Determine how many times array elements change sign (assuming that the array is viewed line by line from top to bottom, and on each line - from left to right). Also take into account the change of sign when moving to a new line

Original (ru):

Дан двумерный массив ненулевых целых чисел. Определить, сколько раз элементы массива меняют знак (принимая, что массив просматривается построчно сверху вниз, а в каждой строке - слева направо). Смену знака при переходе на новую строку также учитывать

# Credits

Written by Alexey Filich.

# License

This repository is licensed under [Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International](LICENCE.md).

# Notes

For compiling with SDL2:
```
-lmingw32 -lSDL2main -lSDL2
```

For compiling with ncurses
```
-lncursesw
```

## Description for some `include` files:

- stdarg.h

    Variable arguments with `va_list args; va_start(args, last_variable_in_function); va_arg(args, type)`.

- stdbool.h

    `True` and `false`.

- stdio.h

    `printf`, `scanf`, `NULL`, etc.

- stdlib.h

    Memory: `malloc`, `calloc`, `free`, \
    Random: `rand`, `srand`.

- string.h

    `memset`, `memcpy`, `memmove`.

- time.h

    `time(0)`.
