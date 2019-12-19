//
//  With_Arg_With_Return.c
//  C_Learning
//
//  Created by shiji zhao on 12/18/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>

int checkPrimeNumber(int n);

int main(){
    int n, flag;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    flag = checkPrimeNumber(n);
    
    if (flag == 1)
        printf("%d is not a prime number.\n", n);
    else
        printf("%d is a prime number.\n", n);
    
    return 0;
}

int checkPrimeNumber(int n){
    int i;
    
    for (i = 2; i <= n/2; i++){
        if (n % i == 0){
            return 1;
        }
    }
    
    return 0;
}
