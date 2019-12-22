//
//  Getting_Data_Using_fseek().c
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
    
    if ((fptr = fopen("/Users/shijizhao/Documents/Programming_Learning/C_Learning/36C_Files_Input_Output/program.bin", "rb")) == NULL){
        printf("ERROR!");
        exit(1);
    }
    
    // Moves the cursor to the end of the file
    fseek(fptr, -sizeof(struct threeNum), SEEK_END);
    
    for (n = 1; n < 5; n++){
        fread(&num, sizeof(struct threeNum), 1, fptr);
        printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);
        fseek(fptr, -2*sizeof(struct threeNum), SEEK_CUR);
    }
    fclose(fptr);
    
    return 0;
}
