//
//  Differences_between_Unions_and_Structure.c
//  C_Learning
//
//  Created by shiji zhao on 12/21/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>
union unionJob{
    // defining a union
    char name[32];
    float salary;
    int workerNo;
} uJob;

struct structJob{
    char name[32];
    float salary;
    int workerNo;
} sJob;

int main(){
    printf("size of union = %lu bytes\n", sizeof(uJob));
    printf("size of structure = %lu bytes\n", sizeof(sJob));
    
    return 0;
}
