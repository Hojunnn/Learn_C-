#include <iostream>

using namespace std;

//const char* getName()
//{
//	return "JackJack";
//}
//const ����� return Ÿ�Կ��� �־��� �� ����


int main() {

	//�տ� const�� �پ�� ��ȣ�� ���ó�� ����� �� ����

	//char name [] = "Jack Jack";
	//const char *name = "Jack Jack"; // �� �ȵǳ�? �������� literal ������ ������
	//������ jackjack�� ��� �����̳Ĵ� �޸𸮴� �ƹ��� ������ ����
	//�����Ϳ� jack jack�̶�� literal�� ���� �� ����
	//�����ʹ� �޸��� �ּҸ� ����ų ���� �ֱ� ����
	//������ ��ȣ���� ����δ� char �տ� const �߰��ϸ鼭 ��밡��
	//const char *name2 = "Jack Jack";


	//cout << sizeof(*name) << endl;


	/*for(i = )*/
	// output -> Jack Jack
	//cout << name << endl; // char�տ� const�� ���̸� name�� �����͸� �׼��� �� �� �ֵ��� ������
	//cout << (uintptr_t)name << endl;
	//cout << (uintptr_t)name2 << endl;//�� �ּҰ��� �Ȱ��� -> �����Ϸ��� ������ �����ϱ� ���� �ּҰ� ���~
	//name �� name2�� ������ ���ݸ� �޶� �ٸ� �ּҰ� ���
	//cout << getName() << endl;

	//int int_arr[5] = { 1,2,3,4,5 };
	//char char_arr[] = "Hello, World!";
	//const char *name = "Jack Jack";

	//cout << int_arr << endl; // �ּҰ� ���
	//cout << char_arr << endl; //���ڿ� ���
	//cout << name << endl; //���ڿ� ���
	//cout���� ���ڿ��� Ư���ϰ� ó���Ѵ�.

	char c = 'Q';
	cout << &c << endl; // output -> after q there's lots of strange characters
	// add (uintptr_t), if you want to show address
	return 0;
}