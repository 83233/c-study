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

// // ��һһֱ�ӵ�n�Ľ׳ˣ�
//int test(int i)//�˴���test�����������һ�����Ľ׳�
//{
//	int ret = 1;
//	int a = 0;
//	for (a = 1; a <= i; a++)//������һ��n������
//	{
//		ret *= a;//ÿ����һ�����־ͳ˵�ret��ȥ
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
//�����Ǹ���������
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
//�˴������������retҪ����ÿ�ν���jѭ��ʱ��ʼֵ��Ӧ����1����i=2�����retֵ���2��
//��û���ٴν��г�ʼ�������º�����6�Ļ����϶����һ��2��
//����3�����15=1+2+2*6.
//����������ڵ�һ��ѭ���г�ʼ��ret = 1;

//ģ��ʵ���ַ������ƺ���strcpy(Ŀ��ռ��ַ��Դ�ռ��ַk)
//void my_strcpy(char* dest, char* src)//arr1��Ŀ�ĵ�destination��arr2��Դͷ
//{
//	while (*src != '\0')//src��һ��ָ�룬�ҵ����Ӧ�Ŀռ���Ҫ���н����á�
//	{
//		*dest = *src;
//		dest++;//��ַ++�������Ӧ�Ĵ��浥Ԫ��ת������һ�����浥Ԫ
//		src++;
//	}
//	*dest = *src;
//}
//�������д�Ĳ��á������Լ�����
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;//hello�Ŀ���
//	}
//  *dest = *src;//��\0�Ŀ�����
//}
//���߽�һ���ļ�
//void my_strcpy(char* dest, char* src)
//{
//	while ( *dest++ = *src++ )
//	{
//		;
//	}
//}
//��ʱ�����Ż�
//1.dest, src ��NUll��ָ����ô��
//2.˳�����������ô�졣
//��srcָ������ݷŵ�destָ��Ŀռ���
//�ӱ����Ͻ�--ϣ��destָ������ݱ��޸ģ�srcָ������ݲ����޸�
//����src��߼���const��֤�������src��ı������
//void my_strcpy(char* dest, const char* src)
//{
//	assert(src != NULL);//���ԣ������б�ʽΪ��ʱ�ᱨ��
//	//��ʱ����ͷ�ļ�<assert.h>
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
//	////��arr2�е�hello������arr1��ȥ
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	//int num = 10;
//	//int* p = &num;
//	//*p = 20;//��ʱ���Խ�num��Ϊ20
//	const int num = 10;
//	int* p = &num;
//	*p = 20;
//	printf("%d\n", num);
//	return 0;
//}

//��һ���ģ�Ϊʲô�����char*�ķ������ͣ�
//Ӧ�÷���Ŀ��ռ����ʼ��ַ��
//ֱ��return dest���������� dest�����˸ı�
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(src != NULL);//���ԣ������б�ʽΪ��ʱ�ᱨ��
//	//��ʱ����ͷ�ļ�<assert.h>
//	assert(dest != NULL);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;//����Ŀ��ռ����ʼ��ַ
//}
////�����ı����Խ�һ����main�����Ĵ���
//int main()
//{
//	char arr1[20] = "xxxxxxxxx";
//	char arr2[20] = "hello";
//	//strcpy(arr1, arr2);
//	////��arr2�е�hello������arr1��ȥ
//	printf("%s\n", my_strcpy(arr1, arr2));
//	//ֱ���Է��ص�ַ��ӡ
//	return 0;
//}

//int Ϊ�з������Σ����ǳ��Ȳ�����Ϊ����
//size_t -- unsigned int
size_t my_strlen(const char* arr)//��ϣ��arr�����ݱ��ı�
{
	//assert(arr != NULL);
	assert(arr);//Ҳ���Լ�дΪ����
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