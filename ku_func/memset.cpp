/*
memset—填充内存块
头文件—#include <string.h>
memset库函数的参数：
void * memset ( void * ptr, int value, size_t num );
第一个参数：指向要填充的内存块的指针。
第二个参数：要设置的值。该值作为 int 传递，但该函数使用此值的无符号 char 转换填充内存块。
第三个参数：要设置为该值的字节数。size_t 是无符号整数类型。
返回值：返回指针类型
*/
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[30] = "HELLO CHINA";
	//在str字符串后面添加三个感叹号
	memset(str + 11, '!', 3);
	printf("%s\n",str);
	return 0;
}
