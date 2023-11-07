#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    memmove(arr+2, arr,20);
    int i = 0;
    for (i =0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout << arr[i]<<"\t";
    }
    return 0;
}