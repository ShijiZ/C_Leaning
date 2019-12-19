//
//  Gllobal_Variable.c
//  C_Learning
//
//  Created by shiji zhao on 12/18/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>

void display(void);

int n = 5;  // global variable

int main(){
    n++;
    display();
    return 0;
}

void display(){
    n++;
    printf("n = %d\n", n);
}
