//
//  Enum_Variable_Take_One_Value.c
//  C_Learning
//
//  Created by shiji zhao on 12/21/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>

enum suit{
    club = 0,
    diamonds = 10,
    hearts = 20,
    spades = 3
} card;

int main(){
    card = club;
    printf("Size of enum variable = %lu bytes\n", sizeof(card));
    return 0;
}
