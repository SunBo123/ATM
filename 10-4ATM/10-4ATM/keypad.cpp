#include <iostream>
using namespace std;

#include "keyPad.h"

int KeyPad::getInput() const
{
	//读取从键盘输入的数据
	int input;
	cout << "请从键盘输入：" << "\n" << endl;
	cin >> input;
	return input;
}