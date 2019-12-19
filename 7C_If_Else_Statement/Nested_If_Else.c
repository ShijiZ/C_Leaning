//
//  Nested_If_Else.c
//  C_Learning
//
//  Created by shiji zhao on 12/18/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>
int main(){
    int number1, number2;
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);
    if (number1 >= number2) {
      if (number1 == number2) {
        printf("Result: %d = %d\n",number1,number2);
      }
      else {
        printf("Result: %d > %d\n", number1, number2);
      }
    }
    else {
        printf("Result: %d < %d\n",number1, number2);
    }
    return 0;
}
