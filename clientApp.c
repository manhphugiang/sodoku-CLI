/* sudokuSolnTester.c built by M. Mohiuddin and revised on Jan 7, 2021.
 * It first checks a given Sudoku grid for its validity and then prompts the user to enter two rows of a Sudoku grid and
 * validates the user input against out-of-range, duplicate entries. It then assigns distinct and random integers within
 * the valid range of 1 to 9 to each row and then checks the Sudoku grid so built to be valid or not.
 * Revised on May 11, 2024 the project by introducing functions and simplifying the client application to initializing a
 * test grid and appropriate function calls.
 * This assignment is done by ____Manh Phu Giang__(Student's name) on __May 28 2024____ (date)
 */
#include <stdio.h>
#include <stdlib.h>
#include "sudokuTester.h"

int main()
{
    int arr[ROWS][COLS];
    int testGrid[ ][ COLS ] = { {5,3,4,6,7,8,9,1,2},
                                {6,7,2,1,9,5,3,4,8},
                                {1,9,8,3,4,2,5,6,7},
                                {8,5,9,7,6,1,4,2,3},
                                {4,2,6,8,5,3,7,9,1},
                                {7,1,3,9,2,4,8,5,6},
                                {9,6,1,5,3,7,2,8,4},
                                {2,8,7,4,1,9,6,3,5},
                                {3,4,5,2,8,6,1,7,9}};

    printSudokuGrid(testGrid);
    printf(checkSudoku(testGrid) ? "It is a valid solution\n" :"It is an invalid solution\n");
    getTwoRowsOfSudoku(arr);
    populateSudokuGrid(arr);
    printSudokuGrid(arr);
    printf(checkSudoku(arr) ? "\nIt is a valid solution\n" :"\nIt is an invalid solution\n");
    return 0;
}

