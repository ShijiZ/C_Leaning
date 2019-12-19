//
//  Calculate_Average.c
//  C_Learning
//
//  Created by shiji zhao on 12/19/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>
int main(){
    int marks[10], i, n, sum = 0, average;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    printf("Enter Integers: \n");
    for (i=0; i<n; i++){
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    
    average = sum/n;
    printf("Average = %d\n", average);
    return 0;
}
