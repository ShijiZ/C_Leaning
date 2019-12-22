//
//  Write_to_a_Binary_File.c
//  C_Learning
//
//  Created by shiji zhao on 12/21/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

struct threeNum{
    int n1, n2, n3;
};

int main(){
    int n;
    struct threeNum num;
    FILE *fptr;
    
    if ((fptr = fopen("/Users/shijizhao/Documents/Programming_Learning/C_Learning/36C_Files_Input_Output/program.bin", "wb")) == NULL){
        printf("Error!");
        exit(1);
    }
    
    for (n = 1; n < 5; n++){
        num.n1 = n;
        num.n2 = 5*n;
        num.n3 = 5*n + 1;
        fwrite(&num, sizeof(struct threeNum), 1, fptr);
    }
    
    fclose(fptr);
    return 0;
}
