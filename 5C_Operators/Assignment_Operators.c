//
//  Assignment_Operators.c
//  C_Learning
//
//  Created by shiji zhao on 12/18/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>
int main(){
    int a = 5, c;
    
    c = a;  // c is 5
    printf("c = %d\n", c);
    c += 5;  // c is 10
    printf("c = %d\n", c);
    printf("a = %d\n", a);
    c *= a;  // c is 50
    printf("c = %d\n", c);
    printf("a = %d\n", a);
    
    // Note variable a never changes
    return 0;
}
