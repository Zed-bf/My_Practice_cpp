#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  char c[30] = "this is string";
  double d = -1231.232;
//   设置输出的字段宽度为30个字符。这意味着后续的输出将在一个30字符宽的字段内进行。
  cout.width(30);
//   设置填充字符为*，这意味着如果输出的内容不足30个字符，将使用*来填充空白位置。
  cout.fill('*');
  cout.setf(ios::left);
  cout << c << "----L1" << endl;
  cout.width(30);
  cout.fill('-');
//   将输出设置为右对齐，这意味着文本将向右对齐，左侧填充。
  cout.set f(ios::right);
  cout << c << "----L2" << endl;
//   设置输出格式为十进制，并启用基数标志和小数点标志。这将影响后续输出的方式。
  cout.setf(ios::dec | ios::showbase | ios::showpoint);
  cout.width(30);
  cout << d << "----L3"
       << "\n";
//    继续启用小数点标志，以影响后续的浮点数输出。
  cout.setf(ios::showpoint);
// 设置浮点数的精度为10，这意味着将输出10位小数。
  cout.precision(10);
  cout.width(30);
  cout << d << "----L4"
       << "\n";
  cout.width(30);
//   设置输出格式为八进制。ios::basefield是一个掩码，确保只设置基数标志为八进制。
  cout.setf(ios::oct, ios::basefield);
  cout << 100 << "----L5"
       << "\n";
  
  return 0;
}
