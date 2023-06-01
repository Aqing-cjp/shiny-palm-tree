#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//extern int g_val;//声明变量
//int main()
//{
//	printf("%d\n",g_val);
//	return 0;
//}

//生命周期
//变量的生命周期：变量的创建和销毁之间的时间段

//局部变量的生命周期：进入局部范围生命开始，出局部范围生命结束
//全局变量的生命周期：程序的生命周期
//int main()
//{
//	{
//		int a = 10;
//		printf("%d\n", a);
//	}
//	return 0;
//}

//#define MAX 10000

//int main()
//{
	//1.字面常量
	//44;
	//3.14;
	//'a';
	//"abcdef";

	//const修饰的常变量
	//const int num = 10;//num就是常变量 - 具有常属性（不能被改变的属性）
	//num = 20;
	//printf("num = %d\n", num);
	

	//3.#define定义的标识符常量
	//int n = MAX;
	//printf("n = %d\n", n);
	//return 0;
//}

	////4.枚举常量
	//enum Sex
	//{
	//	//这种枚举类型的变量的未来可能取值
	//	//枚举常量
	//	MALE,
	//	FEMALE,
	//	SECRET
	//};

	//int main()
	//{
	//	//可以一一列举的常量
	//	enum Sex s = MALE;
	//	printf("%d\n", MALE);
	//	printf("%d\n", FEMALE);
	//	printf("%d\n", SECRET);
	//	return 0;
	//}

//字符数组 - 数组是一组同类型的元素
//字符串在结尾的位置隐藏了一个\0的字符
//\0是字符串的结束标志
//int main()
//{
//	//char arr[] = "hello";
//	char arr1[] = "abc";
//	char arr2[] = {'a','b','c','\0'};
//
//	//求一下字符串的长度
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	//int len = strlen("abc");//string length
//	//printf("%d\n", len);
//	//打印字符串
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	printf("abc\test\t");
//	printf("%s\n", "\''");
//	printf("%c\n", 'a');//%c输出单个字符
//	printf("%s\n", "a");
//	printf("%s\n", "\"");
//	printf("c:\\test\\test.c");
//	printf("\a");//产生蜂鸣
//	return 0;
//}

//int main()
//{
//	//printf("%c\n", '\130');//8进制的130是十进制的多少呢？
//	////x -- ASCII码值是88
//	//printf("%c\n", '\101');//A - 65 -8进制是：101
//	//printf("%c\n", '\x30');//0 - 48 -16进制是：30
//
//	return 0;
//}

//int main()
//{
//	int input = 0;//输入的值
//	printf("加入比特：>\n");
//	printf("那要好好学习吗(1/0)？>:");
//	scanf("%d", &input);//&取地址，将输入的内容存到这个地址的内存中
//	if (input == 1)
//		printf("好工作\n");
//	else
//		printf("回家\n");
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	while (line<30000)
//	{
//		printf("写代码:%d\n",line);
//		line++;
//	}
//	if (line == 30000) 
//	{
//		printf("好工作\n");
//	}
//	return 0;
//}

//int main()
//{
//	int line = 0;
//	while (line < 30000)
//	{
//		printf("写代码:%d\n", line);
//		line++;
//	}
//		printf("好工作\n");
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	//int sum = num1 + num2;
//	//函数的方式解决
//	int sum = Add(num1, num2);
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	//数组 -- 一组相同类型的元素的集合
//	//10个整型1-10存起来
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);//数组和括号一起用，相当于定义
//		i++;
//	}
//	char ch[5] = { 'a','b','c' };//不完全初始化，剩余的默认为0
//	return 0;
//}

//int main()
//{
//	int a = 9 / 2;
//	float a = 9 / 2.0;
//	int a = 9 % 2;//取模（余）
//	printf("%f\n", a);
//	return 0;
//}
//
//int main()
//{
//	int a = 2;
//	int b=a << 1;
//	printf("%d\n", b);
//	return 0;
//}
//
//int main()
//{
//	int a = 2;
//	a = a + 5;
//	a = 6;
//	a += 5;
//	 
//	a = a - 3;
//	a %= 3;
//	printf("%d\n", a);
//}
//
//int main()
//{
//	0表示假，非0表示真
//	int a = 0;
//	printf("%d\n", !a);//1
//	return 0;
//}
//
//int main()
//{
//	sizeof是一个操作符
//	 不是函数
//	计算类型或者变量大小
//	int a = 10;
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//计算的是数组的总大小，单位是字节
//	printf("%d\n", sizeof(arr[0]));
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);
//	//~按位取反,把所有二进制中位数，1变成0，0变成1
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = ++a;//前置++ ===>先++，后使用
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++;//后置++ ===>先使用，后++
//	printf("%d\n", b);
//	printf("%d\n", a);
//
//	int a = 10;
//	int b = ++a;//前置++ ===>先++，后使用
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	//强制类型转换
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 4;
//	int c = a || b;
//	int a = 3;
//	int b = 5;
//	int c=a && b;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 3;
//	int max = 0;
//	/*if (a > b)
//		max = a;
//	else
//		max = b;*/
//	max = a > b ? a : b;
//	printf("%d\n", max);
//	return 0;
//}

//int main()
//{
//	//(2, 4 + 5, 6);
//	int a = 0;
//	int b = 3;
//	int c = 5;
//	//5 1 3
//	int d = (a = b + 2, c = a - 4, b = c + 2);
//	//逗号表达式，是从左向右依次计算
//	//整个表达式的结果是最后一个表达式的结果
//	printf("%d\n", d);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n",arr[5]);//[]下标引用操作符
//	return 0;
//}

//int main()
//{
//	//调用函数的时候，函数名后边的()就是函数调用操作符
//	printf("hehe\n");
//	printf("%d",100);
//	return 0;
//}

//int main()
//{
//	//int char
//	{
//		auto int a = 10;//自动创建，自动销毁的 --自动变量
//	}
//	return 0;
//}

//int main()
//{
//	//大量频繁被使用的数据，想放在寄存器中，提升效率
//	register int num = 100;//建议将num存入寄存器；
//	return 0;
//}

//int main()
//
//{
//
//	int a = 30;
//
//	int b = 15;
//
//	int max = a > b ? a : b;
//
//	printf("%d\n", max);
//
//}

////类型重定义
//typedef unsigned int u_int;
//int main()
//{
//	unsigned int num = 100;
//	u_int num2 = 100;
//	return 0;
//}

//static  - 静态的
//1.static 修饰局部变量
//2.static 修饰全局变量
//3.static 修饰函数

void test()
{
	int a = 1;
	a++;
	printf("%d", a);
}
int main()
{
	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}
	return 0;
}

//int add_max(int x, int y)
//{
//	if (x > y)
//		return x;
//
//	else
//		return y;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	int compare = add_max(num1, num2);
//	printf("%d\n", compare);
//	return 0;
//}

//int main()
//{
//	int i;
//	for (i = 1; i < 40; i++)
//	{
//		if (i++ % 5 == 0)
//			if (++i % 8 == 0)
//				printf("%d", i);
//	}
//	printf("\n");
//	return 0;
//}
