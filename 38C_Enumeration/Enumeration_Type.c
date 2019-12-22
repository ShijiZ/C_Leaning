//
//  Enumeration_Type.c
//  C_Learning
//
//  Created by shiji zhao on 12/21/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>

enum week {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

int main(){
    // createing today variable of enum week type
    enum week today;
    today = Wednesday;
    printf("Day %d\n", today+1);
    return 0;
}
