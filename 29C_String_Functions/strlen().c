//
//  strlen().c
//  C_Learning
//
//  Created by shiji zhao on 12/19/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(){
    char a[20] = "Program";
    char b[20] = {'P','r','o','g','r','a','m','\0'};
    
    printf("Length of string a = %ld \n", strlen(a));
    printf("Length of string b = %ld \n", strlen(b));
    
    return 0;
}
