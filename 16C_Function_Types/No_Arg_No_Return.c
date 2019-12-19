//
//  No_Arg_No_Return.c
//  C_Learning
//
//  Created by shiji zhao on 12/18/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>

void checkPrimeNumber(void);

int main(){
    checkPrimeNumber();
    return 0;
}

void checkPrimeNumber(){
    int n, i, flag = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
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
