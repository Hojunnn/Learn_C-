#include <iostream>

using namespace std;

////void printArray(int array[]) ���� int array[]�� int * array�� ����
//void printArray(int * array)
//{
//	cout << sizeof(array) << endl; // output 4 
//	//why?
//
//	//input�� �迭�� ���·� �־������� ���������δ� �׳� ������!
//	cout << *array << endl; // output : 9 -> array�� ù ��° ���� 9�� ���
//
//	*array = 100;
//
//}

struct MyStruct
{
	int array[5] = { 9,7,3,4,5 };

};


void doSomething(MyStruct *ms)
{
	cout << sizeof((*ms).array) << endl;
}


int main()
{

	//int array[5] = { 9,7,3,4,5 };

	//cout << sizeof(array) << endl;

	//cout << array[0] << " " << array[1] << endl;
	//cout << array << endl;
	//cout << &array[0] << endl;
	////array�� �迭�� �ƴ϶� �����ͷλ��

	//cout << *array << endl;

	//int *ptr = array;

	//cout << sizeof(ptr) << endl;
	//cout << ptr << endl; // output : address
	//cout << *ptr << endl; //output : ù���� ����

	//printArray(array);

	/*char name[] = "jackjack";
	cout << *name << endl;*/

	//cout << array[0] << " " << *array << endl;

	//������ ����//
	//cout << *ptr << " " << *(ptr + 1) << endl;

	MyStruct ms;
	cout << ms.array[0] << endl;

	cout << sizeof(ms.array) << endl;

	doSomething(&ms);


	//array�� ����ü�� class�ȿ� ������� ���� array ��ü�� ��
	//�׳� ����� �迭�� �Ű����� �����ͷ� ������ �����ͷ� �޾Ƶ鿩�� �ٸ� ũ�Ⱑ ������ �ȴ�.
	return 0;
}