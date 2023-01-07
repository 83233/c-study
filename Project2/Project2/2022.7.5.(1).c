#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
//2022.7.5
//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你会好好学习吗？(1/0)>：");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好offer.");
//	else 
//		printf("回去烤红薯。");
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//	while (line < 100)
//	{
//		printf("敲一行代码:%d\n",line);
//		line++;
//	};
//	if (line>50)
//	    printf("好offer");
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("输入你想计算的值\n");
//	scanf("%d%d", & num1,&num2);
//	sum = Add(num1, num2);
//	printf("%d+%d=%d\n",num1,num2, sum);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//		
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	while (a < 100)
//	{
//		a=a<<1;
//	}
//	printf("%d\n", a);
//	return 0;
//}

//2022.7.6
 //第一种MAX写法
//int MAX(int x, int y)
//{
//	int z = x - y;
//	return z;
//}
// 第二种MAX函数写法(只不过后续函数仍需修改，不再赘述）
//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int del = 0;
//	int num1 = 0;
//	int num2 = 0;
//	printf("输入你想比较的两个值\n");
//	scanf("%d%d", &num1, &num2);
//	del = MAX(num1, num2);
//	if (del > 0)
//		printf("其中较大的值为%d", num1);
//	else
//		printf("其中较大的值为%d", num2);
//	return 0;
//}

