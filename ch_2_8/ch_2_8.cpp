#include <iostream>

using namespace std;


int main() {

	//const float pi = 3.14; // const�� ���ؼ� pi ���� ������ �� ����

	/*float pi = 3.14f;
	int i = -12321u;*/ // u�� unsigned�� ����

	//Decimal : 0 1 2 3 4 5 6 7 8 9 10
	//Octal : 0 1 2 3 4 5 6 7 10 11 12 13
	//Hexa : 0 1 2 3 4 5 6 7 8 9 A B C D E F

	/*int x = 012;*/ // ���� 0�� 8������� �ǹ�
	/*int x = 0xF;*/
	//int x = 0b1010; //2���� ǥ��
	const int price_per_item = 10;
	int num_items = 123;
	int price = num_items * price_per_item; //����(magic number)�� �ϵ��ڵ��ϴ� ����� ���� ����
	//cout << x << endl;


	return 0;
}