#include<iostream>
using namespace std;
void temperature(int t){

    try{
        if (t==0){
            throw "it is the freezing point";
        }
        else if (t==100){
            throw "it is the boiling  point";
        }
        else{
            cout<<"the temperature is ok..."<<endl;
        }
    }
    catch(int x){
            cout <<"temperature = " << x <<endl;
    }
    catch(char const *c){
        cout << c << endl;
    }
}
int main(){
    temperature(0);
    temperature(20);
    temperature(100);
    return 0;
}