//
//  calloc()_and_free().c
//  C_Learning
//
//  Created by shiji zhao on 12/19/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, *ptr, sum = 0;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    ptr = (int*) calloc(n, sizeof(int));
    
    // If memory cannot be allocated
    if (ptr == NULL){
        printf("Error! Momory not allocated.");
        exit(0);
    }
    
    printf("Enter elements: \n");
    for (i = 0; i < n; i++){
        scanf("%d", ptr+i);
        sum += *(ptr+i);
    }
    
    printf("Sum = %d\n", sum);
    
    // deallocate the memory
    free(ptr);
    
    return 0;
}
