//
//  Goto_Statement.c
//  C_Learning
//
//  Created by shiji zhao on 12/18/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>
int main(){
    const int maxInput = 5;
    int i;
    double number, average, sum = 0;
    
    for (i=1; i<=maxInput; i++){
        printf("%d. Enter a number: ", i);
        scanf("%lf", &number);
        
        if (number < 0){
            goto jump;
        }
        
        sum += number;
    }
    
    jump:
    average = sum/(i-1);
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", average);
    return 0;
}
