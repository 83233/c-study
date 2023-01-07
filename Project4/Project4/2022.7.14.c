#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include <math.h>
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);//1234
//	//如何用递归解决？自己调用自己
//	// print(1234)
//	//print(123) 4
//	//print(12) 3 4
//	//print(1) 2 3 4
//	print(num);
//	return 0;
//}
////求字符串长度
//int main()
//{
//	char arr[] = "bit";
//	int len = strlen(arr);
//	printf("%d", len);
//	return 0;
//}
////如果用递归不允许创建临时变量
//int my_strlen(char* str)
//{
//	//每次str调用数组的第一个元素的地址
//	//计算字符串长度
//	//my_strlen("bit")
//	//1+my_strlen("it")
//	//1+1+my_strlen("t")
//	//1+1+1+my_strlen("")
//	//1+1+1+0=3
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(++str);//不是\0就至少包含一个
//		//这里为什么不使用str++呢？
//		//根本原因还是计算顺序；++str是先++在将++后的值赋予str
//		//而str++是先调用str后再++，使用str++会陷入栈溢出（每次调用都是str，并没有实现向结束值接近）
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d", len);
//	return 0;
//}
////用循环求一个数阶乘
//int main()
//{
//	int x = 0;
//	int i = 0;
//	int sum = 1;
//	printf("输入你想求的数的阶乘：\n");
//	scanf("%d", &x);
//	for (i = 1; i <= x; i++)
//	{
//		sum = sum * i;
//	}
//	printf("\n%d", sum);
//	return 0;
////}
////用递归的方式实现
//int Fac2(int n)
//{
//	int ret = 1;
//	if (n > 1)
//	{
//		ret = n * Fac2(n - 1);
//	}
//	else
//	{
//		return ret;
//	}
//}
//int main()
//{
//	int x = 0;
//	printf("输入你想求的数的阶乘：\n");
//	scanf("%d", &x);
//	int mul = Fac2(x);
//	printf("%d", mul);
//	return 0;
//}
//求斐波那契数列(到第n个)
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//		return fib(n - 1) + fib(n - 2);
//	//存在重复计算（需优化提高）
//	// 经过测试到第四十个时第三个斐波那契数列已经求解几千万次
//	//熟悉斐波那契数列的定义
//}
//如果换用循环
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n>2)
//	{
//
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//		return b;
//	
//}
////从原来逆向求解改为正向求解
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	//TDD--测试驱动开发；
//	printf("%d", fib(x));
//	return 0;
//}

//2022.7.16
//int main()
//{
//	char arr2[] = "abcdef";
//	//可行，前两个ab，放入斜杠零，再默认零
//	printf("%d", sizeof(arr2));
//	printf("%d", strlen(arr2));
//	return 0;
//	//strlrn 和 sizeof无关联
//	//strlen只能求字符串长度
//	//而sizeof是计算对象的大小（单位是字节）
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr1));
//	return 0;
//}
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i, j;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("arr[%d][%d]= %p ",i,j, &arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//冒泡排序
//void bubble_sort(int arr[],int n)
//{
//	int i = 0;
//	for (i = 0; i < n-1; i++)
//	{
//		//每一趟冒泡排序
//		//实际上进一步思考可得；
//		//如果有一趟冒泡排序所有比较都没有发生交换
//		//则说明已经有序（可退出程序）
//		int flag = 1;//假设已经有序后再进行测试，比检测再确定循环更简单
//		int j = 0;
//		for (j = 0; j < n-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				//每一对比较
//				flag = 0;//本趟排序的数据其实不完全有序
//				//也就是说这一趟会跑完
//			}
//		}
//		if (flag == 1)//说明已经有序flag是一种状态
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int a = 0;
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//对arr排序 最终成升序
//	bubble_sort(arr, sz);
//	for (a = 0; a < sz; a++)
//	{
//		printf("%d ", arr[a]);
//	}
//
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7 };
//	printf("%p\n",arr);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	//学会区分arr在什么情况下是首元素地址什么时候是整个数组
//	//只有&arr和sizeof（arr）时是整个数组
//	return 0;
//}
//不创建临时变量而实现两个变量的值的交换
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("%d %d\n", a, b);
//	//1.按位异或(1.效率低，2.可读性低)
//	a = a ^ b;
//	b = b ^ a;
//	a = a ^ b;
//	//2.加减法(a和b都是整型，但相加后大于整型最大值，会发生二进制的丢失【溢出】)
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d\n", a, b);
//	return 0;
//}
//1 //无法计算负数
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	while (num != 0)
//	{
//		if (num % 2 == 1)
//		{
//			count++;
//		}
//		num = num / 2;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//2使用移位操作符(缺点：必须循环32次)
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//}
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		count++;
//		num = num & (num - 1);
//	}
//	printf("二进制位中1的个数=%d\n", count);
//	return 0;
//}

