//
//  Passing_String_to_Function.c
//  C_Learning
//
//  Created by shiji zhao on 12/19/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>
void displayString(char str[]);

int main(){
    char str[50];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    displayString(str);
    return 0;
}

void displayString(char str[]){
    printf("String output: ");
    puts(str);
}
