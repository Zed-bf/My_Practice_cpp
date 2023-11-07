#include <iostream>
using namespace std;
//函数原型
// put(char c)
// write(const char*c, int n)
int main() {
  char c;
  char a[50] = "this is a string...";
  cout << "use get() input char:";
//   这是一个while循环，它会一直运行，直到用户输入回车键（\n），这是行结束的标志。
  while ((c = cin.get()) != '\n') {
    // 使用cout.put()函数将读取到的字符c输出到标准输出。这行代码将每个读取到的字符打印到屏幕上。
    cout.put(c);
    // 输出一个换行符，以使输出的字符逐行显示。
    cout.put('\n');
    // 使用cout.put()函数连续输出一些字符和一个换行符。这行代码输出字符串 "this" 并在最后添加一个换行符，以使输出逐行显示。
    cout.put('t').put('h').put('i').put('s').put('\n');
    cout.write(a, 12).put('\n');
    // 使用cout.write()函数从字符数组a中写入12个字符，并使用put('\n')在末尾添加一个换行符。这将输出数组a的前12个字符，并换行显示。
    cout << "look"
         << "\t here!" << endl;
  }
  
}