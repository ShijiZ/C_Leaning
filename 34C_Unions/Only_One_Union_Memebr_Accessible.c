//
//  Only_One_Union_Memebr_Accessible.c
//  C_Learning
//
//  Created by shiji zhao on 12/21/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>
union Job{
    float salary;
    int workerNo;
} j;

int main(){
    j.salary = 12.3;
    j.workerNo = 100;
    
    printf("Salary = %.1f\n", j.salary);
    printf("Number of workers = %d\n", j.workerNo);
    
    return 0;
}
