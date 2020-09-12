#include <iostream>
#include <cstddef>
using namespace std;

void doSomething(double *ptr)
{
	cout << "address of pointer variable in doSomething()" << &ptr << endl;
	//main�� ptr�� �ٸ� �޸𸮸� ��
	//why? paramter�� �޾Ƽ� ������ �޸� ���簡 �Ǵ� ����

	if (ptr != nullptr) {
		cout << *ptr << endl;
	}
	else {
		cout << "Null ptr, do nothing" << endl;
	}
}


int main() {

	//double *ptr = 0; //  c-style : input 0 or null;
	double *ptr = nullptr; // modern c++;

	doSomething(ptr);
	doSomething(nullptr);

	double d = 123.4;

	doSomething(&d);

	ptr = &d;

	doSomething(ptr);

	//nullptr_t nptr; //just input null ptr

	cout << "address of pointer variable in main()" << &ptr << endl;

	return 0;
}