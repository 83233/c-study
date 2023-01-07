#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
//2022.7.12
//int main()
//{
//	int a, b, c;
//	printf("输入你想比较的三个值：");
//	scanf("%d%d%d", &a, &b, &c);
//	//输入时空格即可（格式必须与字符串内一致）
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;//创建临时变量tmp方便赋值
//		//避免将值赋予a时发生a的原值丢失
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	printf("%d>%d>%d ", a, b, c);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//求出两个数的最大公约数
//辗转相除法
//int main()
//{
//	int m, n;
//	int r = 1;
//	printf("输入你想计算的两个值：");
//	scanf("%d%d", &m, &n);
//	while (r!=0)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("两数的最大公约数为%d", m);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int c = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (((i%4==0&&i%100!=0))||(i%400==0))
//		{
//			printf("%d ", i);
//			c++;
//		}
//		//else if (i % 4 == 0 && i % 100 != 0)
//		//{
//		//	printf("%d ", i);
//		//	c++;
//		//}
//	}
//	printf("共有%d个闰年", c);
//	return 0;
//}
//int main()
//{
//	int x, y;
//	int i = 0;
//	printf("输入你想求素数的范围");
//	scanf("%d%d", &x, &y);
//	for (i = x; i <= y; i++)
//	{
//		//判断i是否为素数
//		//素数判断的规则：试除法
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j>sqrt(i))
//		{
//			printf("%d ", i);
//		}
//	
//	}
//	return 0;
//}
////对称性，只需考虑根号
////进一步优化
////去除所有偶数
//int main()
//{
//	int i = 0;
//	int c = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9 )
//		{
//			printf("%d ", i);
//			c++;
//		}
//		if(i / 10 == 9)
//		{
//			printf("%d ", i);
//			c++;
//		}
//	}
//	printf("共有%d个数字9",c);
//	return 0;
//}
//int Max(int x, int y)
//{
//	int z = 0;
//	if (x >= y)
//	{
//		z = x;
//	}
//	else
//		z = y;
//	return z;
//}
//int main()
//{
//	int i;
//	int arr[] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for ( i = 1; i <= sz; i++)
//	{
//		max=Max(arr[0], arr[i]);
//	}
//	printf("最大值为%d",max);
//	return 0;
//}
// 打印九九乘法表
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			int mul = i * j;
//			printf("%d*%d=%-2d ", i, j, mul);
//			//%2d表示打印两位（不够为空格补齐）
//			//其中%2d为右对齐 -2%d为左对齐（默认打印两位）
//		}
//		printf("\n");
//	}
//	return 0;
//}

//猜数字游戏
//1.电脑会生成一个随机数
//2.猜数字
//void menu()
//{
//	printf("#########################\n");
//	printf("#####1.start 0.exit######\n");
//	printf("#########################\n");
//}
//void game()
//{
//	int range = 0;
//	printf("输入你想猜的数字的范围(0-?)：(只用输入最大值数字)");
//	scanf("%d", &range);
//	int guess = 0;
//	//1.生成随机数（1-100）
//	//使用时间戳来设置随机数的生成起始点
//	int ret=rand()%range+1;
//	//2.猜数字
//	system("cls");
//	while (1)
//	{
//		printf("请猜数字\n");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("%d猜大了\n", guess);
//		}
//		else if (guess < ret)
//		{
//			printf("%d猜小了\n", guess);
//		}
//		else
//		{
//			system("cls");
//			printf("恭喜你猜对了\n");
//			break;
//		}
//
//	}
//
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	//放入主函数可以防止每次重玩游戏时再次设置
//	//从而避免"伪随机"的现象出现
//	int input = '2';
//	do 
//	{
//		menu();
//		printf("请选择(1/0)：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//开始游戏
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误");
//			break;
//		}
//
//
//	} while (input==1);
//	return 0;
//}


//2022.7.13
//int Add(int x,int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	char arr[] = "bit";
//	char arr2[20] = "########";
//	strcpy(arr2, arr);
//	printf("%s\n", arr2);
//	int l = strlen(arr2);
//	printf("%d", l);
//	return 0;
//}
//int main()
//{
//	char arr[] = "Hello world";
//	memset(arr, '*', 5);
//	printf("%s", arr);
//	return 0;
//}
//void Swap2(int x, int y)
//{
//	int tmp = 0;
//	int tmp = x;
//	int x = y;
//	int y = tmp;
//
//}
//void Swap1(int* pa, int* pb)
//{
//	//通过解引用*pa找到a
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb= tmp;
//}
////根本原因是因为Sawp函数并没有返回值
////只是执行了一个功能 而不存在Add函数中输出值的功能
////且改变的是a b 所对应的值
////原Add函数中我们需要的结果只是一个值（也就是两数之和sum）所以可以用x y取代a b后进行计算
////所以要达到改变两值的目的必须使用Swap1
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d %d\n", a, b);
//	Swap1(&a, &b);//为何要使用地址
//	//分别把a的地址和b的地址传过去
//	//防止出现创建的变量x y与a b无关而所有关于x y的改变都无法影响a b
//	printf("%d %d\n", a, b);
//	return 0;
//}
//int is_prime(int x)
//{
//	int y;
//	for (y = 2; y <= sqrt(x); y++)
//	{
//		if (x % y == 0)
//		{
//			return 0;//执行后直接结束函数
//		}
//		
//	}
//	//只要来到这里说明不存在一个整数可以整除x
//		return 1;
//	
//}
//int main()
//{
//	int i = 0;
//	int z = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//			z++;
//		}
//	}
//	printf("\n共有素数%d个", z);
//	return 0;
//}
//int is_leap_year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
////不在该函数里打印，只做判断
//int main()
//{
//	int i = 0;
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d ", year);
//			i++;
//		}
//	}
//	printf("\n总共有闰年%d个", i);
//	return 0;
//}
//二分查找仅使用于有序数组
//int binary_search(int arr[], int n,int sz)
//{
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//数组传参后不能使用该方法求元素个数
//	//传递的是数组首元素的地址
//	//本质上arr是一个指针
//	//无法在函数内部求数组元素个数
//	//建议在主函数内先将个数求好在传入函数内
//	//因为数组占用内存过大，所以默认都是传输数组首元素地址
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)//不能丢掉等于，万一left=right=所求值，循环应该继续
//	{
//		//不能放在循环外面
//		//实际上每次都必须求元素下标
//		int mid = (left + right) / 2;
//		if (arr[mid] < n)
//		{
//			left = mid+1;
//		}
//		else if (arr[mid] > n)
//		{
//			right= mid-1;
//		}
//		else
//			return mid;
//	}
//	return -1;
//
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("输入你想查找的数字：");
//	scanf("%d", &k);
//	int ret = binary_search(arr, k,sz);
//	//先去写函数怎么用，在想函数怎么实现
//	if (ret == -1)
//	{
//		printf("找不到该数字\n");
//	}
//	else
//		printf("该数字下标为%d\n", ret);
//	return 0;
//}
//void Add(int* p)
//{
//	(*p)++;
//	//优先级问题，++优先级较高，先用括号
//	//凡是涉及到函数改变主函数值的情况都需使用指针
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num = %d\n",num);
//	Add(&num);
//	printf("num = %d\n", num);
//	Add(&num);
//	printf("num = %d\n", num);
//	return 0;
//}
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//	//为何结果为4321？
//	//最后面一个打印43
//	//前面两个分别打印的是返回值（返回值为打印的字符个数）
//}
