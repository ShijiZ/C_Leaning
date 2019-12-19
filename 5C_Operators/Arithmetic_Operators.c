//
//  Arithmetic_Operators.c
//  C_Learning
//
//  Created by shiji zhao on 12/17/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>
int main()
{
    int a = 9, b = 4, c;
    
    c = a+b;
    printf("a+b = %d \n",c);
    c = a-b;
    printf("a-b = %d \n",c);
    c = a*b;
    printf("a*b = %d \n",c);
    c = a/b;
    printf("a/b = %d \n",c);
    c = a%b;
    printf("Remainder when a divided by b = %d \n",c);
    
    return 0;
}
