//
//  Continue_Statement.c
//  C_Learning
//
//  Created by shiji zhao on 12/18/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>
int main(){
    int i;
    double number, sum = 0.0;
    for(i = 1; i <= 10; i++){
        printf("Enter a n%d: ", i);
        scanf("%lf", &number);
        if (number < 0.0){
            continue;
        }
        sum += number;
    }
    printf("Sum = %.2lf\n",sum);
    
    return 0;
}
