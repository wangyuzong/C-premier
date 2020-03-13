// ��external.cppһͬ
// ��ʾ�������ļ���ʹ����һ���ⲿ������
// ����ʾ���Զ�����������ͬ����ȫ�ֱ�����
// ����ʾ�����ʹ�ùؼ���extern������������ǰ��������ⲿ����
// �Լ����ʹ��C++���������������������ʱ����ص��ⲿ����

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