////2022.7.23
//int main()
//{
//	int a = 11;//00000000000000000000000000001011
//	int b = 4;// 00000000000000000000000000000100
//	//相当于将1向左移动两位
//	a = a | (1<<2);
//	//那如何让这一位再变成0呢？
//	//00000000000000000000000000001111
//	//按位与上
//	//11111111111111111111111111111011
//	//00000000000000000000000000000100按位取反可得；
//	int A = a & (~(1 << 2));
//	printf("%d\n", a);
//	printf("%d\n", A);
//	return 0;
//}
//三目操作费实现比较大小的函数要简单的多；
//int get_max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max=%d", max);
//	return 0;
//
//}
//int main()
//{
//	char a = 3;
//	//发生截断
//	//00000000000000000000000000000011
//	//00000011-a
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111-b
//	char c = a + b;
//	//如何相加--整型提升（按符号位）
//	//直接相加
//	//00000000000000000000000010000010
//	//再放入c中
//	//10000010-c
//	//因打印类型是整型--整型提升（无符号数直接补零）
//	//11111111111111111111111110000010-补码
//	//11111111111111111111111110000001-反码
//	//10000000000000000000000001111110-原码
//	//故c为-126
//	printf("%d\n", c);
//	return 0;
//}
//整型提升举例1.
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//	{
//		printf("a");
//	}
//	if (b == 0xb600)
//	{
//		printf("b");
//	}
//	if (c == 0xb6000000)
//	{
//		printf("c");
//	}
//	return 0;
//}
//结果：只打印c
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(!c));
//	return 0;
//}
// 结果 1 4 1
//只要计算就会发生整型转换。

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	return 0;
//}
//int main()
//{
//	int arr = { 0 };
//	int* p = arr;
//	//char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;//将每一个元素改成1
//		//而如果改为char*每次只访问一个字节，无法改变每一个值
//	}
//	return 0;
//}
//int main()
//{
//	int* p;//一个局部变量不初始化，默认放随机值。
//  *p=20//非法访问内存。(实际上p的内存发生了变化)
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;	
//}
// 以前用过计数器和递归的原理，
// 用指针求字符串长度(利用指针减去指针是元素个数)
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int * pa = &a;//pa为一级指针
//	int* * ppa = &pa;//此处ppa为二级指针
//	//如何理解？
//	//中间*代表是一个指针类型，int*代表指向的pa类型是int*
//	printf("%d\n",**ppa);
//	return 0;
//}
//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i - 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void Reserve(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	for (left = 0, right = sz - 1; left < right; left++, right--)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr, sz);//对数组进行初始化
//	Print(arr, sz);//逆序前打印
//	Reserve(arr,sz);//对数组进行逆序处理
//	printf("\n");//逆序后打印
//	Print(arr, sz);
//	return 0;
//}
//数组交换
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i - 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//1.(一对一对交换--)
//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	Print(arr1, sz);
//	printf("\n");
//	Print(arr2, sz);
//	printf("\n");
//	int tmp = 0;
//	int i = 0;	
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	Print(arr1, sz);
//	printf("\n");
//	Print(arr2, sz);
//	return 0;
//}
// 用模2除2的方法进行
//int count_bit_one(unsigned int x)//强行将其改为无符号数
//{
//	int count = 0;
//	while (x != 0)
//	{
//		if (x % 2 == 1)
//		{
//			count++;
//		}
//		x = x / 2;
//	}
//	return count;
//}
//int count_bit_one(int x)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((x >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//
//	return count;
//}
//int count_bit_one(int x)
//{
//	int count = 0;
//	while (x)
//	{
//		x = x & (x - 1);//巧妙的利用按位与和二进制的计算
//		//有几个一就循环几次（更高效）
//		count++;
//	}
//	return count;
//}
////n=n&(n-1)
//// n假如为13
//// 1101 n
//// 1100 n-1
//// 1100 n
//// 1011 n-1
//// 1000 n
//// 0111 n-1
//// 0000 n
//int main()
//{
//	int a = 13;//1101
//	//00000000000000000000000000001101
//	//但假如是负数（如-1）
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	// 按位与上
//	//00000000000000000000000000000001
//	//得到1
//	scanf("%d", &a);
//	//写一个函数求a的二进制表示（补码）中有几个1
//	int count=count_bit_one(a);
//	printf("count = %d\n", count);
//	return 0;
//}
//void print(int* p,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf( "%d ", *(p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}

