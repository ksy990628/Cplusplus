#include <iostream>  //#c����� include<stdio.h>
int main() {
	std::cout << "Hi" << std::endl
		<< "My name is "
		<< "���" << std::endl;
	std::cout << "Hello, C++!!" << std::endl;
	//      std::cout << /* ����� �� */ << /* ����� �� */ << ... << /* ����� �� */;



	int birth = 28;
	std::cout << "�� ������ 6�� ������ �̿���~" << std::endl;
	int user_input;  // ����� �Է�

	while (1) {
		std::cout << "�Է� : ";
		std::cin >> user_input;   //std::cin �� ����ڷκ��� �Է��� ���� ��
		if (birth == user_input) {
			std::cout << "����" << std::endl;
			break;
		}
		else {
			std::cout << "����" << std::endl;
		}
	}
	return 0;
}


/*
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main() {
	int user_input;
	cout << "���� ������ ǥ�����ݴϴ�" << endl;
	cout << "1. �̸� " << endl;
	cout << "2. ���� " << endl;
	cout << "3. ���� " << endl;
	cin >> user_input;

	switch (user_input) {
	case 1:
		cout << "���� " << endl;
		break;

	case 2:
		cout << "20��" << endl;
		break;

	case 3:
		cout << "����" << endl;
		break;

	default:
		cout << "�ñ��Ѱ� ������~" << endl;
		break;
	}
	return 0;
}

*/