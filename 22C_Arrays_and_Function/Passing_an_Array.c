//
//  Passing_an_Array.c
//  C_Learning
//
//  Created by shiji zhao on 12/19/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>
void display(int age1, int age2){
    printf("%d\n", age1);
    printf("%d\n", age2);
}

int main(){
    int ageArray[] = {2, 8, 4, 12};
    
    // Passing second and third elements to display
    display(ageArray[1], ageArray[2]);
    return 0;
}
