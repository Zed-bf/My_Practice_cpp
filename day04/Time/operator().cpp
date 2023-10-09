//重载Time（）
#include<iostream>
using namespace std;
class Time{
    private:
        int hh;
        int mm;
        int ss;
    public:
    Time(int h=0,int m=0,int s=0):hh(h),mm(m),ss(s){}
    void operator()(int h, int m, int s){
        hh = h;
        mm = m;
        ss = s;
    }
    void showTime(){
        cout<<hh<<":"<<mm<<":"<<ss<<endl;
    }

};
int main(){
    Time t1(23,15,47);
    t1.showTime();
    t1.operator()(23,20,20);
    t1.showTime();
    t1(23,25,37);
    t1.showTime();
    return 0;
}