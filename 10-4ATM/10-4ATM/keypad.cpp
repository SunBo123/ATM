#include <iostream>
using namespace std;

#include "keyPad.h"

int KeyPad::getInput() const
{
	//��ȡ�Ӽ������������
	int input;
	cout << "��Ӽ������룺" << "\n" << endl;
	cin >> input;
	return input;
}