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
//	printf("��������Ƚϵ�����ֵ��");
//	scanf("%d%d%d", &a, &b, &c);
//	//����ʱ�ո񼴿ɣ���ʽ�������ַ�����һ�£�
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;//������ʱ����tmp���㸳ֵ
//		//���⽫ֵ����aʱ����a��ԭֵ��ʧ
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
//��������������Լ��
//շת�����
//int main()
//{
//	int m, n;
//	int r = 1;
//	printf("����������������ֵ��");
//	scanf("%d%d", &m, &n);
//	while (r!=0)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("���������Լ��Ϊ%d", m);
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
//	printf("����%d������", c);
//	return 0;
//}
//int main()
//{
//	int x, y;
//	int i = 0;
//	printf("���������������ķ�Χ");
//	scanf("%d%d", &x, &y);
//	for (i = x; i <= y; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�����жϵĹ����Գ���
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
////�Գ��ԣ�ֻ�迼�Ǹ���
////��һ���Ż�
////ȥ������ż��
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
//	printf("����%d������9",c);
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
//	printf("���ֵΪ%d",max);
//	return 0;
//}
// ��ӡ�žų˷���
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			int mul = i * j;
//			printf("%d*%d=%-2d ", i, j, mul);
//			//%2d��ʾ��ӡ��λ������Ϊ�ո��룩
//			//����%2dΪ�Ҷ��� -2%dΪ����루Ĭ�ϴ�ӡ��λ��
//		}
//		printf("\n");
//	}
//	return 0;
//}

//��������Ϸ
//1.���Ի�����һ�������
//2.������
//void menu()
//{
//	printf("#########################\n");
//	printf("#####1.start 0.exit######\n");
//	printf("#########################\n");
//}
//void game()
//{
//	int range = 0;
//	printf("��������µ����ֵķ�Χ(0-?)��(ֻ���������ֵ����)");
//	scanf("%d", &range);
//	int guess = 0;
//	//1.�����������1-100��
//	//ʹ��ʱ����������������������ʼ��
//	int ret=rand()%range+1;
//	//2.������
//	system("cls");
//	while (1)
//	{
//		printf("�������\n");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("%d�´���\n", guess);
//		}
//		else if (guess < ret)
//		{
//			printf("%d��С��\n", guess);
//		}
//		else
//		{
//			system("cls");
//			printf("��ϲ��¶���\n");
//			break;
//		}
//
//	}
//
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	//�������������Է�ֹÿ��������Ϸʱ�ٴ�����
//	//�Ӷ�����"α���"���������
//	int input = '2';
//	do 
//	{
//		menu();
//		printf("��ѡ��(1/0)��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//��ʼ��Ϸ
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����");
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
//	//ͨ��������*pa�ҵ�a
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb= tmp;
//}
////����ԭ������ΪSawp������û�з���ֵ
////ֻ��ִ����һ������ ��������Add���������ֵ�Ĺ���
////�Ҹı����a b ����Ӧ��ֵ
////ԭAdd������������Ҫ�Ľ��ֻ��һ��ֵ��Ҳ��������֮��sum�����Կ�����x yȡ��a b����м���
////����Ҫ�ﵽ�ı���ֵ��Ŀ�ı���ʹ��Swap1
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d %d\n", a, b);
//	Swap1(&a, &b);//Ϊ��Ҫʹ�õ�ַ
//	//�ֱ��a�ĵ�ַ��b�ĵ�ַ����ȥ
//	//��ֹ���ִ����ı���x y��a b�޹ض����й���x y�ĸı䶼�޷�Ӱ��a b
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
//			return 0;//ִ�к�ֱ�ӽ�������
//		}
//		
//	}
//	//ֻҪ��������˵��������һ��������������x
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
//	printf("\n��������%d��", z);
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
////���ڸú������ӡ��ֻ���ж�
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
//	printf("\n�ܹ�������%d��", i);
//	return 0;
//}
//���ֲ��ҽ�ʹ������������
//int binary_search(int arr[], int n,int sz)
//{
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//���鴫�κ���ʹ�ø÷�����Ԫ�ظ���
//	//���ݵ���������Ԫ�صĵ�ַ
//	//������arr��һ��ָ��
//	//�޷��ں����ڲ�������Ԫ�ظ���
//	//���������������Ƚ���������ڴ��뺯����
//	//��Ϊ����ռ���ڴ��������Ĭ�϶��Ǵ���������Ԫ�ص�ַ
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)//���ܶ������ڣ���һleft=right=����ֵ��ѭ��Ӧ�ü���
//	{
//		//���ܷ���ѭ������
//		//ʵ����ÿ�ζ�������Ԫ���±�
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
//	printf("����������ҵ����֣�");
//	scanf("%d", &k);
//	int ret = binary_search(arr, k,sz);
//	//��ȥд������ô�ã����뺯����ôʵ��
//	if (ret == -1)
//	{
//		printf("�Ҳ���������\n");
//	}
//	else
//		printf("�������±�Ϊ%d\n", ret);
//	return 0;
//}
//void Add(int* p)
//{
//	(*p)++;
//	//���ȼ����⣬++���ȼ��ϸߣ���������
//	//�����漰�������ı�������ֵ���������ʹ��ָ��
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
//	//Ϊ�ν��Ϊ4321��
//	//�����һ����ӡ43
//	//ǰ�������ֱ��ӡ���Ƿ���ֵ������ֵΪ��ӡ���ַ�������
//}
