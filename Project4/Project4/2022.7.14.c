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
//	//����õݹ������Լ������Լ�
//	// print(1234)
//	//print(123) 4
//	//print(12) 3 4
//	//print(1) 2 3 4
//	print(num);
//	return 0;
//}
////���ַ�������
//int main()
//{
//	char arr[] = "bit";
//	int len = strlen(arr);
//	printf("%d", len);
//	return 0;
//}
////����õݹ鲻��������ʱ����
//int my_strlen(char* str)
//{
//	//ÿ��str��������ĵ�һ��Ԫ�صĵ�ַ
//	//�����ַ�������
//	//my_strlen("bit")
//	//1+my_strlen("it")
//	//1+1+my_strlen("t")
//	//1+1+1+my_strlen("")
//	//1+1+1+0=3
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(++str);//����\0�����ٰ���һ��
//		//����Ϊʲô��ʹ��str++�أ�
//		//����ԭ���Ǽ���˳��++str����++�ڽ�++���ֵ����str
//		//��str++���ȵ���str����++��ʹ��str++������ջ�����ÿ�ε��ö���str����û��ʵ�������ֵ�ӽ���
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
////��ѭ����һ�����׳�
//int main()
//{
//	int x = 0;
//	int i = 0;
//	int sum = 1;
//	printf("��������������Ľ׳ˣ�\n");
//	scanf("%d", &x);
//	for (i = 1; i <= x; i++)
//	{
//		sum = sum * i;
//	}
//	printf("\n%d", sum);
//	return 0;
////}
////�õݹ�ķ�ʽʵ��
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
//	printf("��������������Ľ׳ˣ�\n");
//	scanf("%d", &x);
//	int mul = Fac2(x);
//	printf("%d", mul);
//	return 0;
//}
//��쳲���������(����n��)
//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//		return fib(n - 1) + fib(n - 2);
//	//�����ظ����㣨���Ż���ߣ�
//	// �������Ե�����ʮ��ʱ������쳲����������Ѿ���⼸ǧ���
//	//��Ϥ쳲��������еĶ���
//}
//�������ѭ��
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
////��ԭ����������Ϊ�������
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);
//	//TDD--��������������
//	printf("%d", fib(x));
//	return 0;
//}

//2022.7.16
//int main()
//{
//	char arr2[] = "abcdef";
//	//���У�ǰ����ab������б���㣬��Ĭ����
//	printf("%d", sizeof(arr2));
//	printf("%d", strlen(arr2));
//	return 0;
//	//strlrn �� sizeof�޹���
//	//strlenֻ�����ַ�������
//	//��sizeof�Ǽ������Ĵ�С����λ���ֽڣ�
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
//ð������
//void bubble_sort(int arr[],int n)
//{
//	int i = 0;
//	for (i = 0; i < n-1; i++)
//	{
//		//ÿһ��ð������
//		//ʵ���Ͻ�һ��˼���ɵã�
//		//�����һ��ð���������бȽ϶�û�з�������
//		//��˵���Ѿ����򣨿��˳�����
//		int flag = 1;//�����Ѿ�������ٽ��в��ԣ��ȼ����ȷ��ѭ������
//		int j = 0;
//		for (j = 0; j < n-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				//ÿһ�ԱȽ�
//				flag = 0;//���������������ʵ����ȫ����
//				//Ҳ����˵��һ�˻�����
//			}
//		}
//		if (flag == 1)//˵���Ѿ�����flag��һ��״̬
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
//	//��arr���� ���ճ�����
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
//	//ѧ������arr��ʲô���������Ԫ�ص�ַʲôʱ������������
//	//ֻ��&arr��sizeof��arr��ʱ����������
//	return 0;
//}
//��������ʱ������ʵ������������ֵ�Ľ���
//int main()
//{
//	int a = 3;
//	int b = 5;
//	printf("%d %d\n", a, b);
//	//1.��λ���(1.Ч�ʵͣ�2.�ɶ��Ե�)
//	a = a ^ b;
//	b = b ^ a;
//	a = a ^ b;
//	//2.�Ӽ���(a��b�������ͣ�����Ӻ�����������ֵ���ᷢ�������ƵĶ�ʧ�������)
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d\n", a, b);
//	return 0;
//}
//1 //�޷����㸺��
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
//2ʹ����λ������(ȱ�㣺����ѭ��32��)
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
//	printf("������λ��1�ĸ���=%d\n", count);
//	return 0;
//}

