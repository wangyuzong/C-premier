// 与external.cpp一同
// 演示在两个文件中使用了一个外部变量，
// 还演示了自动变量将隐藏同名的全局变量，
// 还演示了如何使用关键字extern来重新声明以前定义过的外部变量
// 以及如何使用C++的作用域解析运算符来访问被隐藏的外部变量

// support.cpp  - -  use external variable
// compile with external.cpp

#include <iostream>

extern double warming;    // use warming from another file

// function prototypes
void update(double dt);

void local();

using std::cout;

void update(double dt)      // modifies global variable
{
	extern double warming;    // optional redeclaration
	warming += dt;            // uses global warming
	std::cout << "Updating global warming to " << warming;
	std::cout << " degress.\n";
}

void local()       // uses local variable
{
	double warming = 0.8;   // new variable hides external one

	std::cout << "Local warming = " << warming << " degress.\n";
			// Access global variable with the
			// scope resolution operator
	std::cout << "But global warming  = " << ::warming;
	std::cout << " degress.\n";
}