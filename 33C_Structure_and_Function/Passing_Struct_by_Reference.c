//
//  Passing_Struct_by_Reference.c
//  C_Learning
//
//  Created by shiji zhao on 12/21/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>
typedef struct Complex{
    float real;
    float imag;
} complex;

void addNumbers(complex c1, complex c2, complex* result);

int main(){
    complex c1, c2, result;
    
    printf("For the first number,\n");
    printf("Enter real part: ");
    scanf("%f", &c1.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c1.imag);
    
    printf("\nFor the second number,\n");
    printf("Enter real part: ");
    scanf("%f", &c2.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c2.imag);
    
    addNumbers(c1, c2, &result);
    printf("\nresult.real = %.1f\n", result.real);
    printf("result.imag = %.1f\n", result.imag);
    
    return 0;
}

void addNumbers(complex c1, complex c2, complex* result){
    result->real = c1.real + c2.real;
    result->imag = c1.imag + c2.imag;
}
