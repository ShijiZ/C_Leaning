//
//  Passing_Pointers_to_Functions.c
//  C_Learning
//
//  Created by shiji zhao on 12/19/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>
void addOne(int* ptr){
    (*ptr)++; // Adding 1 to *ptr
}

int main(){
    int* p, i = 10;
    p = &i;
    addOne(p);
    
    printf("i = %d\n", *p);
    return 0;
}
