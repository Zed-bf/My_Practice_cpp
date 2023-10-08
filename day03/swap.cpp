/*交换两个数据*/
#include<iostream>
using namespace std;
int main(){

    int a =0;
    int b =1;
    cout<<"交换前两个数a="<<a<<"\tb="<<b<<endl;
    
    swap(a,b);
    cout<<"交换后两个数a="<<a<<"\tb="<<b<<endl;

}
void swap(int &x, int &y){
    int t ;
    t= x;
    x= y;
    y=t;
}