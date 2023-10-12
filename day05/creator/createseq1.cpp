/* 派生类的构造析构顺序
1、先构造基类再构造派生类（先调用基类构造函数，再调用派生类构造函数）
2、先析构派生类；在析构基类（先调用基类析构函数，再调用派生类析构函数
*/
#include <iostream>
using namespace std;
class Base {
private:
  int x;

public:
  Base(int a) {
    x = a;
    cout << "Base constructor x=" << x << endl;
  }
  ~Base() { cout << "Base destructor..." << endl; }
};
class Derived : public Base {
private:
  int y;

public:
  Derived(int a, int b) : Base(a) { //派生类构造函数的初始化列表
    y = b;
    cout << "Derived constructor y=" << y << endl;
  }
  ~Derived() { cout << "Derived destructor..." << endl; }
};
int main() {
  Derived d(1, 2);
  
  return 0;
}

/*
Base constructor x=1
Derived constructor y=2
Derived destructor...
Base destructor...
*/