//
//  gets()_and_puts().c
//  C_Learning
//
//  Created by shiji zhao on 12/19/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>

int main(){
    char name[30];
    printf("Enter name: ");
    gets(name);  // Function to read string from user
    printf("Name: ");
    puts(name);  // Function to display string
    return 0;
}
