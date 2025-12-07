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
		
}
int cmodol(int a){
	if(a==1){
		double b[10];
		printf("请输入几个数以让它们相加\n");
		printf("输入：");
		int i;
		for(i=1;i<=10;i++)
		{
			scanf("%lf",&b[i]);
			double sum;
			double add;
			printf("这些数的和是：%lf",sum);
		}
		
	}
}
double sum(b[])
{
	int j;
	double summ = 0;
	for(j=1;j<=10;j++)
	{
		summ = summ + b[j];
	}
	return summ;
}
