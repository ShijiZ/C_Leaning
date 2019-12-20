//
//  Pointers_and_Arrays.c
//  C_Learning
//
//  Created by shiji zhao on 12/19/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>
int main(){
    int i, x[6], sum = 0;
    printf("Enter 6 numbers: \n");
    for (i = 0; i < 6; i++){
        scanf("%d", x+i); // equivalent to scanf("%d", &x[i]);
        sum += *(x+i); // equivalent to sum += x[i]
    }
    printf("Sum = %d\n", sum);
    return 0;
}
