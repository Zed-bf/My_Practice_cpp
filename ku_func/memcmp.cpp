/*
memmcmp—比较两个内存块
头文件—#include <string.h>memcpm的参数
int memcmp ( const void * ptr1, const void * ptr2, size_t num );
第一个参数：指向内存块的指针。
第二个参数：指向内存块的指针。
第三个参数：要比较的字节数。
返回值—是和strcmp一致的 
*/
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int arr1[] = {1,2,3,5,5,6,7};
	int arr2[] = {1,2,3,4,5,6,7 };
	//arr1与arr2进行比较
	int ret=memcmp(arr1, arr2, 20);

	printf("%d\n",ret);
	return 0;
}
