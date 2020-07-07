#include <iostream>  //#c언어의 include<stdio.h>
int main() {
	std::cout << "Hi" << std::endl
		<< "My name is "
		<< "우근" << std::endl;
	std::cout << "Hello, C++!!" << std::endl;
	//      std::cout << /* 출력할 것 */ << /* 출력할 것 */ << ... << /* 출력할 것 */;



	int birth = 28;
	std::cout << "내 생일은 6월 ㅁㅁ일 이에요~" << std::endl;
	int user_input;  // 사용자 입력

	while (1) {
		std::cout << "입력 : ";
		std::cin >> user_input;   //std::cin 은 사용자로부터 입력을 받을 때
		if (birth == user_input) {
			std::cout << "정답" << std::endl;
			break;
		}
		else {
			std::cout << "오답" << std::endl;
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
	cout << "저의 정보를 표시해줍니다" << endl;
	cout << "1. 이름 " << endl;
	cout << "2. 나이 " << endl;
	cout << "3. 성별 " << endl;
	cin >> user_input;

	switch (user_input) {
	case 1:
		cout << "김우근 " << endl;
		break;

	case 2:
		cout << "20살" << endl;
		break;

	case 3:
		cout << "여자" << endl;
		break;

	default:
		cout << "궁금한게 없군요~" << endl;
		break;
	}
	return 0;
}

*/