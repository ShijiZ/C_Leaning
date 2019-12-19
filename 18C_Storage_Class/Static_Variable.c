//
//  Static_Variable.c
//  C_Learning
//
//  Created by shiji zhao on 12/19/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>
void display(void);

int main(){
    display();
    display();
}

void display(){
    static int c = 1;
    c += 5;
    printf("%d\n", c);
}
