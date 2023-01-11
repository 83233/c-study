#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<assert.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = i + 1;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

// // 求一一直加到n的阶乘？
//int test(int i)//此处的test函数用于求出一个数的阶乘
//{
//	int ret = 1;
//	int a = 0;
//	for (a = 1; a <= i; a++)//产生从一到n的数字
//	{
//		ret *= a;//每产生一个数字就乘到ret上去
//	}
//	return ret;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	scanf_s("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int b = 0;
//		b = test(i);
//		sum += b;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//下面是给出的例子
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	int j = 0;
//	for (j = 1; j <= n; j++)
//	{
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//此代码问题分析：ret要求是每次进入j循环时初始值都应该是1，但i=2输入后ret值变成2，
//并没有再次进行初始化，导致后面在6的基础上多乘了一个2，
//输入3，输出15=1+2+2*6.
//解决方案，在第一个循环中初始化ret = 1;

//模拟实现字符串复制函数strcpy(目标空间地址和源空间地址k)
//void my_strcpy(char* dest, char* src)//arr1是目的地destination，arr2是源头
//{
//	while (*src != '\0')//src是一个指针，找到其对应的空间需要进行解引用。
//	{
//		*dest = *src;
//		dest++;//地址++是在相对应的储存单元中转换到下一个贮存单元
//		src++;
//	}
//	*dest = *src;
//}
//这个代码写的不好——可以继续简化
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;//hello的拷贝
//	}
//  *dest = *src;//‘\0的拷贝’
//}
//或者进一步的简化
//void my_strcpy(char* dest, char* src)
//{
//	while ( *dest++ = *src++ )
//	{
//		;
//	}
//}
//此时仍需优化
//1.dest, src 是NUll空指针怎么办
//2.顺序出现问题怎么办。
//将src指向的内容放到dest指向的空间中
//从本质上讲--希望dest指向的内容被修改，src指向的内容不被修改
//故在src左边加上const保证不会出现src会改变的现象
//void my_strcpy(char* dest, const char* src)
//{
//	assert(src != NULL);//断言，里面判别式为假时会报错。
//	//此时引用头文件<assert.h>
//	assert(dest != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxx";
//	char arr2[20] = "hello";
//	my_strcpy(arr1, arr2);
//	//strcpy(arr1, arr2);
//	////将arr2中的hello拷贝到arr1中去
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	//int num = 10;
//	//int* p = &num;
//	//*p = 20;//此时可以将num改为20
//	const int num = 10;
//	int* p = &num;
//	*p = 20;
//	printf("%d\n", num);
//	return 0;
//}

//进一步的，为什么会出现char*的返回类型？
//应该返回目标空间的起始地址：
//直接return dest？？？—— dest发生了改变
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(src != NULL);//断言，里面判别式为假时会报错。
//	//此时引用头文件<assert.h>
//	assert(dest != NULL);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;//返回目标空间的起始地址
//}
////这样改变后可以进一步简化main函数的代码
//int main()
//{
//	char arr1[20] = "xxxxxxxxx";
//	char arr2[20] = "hello";
//	//strcpy(arr1, arr2);
//	////将arr2中的hello拷贝到arr1中去
//	printf("%s\n", my_strcpy(arr1, arr2));
//	//直接以返回地址打印
//	return 0;
//}

//int 为有符号整形，但是长度不可能为负数
//size_t -- unsigned int
size_t my_strlen(const char* arr)//不希望arr的内容被改变
{
	//assert(arr != NULL);
	assert(arr);//也可以简写为这样
	int ret = 0;
	while (*arr++ != '\0')
	{
		ret++;
	}
	return ret;
}
int main()
{
	char arr1[20] = "xxxx";
	printf("%d\n", my_strlen(arr1));
	return 0;
}