//
//  strcmp().c
//  C_Learning
//
//  Created by shiji zhao on 12/19/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(){
    char str1[] = "abcd", str2[] = "abCd", str3[] = "abcd";
    int result;
    
    result = strcmp(str1, str2);
    printf("strcmp(str1, str2) = %d\n", result);
    
    result = strcmp(str1, str3);
    printf("strcmp(str1, str3) = %d\n", result);
    
    return 0;
}
