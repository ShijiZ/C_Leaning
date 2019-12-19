//
//  Sum_of_Two_Matrices.c
//  C_Learning
//
//  Created by shiji zhao on 12/19/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>
int main(){
    float a[2][2], b[2][2], result[2][2];
    
    // Using nested loop to store values in the 2d array
    printf("Enter elements of 1st matrix\n");
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            printf("Enter a[%d][%d]: ", i+1, j+1);
            scanf("%f", &a[i][j]);
        }
    }
    
    // Using nested loop to store values in the 2d array
    printf("Enter elements of 2nd matrix\n");
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            printf("Enter b[%d][%d]: ", i+1, j+1);
            scanf("%f", &b[i][j]);
        }
    }
    
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            result[i][j] = a[i][j] + b[i][j];
        }
    }
    
    // Displaying the sum
    printf("\nSum of Matrix:\n");
    
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            printf("%.1f ", result[i][j]);
            
            if (j == 1)
              printf("\n");
        }
    }
}
