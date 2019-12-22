//
//  #define_Preprocessor.c
//  C_Learning
//
//  Created by shiji zhao on 12/21/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>
#define PI 3.1415

int main(){
    float radius, area;
    printf("Enter the radius: ");
    scanf("%f", &radius);
    
    area = PI*radius*radius;
    
    printf("Area = %.2f\n", area);
    return 0;
}
