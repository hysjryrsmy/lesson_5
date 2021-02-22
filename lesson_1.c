#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//判断一个整数n在十进制表示下是不是回文数字（通过函数）
/*
int check(int n) {
	if (n < 0) return 0;
	int temp = 0, x = n;
	while (x) {
		temp = temp * 10 + x % 10;
		x /= 10;
	}
	return temp == n;
}
int main()
{
	int n, digit = 0, x;
	scanf("%d", &n);
	x = n;
	printf("%d %s\n", x, check(x) ? "is reverse num" : "is not reverse num");//check可以用来判断是否是回文数字
	return 0;
}
*/

//判断一个整数n在二进制表示下是不是回文数字
/*
int check(int n) {
	if (n < 0) return 0;
	int temp = 0, x = n;
	while (x) {
		temp = temp * 2 + x % 2;
		x /= 2;
	}
	return temp == n;
}
int main()
{
	int n, digit = 0, x;
	scanf("%d", &n);
	x = n;
	printf("%d %s\n", x, check(x) ? "is reverse num" : "is not reverse num");//check可以用来判断是否是回文数字
	return 0;
}
*/
//判断一个十进制数n在base进制下是否是回文数
#include <inttypes.h>
int check(int n, int base) {  //check可以判断int范围内所有的整形是不是回文数字
	if (n < 0) return 0;
	int temp = 0, x = n;
	while (x) {
		temp = temp * base + x % base;
		x /= base;
	}
	return temp == n;
}
int main()
{
	int n, digit = 0, x;
	printf("INT32_MAX = %d\n", INT32_MAX);//32位整形的最大值
	printf("INT32_MIN = %d\n", INT32_MIN);//32位整形的最小值
	/*scanf("%d", &n);
	x = n;
	printf("%d %s\n", x, check(x) ? "is reverse num" : "is not reverse num");*///check可以用来判断是否是回文数字
	return 0;
}