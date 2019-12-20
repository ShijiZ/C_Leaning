//
//  Confusing_Pointer_Syntax.c
//  C_Learning
//
//  Created by shiji zhao on 12/19/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>
int main(){
    int c = 5;
    int *p = &c; // This is equivalent to int* p = &c
    
    printf("%d\n", *p);
    return 0;
}
