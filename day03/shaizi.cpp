#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
/*用类来实现骰子*/
class ShaiZi{
    int shaizi_num;
    public:
    ShaiZi(int x){
        this->shaizi_num =x;
    }
    void tou();
};
void ShaiZi::tou(){
    int num;
    int sum =0;
    srand(static_cast<unsigned int>(time(nullptr)));
    for (int i=0;i<shaizi_num;i++){
        num = rand()%6+1;
        cout<<"你投第"<<i+1<<"个骰子的点数为"<<num<<endl;
        sum += num;
    }
    cout<<"总点数为"<<sum<<endl;

}
int main(){
    ShaiZi a = ShaiZi(3);
    a.tou();
    ShaiZi b = ShaiZi(2);
    b.tou();
    return 0;
}