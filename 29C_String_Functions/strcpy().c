//
//  strcpy().c
//  C_Learning
//
//  Created by shiji zhao on 12/19/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(){
    char str1[10] = "awesome";
    char str2[10];
    char str3[10];
    
    strcpy(str2, str1);
    strcpy(str3, "well");
    
    puts(str2);
    puts(str3);
    
    return 0;
}
