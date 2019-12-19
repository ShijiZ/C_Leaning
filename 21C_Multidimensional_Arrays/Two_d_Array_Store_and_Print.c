//
//  Two_d_Array_Store_and_Print.c
//  C_Learning
//
//  Created by shiji zhao on 12/19/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>
const int CITY = 2;
const int WEEK = 7;
int main(){
    int temperature[CITY][WEEK];
    
    // Using nested loop to store values in the 2d array
    for (int i = 0; i < CITY; i++){
        for (int j = 0; j < WEEK; j++){
            printf("City %d, Week %d: ", i+1, j+1);
            scanf("%d", &temperature[i][j]);
        }
    }
    
    printf("\nDisplaying values: \n");
    for (int i = 0; i < CITY; i++){
        for (int j = 0; j < WEEK; j++){
            printf("City %d, Week %d = %d\n", i+1, j+1, temperature[i][j]);
        }
    }
    
    return 0;
    
}
