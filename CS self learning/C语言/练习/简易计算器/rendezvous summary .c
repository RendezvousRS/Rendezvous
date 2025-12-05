#include<stdio.h>
int addition(int a,int b){
    int sum = a + b;
    return sum;
}
int main(){
    int a,b;
    printf("==============================\n");
    printf("===========加法运算===========\n");
    printf("=====输入两个整数，查看结果=====\n");
    printf("==============================\n");
    printf("输入：");

    scanf("%d %d",&a,&b);
    int add = addition(a,b);
    printf("%d和%d的和是%d。\n",a,b,add);
    return 0;
}