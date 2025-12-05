//
//  main.c
//  calculater
//
//  Created by Rendezvous on 2025/12/5.
//
#include<stdio.h>
int main(void){
    int a;
    printf("========欢迎来到小计算器========\n");
    printf(">>输入1<< : 进入加法模式\n");
    printf(">>输入2<< ： 进入减法模式\n");
    printf(">>输入3<< ： 进入乘法模式\n");
    printf(">>输入4<< ： 进入除法模式\n");
    scanf("%d",&a);
    if(a == 1){
        int b,c;
        printf("请输入两个整数以相加:\n");
        scanf("%d %d",&b,&c);
        int sum;
        sum = a + b;
        printf("%d加%d等于%d \n",b,c,sum);
    }
    else if(a == 2){
        int d,e;
        printf("请输入两个整数以相减\n");
        scanf("%d %d",&d,&e);
        int subs;
        subs = d - e;
        printf("%d减%d等于%d \n",d,e,subs);
        
    }
    else if (a == 3){
        int f,g;
        printf("请输入两个整数以相乘 \n");
        scanf("%d %d",&f,&g);
        int multi;
        multi = f * g;
        printf("%d减%d等于%d \n",f,g,multi);
    }
    else if (a == 4){
        int h,i;
        printf("请输入两个整数以相除");
        scanf("%d %d",&h,&i);
        int divi;
        divi = h / i;
        printf("%d除以%d等于%d",h,i,divi);//输出的整数，有至少两种解决方案。1，把余数表示出来；2，直接输出一个一定位数的小数。
    }
    else{
        return 0;
    }
        return 0;
}

