//
//  Call_by_Reference.c
//  C_Learning
//
//  Created by shiji zhao on 12/19/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>
void swap(int* n1, int* n2);

int main(){
    int num1 = 5, num2 = 10;
    
    // Addresses of num1 and num2 are passed
    swap(&num1, &num2);
    
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);
    return 0;
}

void swap(int* n1, int* n2){
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
