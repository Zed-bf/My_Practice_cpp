/*
strcpy库函数—复制字符串的功能。对应的头文件 #include<string.h>
strcpy的参数：
char * strcpy ( char * destination, const char * source );
第一个参数：目的地，指向要在其中复制内容的目标数组的指针。
第二个参数：来源地，要复制的 C 字符串。
返回值：返回一个指针
strncpy库函数的参数：
char * strncpy ( char * destination, const char * source, size_t num );
前面两个参数和strcpy是一致的。
第三个参数：size_t num—要从来源地复制的最大字符数。
size_t 是无符号整数类型。
*/
#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char str1[] = "hehe";
	char str2[] = "haha";
	strcpy(str1,str2);//将str2的内容复制到str1中
	printf("%s\n",str1);
	char ch1[] = "hello";
	char ch2[] = "china!!!";
	//只是把china拷贝过去
	strncpy(ch1,ch2,5);
	printf("%s\n",ch1);
	return 0;
    
}