//输入乘法表
//void print_table(int x)
//{
//	int i = 1;
//	int j = 1;
//	for (i = 1; i <= x; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %-3d ", i, j, i * j);
//		}//这里的-3用于对齐
//		printf("\n");
//	}
//   
//}
//int main()
//{
//	int n = 0;
//	printf("输入你想求的乘法表:>");
//	scanf("%d", &n);
//	print_table(n);//设计函数解决问题，一个函数对应一个问题
//	return 0;
//}

//字符串的内容逆序
//int my_strlen(char* arr)
//{
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		i++;
//	}
//	return i;
//}
//1.循环方法实现
//void reverse_string(char* arr)
//{
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//2.用递归的方法
//1).a和f的交换
//2).逆序（“bcde”）
//a b c d e f \0
//需要找到“\0”,以方便逆序确定最右边的字母
//void reverse_string(char* arr)
//{
//	char tmp = arr[0];//1.
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];//2.
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//	{
//		reverse_string(arr + 1);//arr+1是下一个指针的地址
//	}//3.实现递归的条件，且慢慢逼近这个条件
//	arr[len - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";//逆序为fedcba
//	int i = 0;
//	int j = my_strlen(arr);
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//输入 : 1729，输出 : 19
//int DigitSum(int x)
//{
//	if (x / 10 >= 1)
//	{
//		int j = x % 10;
//		x = x / 10;
//		return j + DigitSum(x);
//	}
//	else
//	{
//		return x;
//	}
//}
//int main()
//{
//      int num = 0;
//	printf("输入你想计算的数字:>");
//	scanf("%d", &num);
//	int a = DigitSum(num);
//	printf("\0");
//	printf("该数字每位和为:%d", a);
//	return 0;
//}

//编写一个函数实现n的k次方
//大体思路就是n^k=n*n^k-1
//double Pow(int n, int k)
//{
//	if (k >= 1)
//	{
//		return n * Pow(n,k - 1);
//	}
//	if(k == 0)
//	{
//		return 1;
//	}
//	else//解决负数问题
//	{
//		return (1 / Pow(n, -k));
//	}
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	double ret=Pow(n,k);
//	printf("%lf\n", ret);
//	return 0;
//}

//初识结构体
//描述一个学生(姓名，年龄，性别，电话)
//定义一个结构体类型--等价于int
//struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];//十一位电话号码加上一个\0
//	char sex[5];
//}s1,s2,s3;//s1,s2,s3是三个全局的结构体变量（尽量少用）
//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;//此处相当于将struct Stu改名为Stu 此处Stu是类型
//int main()
//{
//	//此处s是局部变量
//	struct Stu s1 = { "张三",20,"15256788908","男" };//创建结构体变量--等价于int a=10；
//	Stu s2={"旺财",30,"14456797754","保密"};//此时Stu可单独作为类型处理；
//	return 0;//初始化即在结构体创建时对其进行赋值
//}
//struct s
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct s s;
//	char* pc;
//};
//int main()
//{
//	char arr[] = "hello bit\n";
//	//嵌套结构体的初始化
//	struct T t = { "hehe",{100,'w',"hello world",3.14},arr};
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr );//用点来分级访问
//	printf("%lf\n", t.s.d);
//	return 0;
//}
//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//void Print1(Stu tmp)
//{
//	printf("name:%s\n", tmp.name);
//	printf("age:%d\n", tmp.age);
//	printf("telephone:%s\n", tmp.tele);
//	printf("sex:%s\n", tmp.sex);
//}
//void Print2(Stu* ps)
//{
//	printf("name:%s\n",ps->name);
//	printf("age:%s\n", ps->age);
//}
//int main()
//{
//	Stu s = { "里斯",40,"14478906789","男" };
//	//打印结构体数据
//	Print1(s);//结构体传参
//	Print2(&s);//假如使用地址--更优
//	//为什么？
//	//Print1需要重新创建一个临时拷贝--时间和空间上都不占优--需要用到压栈
//	return 0;
//}
