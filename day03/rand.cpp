/*生成随机数*/
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void shaizi();
int main(){
     // 使用当前时间作为种子来初始化随机数生成器
    srand(static_cast<unsigned int>(time(nullptr)));
    //static_cast是一个强制类型转换操作符。强制类型转换，也称为显式转换，C++中强制类型转换操作符有static_cast、dynamic_cast、const_cast、reinterpert_cast四个。
    //用法：static_cast < type-id > ( expression )
    //该运算符把expression转换为type-id类型，但没有运行时类型检查来保证转换的安全性。

    shaizi();
    return 0;
}

void shaizi(){
    int shaizi_num;
    cout<<"请输入你要投掷几个骰子"<<endl;
    cin>>shaizi_num;
    int num;
    int sum =0;
    for (int i=0;i<shaizi_num;i++){
        num = rand()%6+1;
        cout<<"你投第"<<i+1<<"个骰子的点数为"<<num<<endl;
        sum += num;
    }
    cout<<"总点数为"<<sum<<endl;

}
