



#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
    //修改arr2的个数，理解数量不同是什么情况
	int arr2[] = { 9,8,7,6,5,4,3,2,1};
	//将arr1中1 2 3 4 5 拷贝为0
	memcpy(arr1, arr2, 20);
	int i = 0;
	for (i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		printf("%d ",arr1[i]);
	}
	printf("\n");
	return 0;
}
