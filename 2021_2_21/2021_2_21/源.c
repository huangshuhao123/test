#define _CRT_SECURE_NO_WARNINGS 1


//��һ�������ж��ٸ�1
 
//#include<stdio.h>
//int Count_bit_one(int a)
//{
//	int i = 0; int count=0;
//	for (i = 0; i < 32; i++)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a = a / 2;
//	}
//	return count;
//}
//void main()
//{
//	int a = 15;
//	int ret = Count_bit_one(a);
//	printf("%d\n", ret);
//}



//#include<stdio.h>
//int Count_bit_one(int a)
//{
//	int i = 0; int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 ==( (a >> i) & 1))
//		{
//			count++;
//		}
//	}
//	return count;
//}
//void main()
//{
//	int a = 15;
//	int ret = Count_bit_one(a);
//	printf("%d\n", ret);
//}


//#include<stdio.h>
//int Count_bit_one(int a)
//{
//	int count = 0; 
//	while (a != 0)
//	{
//		a = a&(a - 1);
//		count++;
//
//	}
//	return count;
//}
//void main()
//{
//	int a = -1;
//	int ret = Count_bit_one(a);
//	printf("%d\n", ret);
//}


//�����������ж���Ϊ����ͬ��


//#include<stdio.h>
//int Count_bit_one(int a)
//{
//	int count = 0;
//	while (a != 0)
//	{
//		a = a&(a - 1);
//		count++;
//
//	}
//}
//int get_differ_bit(int a ,int  b)
//{
//	int c = a^b; int ret;
//	return ret = Count_bit_one(c);
//
//}
//void main()
//{
//	int a; int b; int c;
//	printf("������������\n");
//	scanf("%d%d", &a, &b);
//	int ret=get_differ_bit(a, b);
//	printf("������������%dλ�ǲ���ͬ��\n", ret);
//}


//�ֱ��ӡһ����������λ��ż��λ


//#include<stdio.h>
//void print(int a)
//{
//	int i = 0;
//	printf("����λΪ\n");
//	for (i = 30; i >=0; i -= 2)
//	{
//		printf("%d  ", (a >> i) & 1);
//	}
//	printf("\n");
//	printf("ż��λΪ\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d  ", (a >> i) & 1);
//	}
//}
//void main()
//{
//	int a;
//	scanf("%d", &a);
//	print(a);
//	printf("\n");
//}


//#include<stdio.h>
//void print(int *p, int sz)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",* (p + i));//������
//	}
//}
//void main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
//	int *p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(p, sz);
//	printf("\n");
//}


//��ӡ�˷��ھ���

//#include<stdio.h>
//void print_table(int a)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= a; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//void main()
//{
//	int a;
//	scanf("%d", &a);
//	print_table(a);
//}


#include<stdio.h>
//#include<string.h>
//int strlen(char *arr)
//{
//	
//	char *start = arr;
//	char *end = arr;
//	while (*end != '\0')//������Ҫ������
//	{
//		end++;
//	}
//	return (end-start);
//}
int strlen(char *arr)
{
	if (*arr == '\0')
	{
		return 0;
	}
	else return 1 + strlen(arr + 1);
}
void reverse_string(char *arr)
{
	int *tmp = arr;
	int len = strlen(arr);
	arr[0] = arr[len - 1];
	arr[len - 1] = '\0';
	if (strlen(arr + 1) >= 2)
	{
		reverse_string(arr + 1);
	}
	arr[len - 1] = *tmp;


}
void main()
{
	char arr[] = "abcdef";
	printf("%s\n", arr);
	reverse_string(arr);
	printf("%s\n", arr);
}