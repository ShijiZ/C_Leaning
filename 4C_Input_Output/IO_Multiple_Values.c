//
//  IO_Multiple_Values.c
//  C_Learning
//
//  Created by shiji zhao on 12/17/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>
int main(){
    int a;
    float b;
    
    printf("Enter integer and then a float: ");
    
    // Taking multiple inputs
    scanf("%d%f", &a, &b);
    
    printf("You entered %d and %f\n", a, b);
    return 0;
}
