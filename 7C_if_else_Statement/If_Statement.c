//
//  If_Statement.c
//  C_Learning
//
//  Created by shiji zhao on 12/18/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>
int main(){
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    // true if number is less than 0
    if (number < 0) {
        printf("You entered %d.\n", number);
    }
    printf("The if statement is easy.\n");
    return 0;
}
