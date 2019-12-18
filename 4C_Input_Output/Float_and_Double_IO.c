//
//  Float_and_Double_Input.c
//  C_Learning
//
//  Created by shiji zhao on 12/17/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>
int main(){
    float num1;
    double num2;
    
    printf("Enter a number: ");
    scanf("%f", &num1);
    printf("Enter another number: ");
    scanf("%lf", &num2);
    
    printf("num1 = %f\n", num1);
    printf("num2 = %lf\n", num2);
    return 0;
}
