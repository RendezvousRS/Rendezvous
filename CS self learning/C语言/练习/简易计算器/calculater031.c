//
//  main.c
//  calcu031
//
//  Created by Rendezvous on 2025/12/6.
//

#include<stdio.h>
int main(void){
    int a;
    printf("计算器");
    printf("按1 加法");
    printf("按2 减法");
    printf("按3 乘法");
    printf("按4 除法");
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
            double h,i;
            printf("请输入两个整数以相除");
            scanf("%lf %lf",&h,&i);
            //printf("%e",h);
            double divi;
            divi = h / i;
            //float yushu;
            //yushu = h % i;
            //printf("%d除以%d等于%d,余数为%d",h,i,divi,yushu);
            printf("%f除以%f的商是%lf",h,i,divi);
        }
        else{
            return 0;
        }
    return 0;
}

