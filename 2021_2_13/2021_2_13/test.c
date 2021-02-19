#define _CRT_SECURE_NO_WARNINGS 1
//void main()
//{
//	int a;
//	scanf("%d", &a);
//	int i = 0; int p = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((a >> i) & 1))
//		{
//			p++;
//		}
//	}
//	printf("这个数字有%d个1", p);
//}
//void main()
//{
//	int a = 10;
//	int *p = &a;
//	*p = 20;
//	printf("%d", a);
//}
void main()
{
	int a = 19;
	char c = 'r';
	char *p=&c;
	int arr[10] = {0};
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(c));
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(*p));
	printf("%d\n", sizeof(char *));
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(int [10]));//类型就是除去名称后的东西
}