////2022.7.23
//int main()
//{
//	int a = 11;//00000000000000000000000000001011
//	int b = 4;// 00000000000000000000000000000100
//	//�൱�ڽ�1�����ƶ���λ
//	a = a | (1<<2);
//	//���������һλ�ٱ��0�أ�
//	//00000000000000000000000000001111
//	//��λ����
//	//11111111111111111111111111111011
//	//00000000000000000000000000000100��λȡ���ɵã�
//	int A = a & (~(1 << 2));
//	printf("%d\n", a);
//	printf("%d\n", A);
//	return 0;
//}
//��Ŀ������ʵ�ֱȽϴ�С�ĺ���Ҫ�򵥵Ķࣻ
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
//	//�����ض�
//	//00000000000000000000000000000011
//	//00000011-a
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111-b
//	char c = a + b;
//	//������--����������������λ��
//	//ֱ�����
//	//00000000000000000000000010000010
//	//�ٷ���c��
//	//10000010-c
//	//���ӡ����������--�����������޷�����ֱ�Ӳ��㣩
//	//11111111111111111111111110000010-����
//	//11111111111111111111111110000001-����
//	//10000000000000000000000001111110-ԭ��
//	//��cΪ-126
//	printf("%d\n", c);
//	return 0;
//}
//������������1.
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
//�����ֻ��ӡc
//int main()
//{
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(!c));
//	return 0;
//}
// ��� 1 4 1
//ֻҪ����ͻᷢ������ת����

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
//		*(p + i) = 1;//��ÿһ��Ԫ�ظĳ�1
//		//�������Ϊchar*ÿ��ֻ����һ���ֽڣ��޷��ı�ÿһ��ֵ
//	}
//	return 0;
//}
//int main()
//{
//	int* p;//һ���ֲ���������ʼ����Ĭ�Ϸ����ֵ��
//  *p=20//�Ƿ������ڴ档(ʵ����p���ڴ淢���˱仯)
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
// ��ǰ�ù��������͵ݹ��ԭ��
// ��ָ�����ַ�������(����ָ���ȥָ����Ԫ�ظ���)
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
//	int * pa = &a;//paΪһ��ָ��
//	int* * ppa = &pa;//�˴�ppaΪ����ָ��
//	//�����⣿
//	//�м�*������һ��ָ�����ͣ�int*����ָ���pa������int*
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
//	//Init(arr, sz);//��������г�ʼ��
//	Print(arr, sz);//����ǰ��ӡ
//	Reserve(arr,sz);//���������������
//	printf("\n");//������ӡ
//	Print(arr, sz);
//	return 0;
//}
//���齻��
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i - 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//1.(һ��һ�Խ���--)
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
// ��ģ2��2�ķ�������
//int count_bit_one(unsigned int x)//ǿ�н����Ϊ�޷�����
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
//		x = x & (x - 1);//��������ð�λ��Ͷ����Ƶļ���
//		//�м���һ��ѭ�����Σ�����Ч��
//		count++;
//	}
//	return count;
//}
////n=n&(n-1)
//// n����Ϊ13
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
//	//�������Ǹ�������-1��
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111
//	// ��λ����
//	//00000000000000000000000000000001
//	//�õ�1
//	scanf("%d", &a);
//	//дһ��������a�Ķ����Ʊ�ʾ�����룩���м���1
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

//����˷���
//void print_table(int x)
//{
//	int i = 1;
//	int j = 1;
//	for (i = 1; i <= x; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %-3d ", i, j, i * j);
//		}//�����-3���ڶ���
//		printf("\n");
//	}
//   
//}
//int main()
//{
//	int n = 0;
//	printf("����������ĳ˷���:>");
//	scanf("%d", &n);
//	print_table(n);//��ƺ���������⣬һ��������Ӧһ������
//	return 0;
//}

//�ַ�������������
//int my_strlen(char* arr)
//{
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		i++;
//	}
//	return i;
//}
//1.ѭ������ʵ��
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
//2.�õݹ�ķ���
//1).a��f�Ľ���
//2).���򣨡�bcde����
//a b c d e f \0
//��Ҫ�ҵ���\0��,�Է�������ȷ�����ұߵ���ĸ
//void reverse_string(char* arr)
//{
//	char tmp = arr[0];//1.
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];//2.
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//	{
//		reverse_string(arr + 1);//arr+1����һ��ָ��ĵ�ַ
//	}//3.ʵ�ֵݹ���������������ƽ��������
//	arr[len - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";//����Ϊfedcba
//	int i = 0;
//	int j = my_strlen(arr);
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//���� : 1729����� : 19
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
//	printf("����������������:>");
//	scanf("%d", &num);
//	int a = DigitSum(num);
//	printf("\0");
//	printf("������ÿλ��Ϊ:%d", a);
//	return 0;
//}

//��дһ������ʵ��n��k�η�
//����˼·����n^k=n*n^k-1
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
//	else//�����������
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

//��ʶ�ṹ��
//����һ��ѧ��(���������䣬�Ա𣬵绰)
//����һ���ṹ������--�ȼ���int
//struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];//ʮһλ�绰�������һ��\0
//	char sex[5];
//}s1,s2,s3;//s1,s2,s3������ȫ�ֵĽṹ��������������ã�
//typedef struct Stu
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;//�˴��൱�ڽ�struct Stu����ΪStu �˴�Stu������
//int main()
//{
//	//�˴�s�Ǿֲ�����
//	struct Stu s1 = { "����",20,"15256788908","��" };//�����ṹ�����--�ȼ���int a=10��
//	Stu s2={"����",30,"14456797754","����"};//��ʱStu�ɵ�����Ϊ���ʹ���
//	return 0;//��ʼ�����ڽṹ�崴��ʱ������и�ֵ
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
//	//Ƕ�׽ṹ��ĳ�ʼ��
//	struct T t = { "hehe",{100,'w',"hello world",3.14},arr};
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr );//�õ����ּ�����
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
//	Stu s = { "��˹",40,"14478906789","��" };
//	//��ӡ�ṹ������
//	Print1(s);//�ṹ�崫��
//	Print2(&s);//����ʹ�õ�ַ--����
//	//Ϊʲô��
//	//Print1��Ҫ���´���һ����ʱ����--ʱ��Ϳռ��϶���ռ��--��Ҫ�õ�ѹջ
//	return 0;
//}
