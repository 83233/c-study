#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
//2022.7.5
//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("���ú�ѧϰ��(1/0)>��");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("��offer.");
//	else 
//		printf("��ȥ������");
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	printf("�������\n");
//	while (line < 100)
//	{
//		printf("��һ�д���:%d\n",line);
//		line++;
//	};
//	if (line>50)
//	    printf("��offer");
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
//	printf("������������ֵ\n");
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
 //��һ��MAXд��
//int MAX(int x, int y)
//{
//	int z = x - y;
//	return z;
//}
// �ڶ���MAX����д��(ֻ�����������������޸ģ�����׸����
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
//	printf("��������Ƚϵ�����ֵ\n");
//	scanf("%d%d", &num1, &num2);
//	del = MAX(num1, num2);
//	if (del > 0)
//		printf("���нϴ��ֵΪ%d", num1);
//	else
//		printf("���нϴ��ֵΪ%d", num2);
//	return 0;
//}

//2022.7.7
//����ʽ��ϴ�ֵ�Ľ�һ���򻯣���Ŀ��������
//�ú�ķ�ʽ�����ͬ����Ŀ��������������#define�������˶��壩
//�൱�ڼ�
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	printf("��������Ƚϵ�����ֵ;\n");
//	scanf_s("%d%d" ,& a, &b);
//	max = MAX(a, b);
//	printf("���нϴ�ֵΪ%d", max);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	printf("��������Ƚϵ�����ֵ;\n");
//	scanf_s("%d%d" ,& a, &b);
//	max = (a > b ? a : b);
//	printf("���нϴ�ֵΪ;%d", max);
//	return 0;
//}
//void test() 
//{
//	static int a = 1;
//	//a��ÿ�ζ������ã���ȥʱ��������ȥʱ����[�ֲ�����ֻ�����ڷ�Χ��]��
//	//�������:����static��a��Ϊ��̬�ֲ��������������٣�
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
//	//������һ��Դ�ļ������Add����
//	//����extern����Ҳ��ʹ�ã�2022�
//	//ʹ��static���ʧЧ��ʹ��static�ĺ���ֻ����ͬһԴ�ļ��ڲ�ʹ��
//	printf("a+b=%d\n", z);
//	return 0;
//}

//2022.7.8
//�ṹ�壨�൱�ڸ�Ԫ�ظ�һ�����ϣ���ָ������
//struct Book
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	struct Book b1 = { "c�������",55 };
//	struct Book* pb = &b1;
//	//����һ��ָ�����pbָ��b1
//	printf("������%s\n�۸�%d\n", (*pb).name, (*pb).price);
//	//�൱������ָ���Ƚ��н������ҵ�b1���ٽ��д�ӡ
//	//����һ��д����(����㣩�ü�ͷ��
//	printf("������%s\n�۸�%d\n", pb->name, pb->price);
//	return 0;
//}

//��֧��ѭ��(2022.7.8)
// ����ѡ��
//int main()
//{
//	int a = 0;
//	printf("����������䣺\n");
//	scanf_s("%d", &a);
//	if (a < 18)
//	{
//		printf("δ���ꡣ");
//		printf("����̸����");
//	}
//	else if (a>=18&&a<28)
//		printf("����");
//	else if(a>=28&&a<50)
//		printf("׳��");
//	else if(a>=50&&a<90)
//		printf("����");
//	else
//		printf("�ϲ���");
//	return 0;
//}
//�ж�һ��������ż
//int main()
//{
//	int a = 0;
//	printf("����һ������\n");
//	scanf_s("%d", &a);
//	if (a % 2 == 0)
//		printf("����Ϊż��");
//	else
//		printf("����Ϊ����");
//
//}
//���1-100������
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
//		printf("����һ");
//		break;
//	case 2:
//		printf("���ڶ�");
//		break;
//	case 3:
//		printf("������");
//		break;
//	case 4:
//		printf("������");
//		break;
//	case 5:
//		printf("������");
//		break;
//	case 6:
//		printf("������");
//		break;
//	case 7:
//		printf("������");
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
//		printf("������");
//		break;//breakʹ������ѭ��
//	//��һ��case��������break
//	//��ͬ�����ͬ�Ľ�����Խ�ϵ�һ��
//	case 6:
//	case 7:
//		printf("��Ϣ��");
//		break;
//		//����break��һ����ϰ��(�������)
//	default://�������
//		printf("�������");
//		break;
//	//˳����Ҫ��
//	}
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	//EOF--end of file�ļ�������־ ctrl+z
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
// �����ɻ�˴�scanf�����������е�scanf_s����
//�����scanf_s������Ԥ���ȡ���ȣ�ǰ����д�����в��漰�������
//�˴���Ԥ���ȡ����Ϊһ���������뻺������Ȼ�����\n
//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("���������룺");
//	scanf_s("%s", password,1);
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ��(Y/N):");
//	ret = getchar();
//	if (ret == 'Y')
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("����ȷ��\n");
//	return 0;
//}
//�����Ժ�ʹ��scanf����
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
//	for (x = 0, y = 0; x < 2 && y < 5; x++, y++)//����������ѭ������������ѭ��
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
// 1.�ú��������������n�Ľ׳˺�
//int main()
//{
//	int n = 0;
//	int s = 0;
//	int mul = 0;
//	printf("�����������Ľ׳˺�\n");
//	scanf("%d", &n);
//	for (s = 1; s <= n; s++)
//		mul = Add(s) + mul;
//	printf("��һ��%d�Ľ׳˺�Ϊ%d", n, mul);
//	return 0;
//}
//2.��ѭ���ķ������(��һ���Ż���ȥ��Ƕ��ѭ��)
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 0;
//	int ret = 1;
//	int a = 0;
//	printf("�����������Ľ׳˺�\n");
//	scanf("%d", &n);
//	for (a = 1; a<= n; a++)
//	{
//		ret = ret * a;
//		//ԭ��2��ʵ���Ͼ���1��*2������ͬ��
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}
//��д������������Ѱ���ض�Ԫ��
//1.�ӵ�һ����ʼ���(Ч�ʵ�)
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	int i = 0;
//	//���ڼ���һ��������Ԫ�ظ������ܳ��ȳ�һÿ��Ԫ�س��ȣ�
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("����������ҵ����֣�");
//	scanf("%d", &k);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ����±�Ϊ%d\n", i);
//			break;
//		}
//	}
//	if (sz == i)
//		printf("�������в����ڸ�Ԫ��");
//	return 0;
//}
//2.���֣��۰룩�����㷨
//�ҵ��±��ƽ��ֵ�����ּ��㣨ȡ����
//�ʺ�����������
//int main()
//{
//	int k = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;//���±�
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;//���±�
//	printf("��������Ѱ�ҵ�Ԫ�أ�");
//	scanf("%d", &k);
//	while (left<=right)//��ʱ��˵����֮ǰ����Ԫ��
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
//			printf("�ҵ��ˣ��±���:%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���");
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!";
//	char arr2[] = "###################";
//	//�ַ�����ͬ�����飬�����һ��\n
//	//int right = sizeof(arr1)/sizeof(arr1[0]) - 2;
//	//���ø��򵥵���
//	int right = strlen(arr1) - 1;
//	int left = 0;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//��Ϣһ��(�˴���λΪ����)
//		Sleep(500);
//		//����Ļ���
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}