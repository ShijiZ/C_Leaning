//
//  Return_Struct_from_Function.c
//  C_Learning
//
//  Created by shiji zhao on 12/21/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>
struct student{
    char name[50];
    int age;
};

struct student getInformation(void);

int main(){
    struct student s;
    
    s = getInformation();
    
    printf("\nDisplaying information\n");
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    
    return 0;
}

struct student getInformation(){
    struct student s1;
    
    printf("Enter name: ");
    scanf("%s", s1.name);
    
    printf("Enter age: ");
    scanf("%d", &s1.age);
    
    return s1;
}
