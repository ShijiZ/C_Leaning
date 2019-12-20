//
//  strcat().c
//  C_Learning
//
//  Created by shiji zhao on 12/19/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(){
    char str1[30], str2[30];
    strcpy(str1, "This is ");
    strcpy(str2, "programiz.com");
    
    // concatenates str1 and str2 and resultant string is stored in str1.
    strcat(str1, str2);
    
    puts(str1);
    puts(str2);
    
    return 0;
}
