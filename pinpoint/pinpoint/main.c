//
//  main.c
//  pinpoint
//
//  Created by s20181102934 on 2019/9/10.
//  Copyright © 2019 win. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int *p;
    int *k;
    int i,j,l;
    scanf("%d",&i);
    p=&i;
    k=&i;
    printf("%x\n%x\n",p,k);
    printf("Hello, World!\n");
    return 0;
}
