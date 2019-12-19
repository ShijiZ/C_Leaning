//
//  With_Arg_No_Return.c
//  C_Learning
//
//  Created by shiji zhao on 12/18/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>

void checkPrimeAndDisplay(int n);

int main(){
    int n;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    checkPrimeAndDisplay(n);
    
    return 0;
}

void checkPrimeAndDisplay(int n){
    int i, flag = 0;
    
    for (i = 2; i <= n/2; i++){
        if (n % i == 0){
            flag = 1;
            break;
        }
    }
    
    if (flag == 1)
        printf("%d is not a prime number.\n", n);
    else
        printf("%d is a prime number.\n", n);
}
