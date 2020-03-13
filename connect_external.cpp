// 与support.cpp一同
// 演示在两个文件中使用了一个外部变量，
// 还演示了自动变量将隐藏同名的全局变量，
// 还演示了如何使用关键字extern来重新声明以前定义过的外部变量
// 以及如何使用C++的作用域解析运算符来访问被隐藏的外部变量

// external.cpp  - -  external variables
// compile with support.cpp
#include <iostream>

using namespace std;

// external variable
double warming = 0.3;        // warming defined

// function prototypes
void update(double dt);

void local();

int main()       // uses global variable
{
	std::cout << "Global warming is " << warming << " degrees.\n";
	update(0.1);             // call function to change warming
	std::cout << "Global warming is " << warming << " degress.\n";
	local();                 // call function with local warming
	std::cout << "Global warming is " << warming << " degress.\n";
	return 0;
}