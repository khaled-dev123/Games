#include "sudoku.h"
#include <stdio.h>
#include <stdlib.h>

setuppuzzle(int **puzzle)
{
    Square ***sudoku;
    int i, j;
    sudoku = malloc(sizeof(Square**) * 9);
    // loop through rows
    for (i = 0; i < 9; i++) {
        sudoku[i] = malloc(sizeof(Square*) * 9);
    } // loop through columns
        for (j = 0; j < 9; j++) {
            sudoku[i][j] = malloc(sizeof(Square));
            sudoku[i][j]->number = puzzle[i][j];
            sudoku[i][j]->row = i;
            sudoku[i][j]->column = j;
            if (sudoku[i][j]->code != 0){
                sudoku[i][j]->code = Posssible;
            } else {
                sudoku[i][j]->code = 0;
            } 
        }
    }
int ** creatpuzzle()
 {
    int **puzzle;
    int i, j;
    int arr[9][9] = 
       {0, 1, 9,    0, 0, 2,     0, 0, 0,
        4, 7, 0,    6, 9, 5,     0, 0, 1,
        0, 0, 0,    4, 0, 0,     0, 9, 0,
        
        8, 0, 0,    5, 0, 7,     0, 0, 0,
        0, 0, 0,    0, 0, 0,     0, 0, 0,
        0, 0, 0,    2, 0, 1,     9, 5, 8,
       
        0, 6, 0,    0, 0, 6,     0, 0, 0,
        6, 0, 0,    0, 2, 8,     0, 7, 9,
        0, 0, 0,    1, 0, 0,     8, 6, 0};
 puzzle = malloc(sizeof(int*) * 9);
 for (i = 0; i < 9; i++)
 {
   puzzle[i] = malloc(sizeof(int) * 9);
    for (j = 0; j < 9; j++)
    {
        puzzle[i][j] = arr[i][j];
    }
 }
 
       return puzzle;
          
       }
void printpuzzle(int **puzzle){
    int i, j;
    printf("--------------------------------\n");
    for (i = 0; i < 9; i++) {
        //print each row of the puzzle
        for (j = 0; j < 9; j++) {
            printf("%d ", puzzle[i][j]);
            if ((j + 1) % 3 == 0 && j < 8) {
                printf("| ");
            }
        }
        printf("\n");
        if ((i + 1) % 3 == 0 && i < 8) {
            printf("---------------------\n");
        }
        {
            /* code */
        }
        
    }
}