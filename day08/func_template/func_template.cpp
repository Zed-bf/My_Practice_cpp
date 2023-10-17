#include<iostream>
using namespace std;
template <typename T>
T Mymax(T a, T b){
    return a>b?a:b;
}

int main(){
    int x = 4;
    int y = 5;
    double d_x = 4.0,d_y=5.4;
    int i;
    double d;
    i =Mymax(x,y);
    d = Mymax(d_x,d_y);
    cout<<i<<endl<<d<<endl;
    return 0;
}