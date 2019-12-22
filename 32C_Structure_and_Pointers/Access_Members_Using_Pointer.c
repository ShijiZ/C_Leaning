//
//  Access_Members_Using_Pointer.c
//  C_Learning
//
//  Created by shiji zhao on 12/20/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>
struct person{
    int age;
    float weight;
};

int main(){
    struct person *personPtr, person1;
    personPtr = &person1;
    
    printf("Enter age: ");
    scanf("%d", &personPtr->age); // &personPtr->age is equivalent to (*personPtr).age
    
    printf("Enter weight: ");
    scanf("%f", &personPtr->weight); // &personPtr->weight is equivalent to (*personPtr).weight
    
    printf("Displaying:\n");
    printf("Age: %d\n", personPtr->age);
    printf("Weight: %f\n", personPtr->weight);
    
    return 0;
}
