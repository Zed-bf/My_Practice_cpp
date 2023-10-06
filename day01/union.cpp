#include<iostream>
using namespace std;

union MyUnion{
    int a;
    int b;
    char c;
};
int main(){
    union MyUnion firstUnion;
    firstUnion.a = 66;
    cout<<"firstUnion.a is "<< firstUnion.a<<endl;
    cout<<"firstUnion.b is "<< firstUnion.b<<endl;
    cout<<"firstUnion.c is "<< firstUnion.c<<endl;
    firstUnion.b = 68;
    cout<<"firstUnion.a is "<< firstUnion.a<<endl;
    cout<<"firstUnion.b is "<< firstUnion.b<<endl;
    cout<<"firstUnion.c is "<< firstUnion.c<<endl;

    return 0;
}