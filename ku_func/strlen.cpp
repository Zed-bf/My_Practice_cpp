/*
strlen库函数是一个获取字符串长度的库函数，计算‘\0’之前的字符。
对应的头文件 #include<string.h>
strlen的参数:
size_t strlen ( const char * str );
参数：字符串起始地址，会计算该字符串’\0‘之前的字符个数。
返回值：返回一个无符号数值。
*/
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char a[] = "abcd";
    char *b = "abcd";
    int num;
    num = strlen(a);
    cout<<num<<endl<<strlen(b)<<endl;
    return 0;
}