//2022.7.7
//对两式求较大值的进一步简化（三目操作符）
//用宏的方式解决（同上三目操作符，但是用#define给其下了定义）
//相当于简化
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	printf("输入你想比较的两个值;\n");
//	scanf_s("%d%d" ,& a, &b);
//	max = MAX(a, b);
//	printf("其中较大值为%d", max);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	printf("输入你想比较的两个值;\n");
//	scanf_s("%d%d" ,& a, &b);
//	max = (a > b ? a : b);
//	printf("其中较大值为;%d", max);
//	return 0;
//}
//void test() 
//{
//	static int a = 1;
//	//a在每次都会重置（进去时创建，出去时销毁[局部变量只存在于范围内]）
//	//解决方案:加上static，a成为静态局部变量（不再销毁）
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5) {
//		test();
//		i++;
//	};
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 10;
//	int z = Add(0, 10);
//	//若在另一个源文件中添加Add函数
//	//不用extern声明也能使用（2022款）
//	//使用static后便失效，使用static的函数只能在同一源文件内部使用
//	printf("a+b=%d\n", z);
//	return 0;
//}

//2022.7.8
//结构体（相当于给元素给一个集合）加指针运用
//struct Book
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	struct Book b1 = { "c语言设计",55 };
//	struct Book* pb = &b1;
//	//创建一个指针变量pb指向b1
//	printf("书名：%s\n价格：%d\n", (*pb).name, (*pb).price);
//	//相当于利用指针先进行解引用找到b1后再进行打印
//	//另外一种写法：(更简便）用箭头简化
//	printf("书名：%s\n价格：%d\n", pb->name, pb->price);
//	return 0;
//}

//分支与循环(2022.7.8)
// 多重选择
//int main()
//{
//	int a = 0;
//	printf("输入你的年龄：\n");
//	scanf_s("%d", &a);
//	if (a < 18)
//	{
//		printf("未成年。");
//		printf("不能谈恋爱");
//	}
//	else if (a>=18&&a<28)
//		printf("青年");
//	else if(a>=28&&a<50)
//		printf("壮年");
//	else if(a>=50&&a<90)
//		printf("老年");
//	else
//		printf("老不死");
//	return 0;
//}
//判断一个数的奇偶
//int main()
//{
//	int a = 0;
//	printf("输入一个数：\n");
//	scanf_s("%d", &a);
//	if (a % 2 == 0)
//		printf("该数为偶数");
//	else
//		printf("该数为奇数");
//
//}
//输出1-100的奇数
//int main()
//{
//	int i = 1;
//	while(100>=i)
//	{
//		if (i % 2 == 1)
//			printf("%d", i);
//			i++;
//	}
//	return 0;
//}

//2022.7.9
//int main()
//{
//	int day = 0;
//	scanf_s("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一");
//		break;
//	case 2:
//		printf("星期二");
//		break;
//	case 3:
//		printf("星期三");
//		break;
//	case 4:
//		printf("星期四");
//		break;
//	case 5:
//		printf("星期五");
//		break;
//	case 6:
//		printf("星期六");
//		break;
//	case 7:
//		printf("星期天");
//		break;
//	}
//	return 0;
//}
// 2022.7.9
//int main()
//{
//	int day = 0;
//	scanf_s("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日");
//		break;//break使其跳出循环
//	//不一定case后面必须加break
//	//不同情况相同的结果可以结合到一起
//	case 6:
//	case 7:
//		printf("休息日");
//		break;
//		//加上break是一个好习惯(方便后人)
//	default://其他情况
//		printf("输入错误");
//		break;
//	//顺序不做要求
//	}
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	//EOF--end of file文件结束标志 ctrl+z
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
// 留存疑惑此处scanf可以正常运行但scanf_s不可
//解决：scanf_s函数需预设读取长度，前面所写代码中不涉及相关问题
//此处需预设读取长度为一，否则输入缓冲区仍然会残留\n
//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码：");
//	scanf_s("%s", password,1);
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认(Y/N):");
//	ret = getchar();
//	if (ret == 'Y')
//		printf("确认成功\n");
//	else
//		printf("放弃确认\n");
//	return 0;
//}
//建议以后都使用scanf函数
//int main()
//{
//	int i = 0;
//	for (i = 1;i <= 10; i++) 
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//
//	}
//	return 0;
//}

//2022.7.11
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; x++, y++)//可以用两个循环变量来控制循环
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	do {
//		printf("%d ", i);
//		i++;
//	} while (10 >= i);
//	return 0;
//}
//int Add(int x)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= x; i++)
//		ret = ret * i;
//	return ret;
//}
// 1.用函数方法解决计算n的阶乘和
//int main()
//{
//	int n = 0;
//	int s = 0;
//	int mul = 0;
//	printf("输入你想计算的阶乘和\n");
//	scanf("%d", &n);
//	for (s = 1; s <= n; s++)
//		mul = Add(s) + mul;
//	printf("从一到%d的阶乘和为%d", n, mul);
//	return 0;
//}
//2.用循环的方法解决(进一步优化：去除嵌套循环)
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	int ret = 1;
//	int a = 0;
//	printf("输入你想计算的阶乘和\n");
//	scanf("%d", &n);
//	for (a = 1; a<= n; a++)
//	{
//		ret = ret * a;
//		//原理：2！实际上就是1！*2，其他同理
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}
//编写在有序数组里寻找特定元素
//1.从第一个开始检查(效率低)
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	int i = 0;
//	//用于计算一个数组中元素个数（总长度初一每个元素长度）
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("输入你想查找的数字：");
//	scanf("%d", &k);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，且下标为%d\n", i);
//			break;
//		}
//	}
//	if (sz == i)
//		printf("该数组中不存在该元素");
//	return 0;
//}
//2.二分（折半）查找算法
//找到下标的平均值，二分计算（取整）
//适合与有序数组
//int main()
//{
//	int k = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;//左下标
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;//右下标
//	printf("输入你想寻找的元素：");
//	scanf("%d", &k);
//	while (left<=right)//此时才说明其之前还有元素
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到");
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!";
//	char arr2[] = "###################";
//	//字符串不同于数组，最后还有一个\n
//	//int right = sizeof(arr1)/sizeof(arr1[0]) - 2;
//	//换用更简单的求法
//	int right = strlen(arr1) - 1;
//	int left = 0;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//休息一秒(此处单位为毫秒)
//		Sleep(500);
//		//把屏幕清空
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}