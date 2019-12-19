//
//  Relational_Operators.c
//  C_Learning
//
//  Created by shiji zhao on 12/18/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>
int main(){
    int a = 5, b = 5, c = 10;
    printf("%d == %d is %d.\n", a, b, a==b);
    printf("%d == %d is %d.\n", a, c, a==c);
    printf("%d > %d is %d.\n", a, b, a>b);
    printf("%d < %d is %d.\n", a, c, a<c);
    printf("%d != %d is %d.\n", a, b, a!=b);
    printf("%d >= %d is %d.\n", a, c, a>=c);
    
    return 0;
}
