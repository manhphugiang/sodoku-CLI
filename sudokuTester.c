//
//
#include "sudokuTester.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/**
 *
 * @param arr is an int type 2D array of ROWS x COLS size representing a full
 * Sudoku grid This function displays full Sudoku grid in a nice square readable
 * grid on the console
 */
void printSudokuGrid(int arr[ROWS][COLS]) {
    // TODO 1 implement printSudokuGrid function
puts("  ----------Sodoku Grid------------");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("  %d ", arr[i][j]);
        } // end loop print columns
        printf("\n");
    } // end the loop print rows
} // printSudokuGrid function ends

/**
 *
 * @param arr  One row entered by the user
 * @param len is the length of the row
 * @param lowerBound smallest valid integer
 * @param upperBound largest valid integer
 * @return
 * This is a general data validation function and it does not allow any out of
 * range or duplicate entries from the user. The return integer is used to
 * indicate whether the user entered an invalid value or not.
 */
int checkUserInputErrors(int arr[], int len, int lowerBound, int upperBound) {
    // TODO 2 implement checkUserInputErrors function
    //  Check for out-of-range values
    //  Check for out-of-range values
    if (len != 9)
        return 1;

    for (int i = 0; i < len; i++) {
        if (arr[i] < lowerBound || arr[i] > upperBound) {
            return 2;
        }
    } // loop out of range

    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (arr[i] == arr[j]) {
                return 3;
            }
        }
    } // loop for duplicate

    return 0;
} // checkUserInputErrors function ends

/**
 *
 * @param arr is an int type 2D array of ROWS x COLS size representing a full
 * Sudoku grid This function interacts with the user and ensures that user
 * enters two rows (one row at a time) and this function calls the function
 * checkUserInputErrors for data validation.
 */
void getTwoRowsOfSudoku(int arr[][COLS]) {
    // TODO 3 implement getTwoRowsOfSudoku function

    printf("Given Sodoku Grid is valid\nEnter row 1 of your Sodoku grid\n");
    printf("Use Space/Tab/Return Key to enter the next values\nand press "
        "'Return' after entering nine integers.\n");
    printf("Remember, to make a valid row of Sodoku grid,\nall integers should "
        "be distinct and range from 1 to 9\n");

    int count = 0;
    int err = 1;
    int buffer_size = 256;
    char *buffer;
    int entered_arr[9];


    while (err != 0 || count < 2) {
        int len = 0;

            printf("Enter row %d of your sodoku grid:\n", count +1);


            buffer = (char *) alloca(sizeof(char) * buffer_size);
            if (fgets(buffer, buffer_size, stdin)) {
                int len = sscanf(buffer, "%d %d %d %d %d %d %d %d %d",
                                 &entered_arr[0], &entered_arr[1], &entered_arr[2],
                                 &entered_arr[3], &entered_arr[4], &entered_arr[5],
                                 &entered_arr[6], &entered_arr[7], &entered_arr[8]);

                err = checkUserInputErrors(entered_arr, len, 1, 9);
                if (err == 1) {
                    printf("You have to enter EXACTLY nine INTEGERS \n\n");
                    printf("Use Space/Tab/Return Key to enter the next values\nand press "
                        "'Return' after entering nine integers.\n");
                    printf("Remember, to make a valid row of Sodoku grid,\nall integers should "
                        "be distinct and range from 1 to 9\n");
                } else if (err == 2) {
                    printf("One or more entries are outside of range 1 to 9 \n\n");
                    printf("Use Space/Tab/Return Key to enter the next values\nand press "
                        "'Return' after entering nine integers.\n");
                    printf("Remember, to make a valid row of Sodoku grid,\nall integers should "
                        "be distinct and range from 1 to 9\n");
                } else if (err == 3) {
                    printf("There is a duplicate numbers\n\n");
                    printf("Use Space/Tab/Return Key to enter the next values\nand press "
                        "'Return' after entering nine integers.\n");
                    printf("Remember, to make a valid row of Sodoku grid,\nall integers should "
                        "be distinct and range from 1 to 9\n");
                } else if (err == 0) {
                    // no error
                    memcpy(arr[count++], entered_arr, sizeof(int) * 9);
                }
            }
        }

} // getTwoRowsOfSudoku function ends

/**
 *
 * @param grid is an int type 2D array of ROWS x COLS size representing a full
 * Sudoku grid This function populates last seven rows, using PRNG(Pseudo Random
 * Number Generator), of the Sudoku grid with ensuring no out of range or
 * duplicates entries are entered first two of the rows
 */
void populateSudokuGrid(int grid[][COLS]) {
    // TODO 4 implement populateSudokuGrid function
    int flags[COLS];
    memset(flags, 0, sizeof(int) * COLS);

    srand(time(NULL));
    for (int i = 2; i < ROWS; i++) {
        memset(flags, 0, sizeof(int) * COLS);
        for (int j = 0; j < COLS; j++) {
            int n = rand() % RANGE;
            while (flags[n] == 1)
                n = (n + 1) % RANGE;

            if (flags[n] == 0) {
                flags[n] = 1;
                grid[i][j] = n + OFFSET;
            }
        }
    }
} // populateSudokuGrid function ends

/**
 *
 * @param sudoku is an int type 2D array of ROWS x COLS size representing a full
 * Sudoku grid
 * @return conveys validity/invalidity to the caller
 * This function checks whether there are any duplicates in the columns or in
 * the sub-grids of size 3 x 3, refer to the rules of Sudoku for any details.
 * This function may skip checking for duplicates in the rows as it has already
 * been checked by other functions.
 */
int checkSudoku(
    int sudoku[ROWS][COLS]) {
    // TODO 5 implement checkSudoku function

    int flags[COLS];
    memset(flags, 0, sizeof(int) * COLS);

    for (int i = 0; i < ROWS; i += 1) {
        memset(flags, 0, sizeof(int) * COLS);
        for (int j = 0; j < COLS; j += 1) {
            int n = sudoku[i][j] - 1;
            if (n > 0 && n < 10) {
                if (flags[n] == 0) {
                    flags[n] = 1;
                } else {
                    return 0;
                }
            }
        }
    }

    memset(flags, 0, sizeof(int) * COLS);
    for (int i = 0; i < ROWS; i += 1) {
        memset(flags, 0, sizeof(int) * COLS);
        for (int j = 0; j < COLS; j += 1) {
            int n = sudoku[j / 3 + (i % 3) * 3][j % 3 + (i / 3) * 3] - 1;
            if (n > 0 && n < 10) {
                if (flags[n] == 0) {
                    flags[n] = 1;
                } else {
                    return 0;
                }
            }
        }
    }

    return 1;
} // checkSudoku function ends
