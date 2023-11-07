// Eg12-7.cpp
#include <fstream>
#include <iostream>
using namespace std;
int main() {
  char ch;
//   创建一个输出文件流对象out，并打开名为 "test.dat" 的文件以写入模式（ios::out）和二进制模式（ios::binary）。
//   如果文件不存在，将创建该文件；如果文件已经存在，将清除文件内容。
  ofstream out("/test.dat", ios::out | ios::binary); // L1
  for (int i = 0; i < 90; i++) {
    if (i > 0 && (i % 30) == 0)
      out.put('\n');
    out.put(i);
    out.put(' ');
  }
  out.close();
//   创建一个输入文件流对象in，并打开名为 "test.dat" 的文件以读取模式（ios::in）和二进制模式
  ifstream in("/test.dat", ios::in | ios::binary);
  while (in.get(ch))
    cout << ch;
  in.close();
  
}