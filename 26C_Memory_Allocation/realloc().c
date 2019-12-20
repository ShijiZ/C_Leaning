//
//  realloc().c
//  C_Learning
//
//  Created by shiji zhao on 12/19/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2, i, *ptr;
    
    printf("Enter size: ");
    scanf("%d", &n1);
    
    ptr = (int*) malloc(n1 * sizeof(int));
    
    printf("Addressed of previously allocated memory:\n");
    for (i = 0; i < n1; i++){
        printf("%p\n", ptr+i);
    }
    
    printf("Enter a new size: \n");
    scanf("%d", &n2);
    
    ptr = realloc(ptr, n2 * sizeof(int));
    
    printf("Addressed of newly allocated memory:\n");
    for (i = 0; i < n2; i++){
        printf("%p\n", ptr+i);
    }
    
    // deallocate the memory
    free(ptr);
    
    return 0;
}
