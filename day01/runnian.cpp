#include<iostream>
using namespace std;
bool if_runnian(int year){
    if(year%400==0){
        return true;
    }
    if(year%100==0){
        return false;
    }
    if(year%4==0){
        return true;
    }
    else{
        return false;
    }
}
 int main(){
    int year;
    cout<<"请输入年份"<<endl;
    cin>>year;
    if( if_runnian(year)){
        cout<<"该年份是闰年"<<endl;
    }
    else{
        cout<<"该年份不是闰年"<<endl;
    }
 }