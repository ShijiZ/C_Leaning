//
//  Passing_Structs_to_Functions.c
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

void display(struct student s);

int main(){
    struct student s1;
    
    printf("Enter name: ");
    scanf("%s", s1.name);
    
    printf("Enter age: ");
    scanf("%d", &s1.age);
    
    display(s1); // passing struct as an argument
    
    return 0;
}

void display(struct student s){
    printf("\nDisplaying information\n");
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
}
