//
//  Simple_Calculator.c
//  C_Learning
//
//  Created by shiji zhao on 12/18/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>
int main(){
    char operator;
    double n1, n2;
    
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%lf %lf", &n1, &n2);
    
    switch (operator) {
        case '+':
            printf("%.1lf + %.1lf = %.1lf\n", n1, n2, n1+n2);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf\n", n1, n2, n1-n2);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf\n", n1, n2, n1*n2);
            break;
        case '/':
            printf("%.1lf / %.1lf = %.1lf\n", n1, n2, n1/n2);
            break;
            
        // Operator doesn't match any case constant +, -, *, /
        default:
            printf("Error! operator is not correct");
    }
    return 0;
}
