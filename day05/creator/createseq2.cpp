/*前两者情况在一起出现*/
#include <iostream>
using namespace std;
class A {
public:
  A() { cout << "Constructing A" << endl; }
  ~A() { cout << "Destructing A" << endl; }
};
class B {
public:
  B() { cout << "Constructing B" << endl; }
  ~B() { cout << "Destructing B" << endl; }
};
class C {
public:
  C() { cout << "Constructing C" << endl; }
  ~C() { cout << "Destructing C" << endl; }
};
class D : public C {
public:
  D() { cout << "Constructing D" << endl; }
  ~D() { cout << "Destructing D" << endl; }
  B b;
  A a;
  C c;
};

int main() {
  D d;
  
}

/*
Constructing C              继承构建
Constructing B              成员构建
Constructing A              成员构建
Constructing C              成员构建
Constructing D              自身构建
Destructing D               自身析构
Destructing C               成员析构
Destructing A               成员析构
Destructing B               成员析构
Destructing C               继承析构
*/