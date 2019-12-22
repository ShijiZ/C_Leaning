//
//  Enum_for_Flags.c
//  C_Learning
//
//  Created by shiji zhao on 12/21/19.
//  Copyright © 2019 shiji zhao. All rights reserved.
//

#include <stdio.h>

enum designFlags{
    BOLD = 1,
    ITALICS = 2,
    UNDERLINE = 4
};

int main(){
    int myDesign = BOLD | UNDERLINE;
    
    //   00000001
    //  |00000100
    //   00000101
    
    printf("%d\n", myDesign);
    return 0;
}
