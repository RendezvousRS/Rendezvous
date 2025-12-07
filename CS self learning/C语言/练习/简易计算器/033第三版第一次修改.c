//
//  main.c
//  calc0333
//
//  Created by Rendezvous on 7/12/2025.
//

#include<stdio.h>
double sum(void);
double subs(void);
double multi(void);
double divi(void);

int main(void)
{
    int a;
    printf("===================\n");
    printf("=====简易计算器=====\n");
    printf("====按1进入加法=====\n");
    printf("====按2进入减法=====\n");
    printf("====按3进入乘法=====\n");
    printf("====按4进入除法=====\n");
    scanf("%d",&a);
    if(a == 1)
    {
        double bb = sum();
        printf("这些数的和是%lf\n",bb);
    }
    else if(a == 2){
        double cc = subs();
        printf("这些数的差是%lf\n",cc);

    }
    else if(a == 3)
    {
        double dd = multi();
        printf("这些数的积是%lf\n",dd);
    }
    else if(a == 4)
    {
        double ee = divi();
        printf("这些数的商是%lf\n",ee);
    }
	else if(a != 1)
	{
		printf("输入错误，即将退出程序");
		return 0；
	}
    return 0;
}
double sum()
{
    double i;
    double summ = 0.0;
    printf("请输入一些数以相加\n");
    //第二版的，先只加10个数的数组测试
    //第三版不限个数
    //scanf("%d",&i);
    while(scanf("%lf",&i) == 1)
    {
        summ += i;
    }
    return summ;
    /* for(i=0;i<=9;i++)
    {
        scanf("%lf",&b[i]);
        summ = summ + b[i];
    }
    return summ; */
}

	double subs()
{
	int m = 0,n;
	double h,j;
	doubel *k[];
	printf
	while(scanf("%ld",&h == 1)
	{
		m++;
		k[m] = h;
		if(m=1)
		{
			j = h;
		}
		else 
		{
			j -= h;
		}
		
	}
}

	double divi()
	{
		int m=0;
		double h,j;
		double *k[];
		printf;
		whlie(scanf("%lf",&h) == 1)
		{
			m++;
			k[m] = h;
			if(m = 1)
			{
				j = h;	
			}
			else
			{
				j /= h;
			}
		}
	}

/* double subs()
{
    double j;
    double subss =0.0;
    printf("请输入一些数以相减");
    while(scanf("%lf",&j) == 1)
    {
        subss -= j;
    }
    return subss;
}*/

double multi()
{
    double k;
    double multii = 1.0;
    printf("请输入一些数字以相乘");
    while(scanf("%lf",&k) == 1)
    {
        multii *= k;
    }
    return multii;
}

/* double divi()
{
    double l;
    double divii = 1.0;
    printf("请输入一些数以相乘");
    while(scanf("%lf",&l) == 1)
    {
        divii /= l;
    }
    return divii;
} */

