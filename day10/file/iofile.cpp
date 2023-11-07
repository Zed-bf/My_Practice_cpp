// 12-6.cpp
#include <fstream>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
  fstream ioFile;
//   打开名为 "a.dat" 的文件，以输出模式（ios::out）。如果文件不存在，将创建该文件；如果文件已经存在，将清除文件内容。
  ioFile.open("./a.dat", ios::out);
//   将学生 "张三" 的信息写入文件。它包括姓名、英语成绩、数学成绩和计算机成绩，每个字段之间用空格分隔，最后加上换行符以分隔不同的学生信息。
  ioFile << "张三"
         << "  " << 76 << " " << 98 << " " << 67 << endl; // L3
  ioFile << "李四"
         << "  " << 89 << " " << 70 << " " << 60 << endl;
  ioFile << "王十"
         << "  " << 91 << " " << 88 << " " << 77 << endl;
  ioFile << "黄二"
         << "  " << 62 << " " << 81 << " " << 75 << endl;
  ioFile << "刘六"
         << "  " << 90 << " " << 78 << " " << 67 << endl;
//  关闭文件，确保写入的数据被保存到文件中。
  ioFile.close();
//   重新打开文件 "a.dat"，这次以输入模式（ios::in）和二进制模式（ios::binary）。这意味着文件将以二进制形式读取。
  ioFile.open("./a.dat", ios::in | ios::binary);
  char name[10];
  int chinese, math, computer;
  cout << "姓名\t"
       << "英语\t"
       << "数学\t"
       << "计算机\t"
       << "总分" << endl;
//    从文件中读取学生的姓名。
  ioFile >> name;
//   进入一个循环，该循环会一直运行，直到文件结束。
  while (!ioFile.eof()) {
    // 从文件中读取学生的英语、数学和计算机成绩。
    ioFile >> chinese >> math >> computer;
    cout << name << "\t" << chinese << "\t" << math << "\t" << computer << "\t"
         << chinese + math + computer << endl;
    ioFile >> name;
  }
  ioFile.close();
  
  return 0;
}