//
//  Local_Variable.c
//  C_Learning
//
//  Created by shiji zhao on 12/18/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>
int main(void){
    for (int i=0; i<5; i++)
        printf("C programming");
    
    // Error: i is not declared at this point
    printf("%d", i);
    return 0;
}
