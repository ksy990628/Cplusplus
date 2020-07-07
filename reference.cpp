#include <iostream>  

int change_val(int *p) {
	*p = 3;
	return 0;
}

int main() {
	int number = 5;
	std::cout << number << std::endl; // 5
	change_val(&number);
	std::cout << number << std::endl; // 3


	int a = 3;
	int& another_a = a;  //참조자를 정하는 방법 : 가리키고자 하는 타입 뒤에 & 
	//another_a 는 a 의 참조자.즉, another_a 는 a 의 또다른 이름 이라고 컴파일러에게 알려주는 것.
	//따라서 another_a 에 어떠한 작업을 수행하든 이는 사실상 a 에 그 작업을 하는 것과 마찬가지

	another_a = 5;
	std::cout << "a : " << a << std::endl;
	std::cout << "another_a : " << another_a << std::endl;
    //a: 5
	//another_a : 5

	//레퍼런스는 반드시 처음에 누구의 별명이 될 것인지 지정해야 합니다.
	//레퍼런스가 한 번 별명이 되면 절대로 다른 이의 별명이 될 수 없다.
	//int b = 3;
	//another_a = b; // a=b(b의 값을 a에 대입)

	std::cout <<  std::endl;
	std::cout <<  std::endl;

	int x;
	int& y = x;
	int& z = y;

	x = 1;
	std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;

	y = 2;
	std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;

	z = 3;
	std::cout << "x : " << x << " y : " << y << " z : " << z << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;
	//배열 reference
	int arr[3] = { 1, 2, 3 };
	int(&ref)[3] = arr;

	ref[0] = 2;
	ref[1] = 3;
	ref[2] = 1;

	std::cout << arr[0] << arr[1] << arr[2] << std::endl;

}


/*
int change_val(int &p) {
	p = 3;

	return 0;
}
int main() {
	int number = 5;

	std::cout << number << std::endl;
	change_val(number);
	std::cout << number << std::endl;
}
*/