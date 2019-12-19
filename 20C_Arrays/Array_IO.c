//
//  Array_IO.c
//  C_Learning
//
//  Created by shiji zhao on 12/19/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>
int main(){
    int value[5];
    
    printf("Enter 5 Integers: \n");
    
    // taking input and store it in the array
    for (int i=0; i<5; i++){
        scanf("%d", &value[i]);
    }
    
    printf("Displaying integers: \n");
    for (int i=0; i<5; i++){
        printf("%d\n", value[i]);
    }
    return 0;
}
