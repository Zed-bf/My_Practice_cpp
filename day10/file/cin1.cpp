#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  char stu[5][10];
  int i;
  for (i = 0; i < 5; i++)
//   这行代码使用cin.getline()函数从标准输入中读取一行文本，最多读取10个字符，或者遇到逗号（,）为止。读取的内容被存储在stu[i]中，i表示当前迭代的行数。
    cin.getline(stu[i], 10, ',');
  for (i = 0; i < 5; i++)
    cout << stu[i] << endl;
  
  return 0;
}