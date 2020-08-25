//
//  main.c
//  exe3
//
//  Created by НУРИЯ on 8/26/20.
//  Copyright © 2020 НУРИЯ. All rights reserved.
//
// Nuriya Umirbekova exe3
#include <stdio.h>
int main() {
    int nRow;
    printf("enter number of rows: ");
    scanf("%d",  &nRow);
    int row, column, space;
    for(row=1; row<=nRow; row++){
        for(space=nRow-row; space>=1; space--){
            printf(" ");
        }
        for(column=1; column<=(row*2)-1; column++){
            printf("*");
        }
        printf("\n");
    }
    
   
}
