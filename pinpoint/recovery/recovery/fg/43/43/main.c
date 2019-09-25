//
//  main.c
//  43
//
//  Created by s20181102934 on 2019/9/24.
//  Copyright © 2019 win. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int a=2222;
    int b;
    printf("输入你的猜想:\n");
    scanf("%d",&b);
    int c=b-a;
    if (b<=a) {
        c=-c;
    }
    while (b!=a) {
        if(c>1000){
            printf("你在想什么啊？？？\n");
        }
        else if(c>100){
            printf("离正确答案比较远\n");
        }
        else if(c>10){
            printf("快猜对了，还差一些\n");
        }
        else if(c>=1){
            printf("就快得到正确结果了！\n");
        }
        else{
            printf("too far\n");
        }
        scanf("%d",&b);
        c=b-a;
        if (b<=a) {
            c=-c;
        }
    }
    printf("真不容易啊猜对了！！！\n");
    
}
