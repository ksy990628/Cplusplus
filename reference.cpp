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
	int& another_a = a;  //�����ڸ� ���ϴ� ��� : ����Ű���� �ϴ� Ÿ�� �ڿ� & 
	//another_a �� a �� ������.��, another_a �� a �� �Ǵٸ� �̸� �̶�� �����Ϸ����� �˷��ִ� ��.
	//���� another_a �� ��� �۾��� �����ϵ� �̴� ��ǻ� a �� �� �۾��� �ϴ� �Ͱ� ��������

	another_a = 5;
	std::cout << "a : " << a << std::endl;
	std::cout << "another_a : " << another_a << std::endl;
    //a: 5
	//another_a : 5

	//���۷����� �ݵ�� ó���� ������ ������ �� ������ �����ؾ� �մϴ�.
	//���۷����� �� �� ������ �Ǹ� ����� �ٸ� ���� ������ �� �� ����.
	//int b = 3;
	//another_a = b; // a=b(b�� ���� a�� ����)

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
	//�迭 reference
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