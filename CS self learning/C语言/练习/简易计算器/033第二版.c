#include<stdio.h>
main(){
	int a;
	printf("====================");
	printf("=====简易计算器=====");
	printf("====按1进入加法=====");
	printf("====按2进入减法=====");
	printf("====按3进入乘法=====");
	printf("====按4进入除法=====");
	sanf("%d",&a);
	if(a == 1)
	{
		goto summ;
		double bb;
		bb = summ;
		printf("这些数的和是%lf",bb);
	}		
	else if(a == 2){
		goto subs;
		double cc;
		cc = subs;
		printf("这些数的差是%lf",cc);

	}
	else if(a == 3)
	{
		goto multi;
		double dd;
		dd = multi;
		printf("这些数的积是%lf",dd);
	}
	else if(a == 4)
	{
		goto divi;
		double ee;
		ee = divi;
		printf("这些数的商是%lf",ee);
	}
}	
double sum(b[])
{
	int i;
	double summ = 0;
	printf("请输入一些数以相加");
	//第二版的，先只加10个数的数组测试
	for(i=0;i<=9;i++)
	{
		scanf("%lf",&b[i]);
		summ = summ + b[i];
	}
	return summ;
}
double subs()
{}
double multi()
{}
double divi()
{}
