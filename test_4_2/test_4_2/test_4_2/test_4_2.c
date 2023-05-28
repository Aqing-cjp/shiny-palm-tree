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
int main()
{
	//char arr[] = "hello";
	char arr1[] = "abc";
	char arr2[] = {'a','b','c','\0'};

	//求一下字符串的长度
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	//int len = strlen("abc");//string length
	//printf("%d\n", len);
	//打印字符串
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	return 0;
}