// ��support.cppһͬ
// ��ʾ�������ļ���ʹ����һ���ⲿ������
// ����ʾ���Զ�����������ͬ����ȫ�ֱ�����
// ����ʾ�����ʹ�ùؼ���extern������������ǰ��������ⲿ����
// �Լ����ʹ��C++���������������������ʱ����ص��ⲿ����

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