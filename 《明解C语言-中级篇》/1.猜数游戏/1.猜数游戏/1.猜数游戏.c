#define _CRT_SECURE_NO_WARNINGS
//1-1猜数判定
//#include<stdio.h>
//int main(void)
//{
//	int no;
//	int ans = 7;
//
//	printf("请猜一个0-9的整数。\n\n");
//
//	printf("是多少呢：");
//	scanf("%d", &no);
//
//	if (no > ans)
//		printf("\a再小一点。\n");
//	else if (no < ans)
//		printf("\a再大一点。\n");
//	else
//		printf("回答正确。\n");
//	return 0;
//}

//表达式求值中，如果有一方操作数的类型是double型，那么结果就是double型。


//1-2重复到猜对为止
#include<stdio.h>

int main(void)
{
	int no;
	int ans = 7;

	printf("请猜一个0-9的整数。\n\n");

	do {
		printf("是多少呢：");
		scanf("%d", &no);

		if (no > ans)
			printf("\a再小一点。\n");
		else if (no < ans)
			printf("\a再大一点。\n");
	
	} while (no != ans);

	printf("回答正确。\n");
	return 0;
}
//先判断后循环：while语句和for语句，会出现一次也没有运行的情况；
//先循环后判断：do语句，程序至少运行一次；

//1-3随机设定目标数字
//用于生成随机数的函数rand函数
//rand
//头文件  #include<stdlib.h>
//格式    int rand(void)
//功能    计算0-RAND_MAX的伪随机整数序列。此外，其他库函数在运行时会无视本函数的调用
//返回值  返回生成的伪随机数整数

//#define RAND_MAX   RAND_MAX的值规定不超过32767
#include<stdio.h>