//
//  Write_to_a_Text_File.c
//  C_Learning
//
//  Created by shiji zhao on 12/21/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num;
    FILE *fptr;
    
    fptr = fopen("/Users/shijizhao/Documents/Programming_Learning/C_Learning/36C_Files_Input_Output/program.txt", "w");
    
    if (fptr == NULL){
        printf("ERROR!");
        exit(1);
    }
    
    printf("Enter num: ");
    scanf("%d", &num);
    
    fprintf(fptr, "%d", num);
    fclose(fptr);
    
    return 0;
}
