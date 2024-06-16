//
// Created by M Mohiuddin on 5/11/2024.
//

#ifndef ASSIGN1SOLN_SUDOKUTESTER_H
#define ASSIGN1SOLN_SUDOKUTESTER_H

#define ROWS 9
#define COLS 9
#define RANGE 9 // for Pseudo Random Number Generator (PRNG)
#define OFFSET 1 // for PRNG

/**
 *
 * @param arr is an int type 2D array of ROWS x COLS size representing a full Sudoku grid
 * This function displays full Sudoku grid in a nice square readable grid on the console
 */
void printSudokuGrid(int arr[ROWS][COLS]);

/**
 *
 * @param arr  One row entered by the user
 * @param len is the length of the row
 * @param lowerBound smallest valid integer
 * @param upperBound largest valid integer
 * @return
 * This is a general data validation function and it does not allow any out of range or duplicate entries from the user.
 * The return integer is used to indicate whether the user entered an invalid value or not.
 */
int checkUserInputErrors(int arr[], int len, int lowerBound, int upperBound);
/**
 *
 * @param grid is an int type 2D array of ROWS x COLS size representing a full Sudoku grid
 * This function interacts with the user and ensures that user enters
 * two rows (one row at a time) and this function calls the function checkUserInputErrors for data validation.
 */
void getTwoRowsOfSudoku(int grid[][COLS]);

/**
 *
 * @param grid is an int type 2D array of ROWS x COLS size representing a full Sudoku grid
 * This function populates last seven rows, using PRNG(Pseudo Random Number Generator), of the Sudoku grid with ensuring no out of range or duplicates
 * entries are entered
 * first two of the rows
 */
void populateSudokuGrid(int grid[][COLS]);

/**
 *
 * @param arr is an int type 2D array of ROWS x COLS size representing a full Sudoku grid
 * @return conveys validity/invalidity to the caller
 * This function checks whether there are any duplicates in the columns or in the sub-grids of size 3 x 3, refer to the
 * rules of Sudoku for any details. This function may skip checking for duplicates in the rows as it has already been checked by
 * other functions.
 */
int checkSudoku(int arr[][COLS] );


#endif //ASSIGN1SOLN_SUDOKUTESTER_H
