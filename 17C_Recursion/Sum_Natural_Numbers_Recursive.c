//
//  Sum_Natural_Numbers_Recursive.c
//  C_Learning
//
//  Created by shiji zhao on 12/18/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>

int sum(int n);

int main(){
    int number, result;
    
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    
    result = sum(number);
    
    printf("sum = %d\n", result);
    return 0;
}

int sum(int n){
    if (n != 0)
        return n + sum(n-1);
    else
        return n;
}
