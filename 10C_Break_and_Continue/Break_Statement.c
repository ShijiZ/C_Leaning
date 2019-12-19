//
//  Break_Statement.c
//  C_Learning
//
//  Created by shiji zhao on 12/18/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>
int main(){
    int i;
    double number, sum = 0;
    
    for (i = 1; i <= 10; i++){
        printf("Enter a number: ");
        scanf("%lf", &number);
        
        // If the user enters a negative number. the loop ends
        if (number < 0){
            break;
        }
        
        sum += number;
    }
    
    printf("Sum = %.2lf\n",sum);
    return 0;
}
