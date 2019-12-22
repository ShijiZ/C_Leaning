//
//  Add_Two_Distances.c
//  C_Learning
//
//  Created by shiji zhao on 12/20/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>
struct Distance{
    int feet;
    float inch;
} dist1, dist2, sum;

int main(){
    printf("1st distance\n");
    printf("Enter feet: ");
    scanf("%d", &dist1.feet);
    printf("Enter inch: ");
    scanf("%f", &dist1.inch);
    
    printf("2nd distance\n");
    printf("Enter feet: ");
    scanf("%d", &dist2.feet);
    printf("Enter inch: ");
    scanf("%f", &dist2.inch);
    
    // Adding feet
    sum.feet = dist1.feet + dist2.feet;
    // Adding inches
    sum.inch = dist1.inch + dist2.inch;
    
    // changing to feet if inch is greater than 12
    while (sum.inch >= 12){
        ++sum.feet;
        sum.inch -= 12;
    }
    
    printf("Sum of distances = %d\'-%.1f\"\n", sum.feet, sum.inch);
    return 0;
}
