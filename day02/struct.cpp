/* 结构体.cpp */
#include<iostream>
using namespace std;

//申明结构体student
struct student{
    /* data */
    const char number[9];
    const char name[6];
};
int main(){
    student a = {"20231007","lisan"};
    cout<<a.number<<endl;
    cout<<a.name<<endl;
    return 0;
}
