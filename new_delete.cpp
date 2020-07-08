#include <iostream>

typedef struct Animal {
	char name[30];  // �̸�
	int age;        // ����

	int health;  // ü��
	int food;    // ��θ� ����
	int clean;   // ������ ����
} Animal;

void create_animal(Animal *animal) {
	std::cout << "������ �̸�? ";
	std::cin >> animal->name;

	std::cout << "������ ����? ";
	std::cin >> animal->age;

	animal->health = 100;
	animal->food = 100;
	animal->clean = 100;
}
void play(Animal *animal) {
	animal->health += 10;
	animal->food -= 20;
	animal->clean -= 30;
}
void one_day_pass(Animal *animal) {
	// �Ϸ簡 ������
	animal->health -= 10;
	animal->food -= 30;
	animal->clean -= 20;
}
void show_stat(Animal *animal) {
	std::cout << animal->name << "�� ����" << std::endl;
	std::cout << "ü��    : " << animal->health << std::endl;
	std::cout << "��θ� : " << animal->food << std::endl;
	std::cout << "û��    : " << animal->clean << std::endl;
}


int main() {
	int* p = new int;  //int ũ���� ������ �Ҵ� -> �� �ּҰ��� p�� (malloc�� ���)
	*p = 10;
	std::cout << *p << std::endl; //10
	delete p; //�Ҵ� ���� ����



	// new �� �迭 �Ҵ��ϱ� 
	int arr_size;
	std::cout << "array size : ";
	std::cin >> arr_size;
	int *list = new int[arr_size];
	for (int i = 0; i < arr_size; i++) {
			std::cin >> list[i];
		}
		for (int i = 0; i < arr_size; i++) {
			std::cout << i << "th element of list : " << list[i] << std::endl;
		}
		delete[] list;





	Animal *alist[10];
	int animal_num = 0;

	for (;;) {
		std::cout << "1. ���� �߰�" << std::endl;
		std::cout << "2. �����̶� ��� " << std::endl;
		std::cout << "3. ���� ����" << std::endl;

	    int input;
		std::cin >> input;

		switch (input) {
			int play_with;
			case 1:
				alist[animal_num] = new Animal;
				create_animal(alist[animal_num]);

				animal_num++;
				break;
			case 2:
				std::cout << "������ ���? (���� ��ȣ �Է�) : ";
				std::cin >> play_with;

				if (play_with < animal_num) play(alist[play_with]);

				break;

			case 3:
				std::cout << "������ ����? (���� ��ȣ �Է�) : ";
				std::cin >> play_with;
				if (play_with < animal_num) show_stat(alist[play_with]);
				break;
			}

			for (int i = 0; i != animal_num; i++) {
				one_day_pass(alist[i]);
			}
		}
		for (int i = 0; i != animal_num; i++) {
			delete alist[i];
		}
	return 0;
}