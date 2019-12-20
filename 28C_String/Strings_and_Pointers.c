//
//  Strings_and_Pointers.c
//  C_Learning
//
//  Created by shiji zhao on 12/19/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>
int main(void){
    char name[] = "Harry Potter";
    
    printf("%c\n", *name);
    printf("%c\n", *(name+1));
    printf("%c\n", *(name+7));
    
    char *namePtr;
    
    namePtr = name;
    printf("%c\n", *namePtr);
    printf("%c\n", *(namePtr+1));
    printf("%c\n", *(namePtr+7));
    
    return 0;
}
