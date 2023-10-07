/*  用递归实现斐波那契数列求和*/
#include<iostream>
using namespace std;
// 斐波那契函数；记得考虑特殊的情况
int fib(int x){

        if(x<0){
            cerr<< "输入错误"<<endl;
            exit(0);
        }
        if(x==0 || x==1){
            return 1;
        }
        else{
            return fib(x-1)+fib(x-2);
        }
    }
int main(){

    int fib(int x);
    int input;
    cout <<"请输入要计算的斐波那契函数的输入"<<endl;
    cin >>input;
    int out;
    out = fib(input);
    cout <<"您要计算的斐波那契函数的输出为\t"<<out<<endl;
    return 0;
}

