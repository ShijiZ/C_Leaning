//
//  Working_of_Pointers.c
//  C_Learning
//
//  Created by shiji zhao on 12/19/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>
int main(){
    int *pc, c;
    
    c = 22;
    printf("Address of c: %p\n", &c);
    printf("Value of c: %d\n\n", c);
    
    pc = &c;
    printf("Address of pointer pc: %p\n", pc);
    printf("Content of pointer pc: %d\n\n", *pc);
    
    c = 11;
    printf("Address of pointer pc: %p\n", pc);
    printf("Content of pointer pc: %d\n\n", *pc);
    
    *pc = 2;
    printf("Address of c: %p\n", &c);
    printf("Value of c: %d\n\n", c);
    
    return 0;
}
