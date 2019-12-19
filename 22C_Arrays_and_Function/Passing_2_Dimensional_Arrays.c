//
//  Passing_2_Dimensional_Arrays.c
//  C_Learning
//
//  Created by shiji zhao on 12/19/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>
void displayNumbers(int num[2][2]);

int main(){
    int num[2][2];
    printf("Enter 4 numbers:\n");
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            scanf("%d", &num[i][j]);
        }
    }
    displayNumbers(num);
    return 0;
}
    
    // Passing multi-dimensional array to a function
void displayNumbers(int num[2][2]){
    printf("Displaying:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\n", num[i][j]);
        }
    }
}
