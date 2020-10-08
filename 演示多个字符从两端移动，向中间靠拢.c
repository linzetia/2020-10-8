//演示多个字符从两端移动，向中间靠拢

#include<stdio.h>
#include<string.h>//用了strlen计算字符串的长度
#include<windows.h>//用了Sleep作为延时函数
#include<stdlib.h>//用了system函数中的cls进行清屏

int main()
{
	char arr1[] = "colse the window !!!!!!!";
	char arr2[] = "########################";
	int left = 0;
	//int right = sizeof(arr1) / sizeof(arr1[0])-2;//因为下标从0开始，以及‘\0’字符串默认字符
	//更简单表示right方法
	int right = strlen(arr1) - 1;//计算数组元素个数，如果是字符串型，可以通过strlen计算字符串的长度
	//strlen(arr1) - 1，默认不计算‘\0’字符

	while (left<=right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];

		left++;
		right--;

		printf("%s\n", arr2);
		Sleep(1000);//是windows里的函数，Sleep要大写。
		system("cls");//system是系统stdlib函数，cls表示清屏
	}
	printf("%s\n", arr1);//重新打印arr最终可以显示最后结果
	return 0;
}