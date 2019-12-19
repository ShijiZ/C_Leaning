//
//  Logical_Operators.c
//  C_Learning
//
//  Created by shiji zhao on 12/18/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>
int main(){
    int a = 5, b = 5, c = 10, result;
    result = (a == b) && (c > b);
    printf("(a == b) && (c > b) is %d.\n", result);
    result = (a == b) && (c < b);
    printf("(a == b) && (c < b) is %d.\n", result);
    result = (a == b) || (c < b);
    printf("(a == b) || (c < b) is %d.\n", result);
    result = (a != b) || (c < b);
    printf("(a != b) || (c < b) is %d.\n", result);
    result = !(a != b);
    printf("!(a == b) is %d.\n", result);
    result = !(a == b);
    printf("!(a == b) is %d.\n", result);
    return 0;
}
