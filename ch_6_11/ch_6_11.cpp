#include <iostream>

using namespace std;

int main()
{

	//int array[1000000000];

	//��ǻ�Ϳ��� 4byte�� �޸� ���� �Ҵ��ش޶� -> �������� �Ҵ��ϴ� �޸𸮴� stack�� ��
	//stack�� ���� -> heap�� ũ�⶧���� �����Ҵ��� �� ����ϴ� ���� �ʼ���

	int var;  
	new int;
	
	/*int *ptr = new int{ 7 };*/
	// �޸𸮸� ����� �� ���� �� �޸𸮰� �׾������ ���α׷��� ¥�� ��찡 �հ�
	//���α׷��� ����ִٰ� �ٸ� ���α׷��� �޸𸮸� �� �� ������ ��ٷȴٰ� �ٽ� �޸𸮸� �Ҵ�޴� �ó����� ����
	//-> new�� error�� ����Ű���� �����ؾ��� ==> std :: nothrow : ������ �߻���Ű�� ����(����ó��)
	//*ptr = 7;

	//cout << ptr << endl;
	//cout << *ptr << endl;

	//delete ptr
	////������ �� : delete ptr -> ���� �߻�

	//
	//cout <<  "after delete" << endl;
	//if (ptr != nullptr)
	//{
	//	cout << ptr << endl;
	//	cout << *ptr << endl;
	//}
	//else
	//{
	//	cout << "Could not allocat memory" << endl;
	//}
	//delete ptr;
	////case 1. �ּ��� ���� �����ϰ� pointer dereferencing�� ���ؼ� ����� ���� �̻��� ���� ��µȴ�
	////case 2. visual studio�� ������� ���� pointer�� delete�� �� 'û��'�� ����.
	////visual studio�� �����Ϸ��� �ǵ������� "automated pointer snitization when deleting C++ object"�� ��
	//// �����Ϸ� �ɼǿ��� ���⵵ ����

	/*int *ptr = new (std::nothrow) int{ 7 };
	int *ptr2 = ptr;

	delete ptr;
	ptr = nullptr;*/
	
	// ptr2 = nullptr;
	// *ptr2

	//memory leak

	//�޸𸮸� ��� �ް� ������ ����

	while (true) {
		int *ptr = new int;
		cout << ptr << endl;

		delete ptr;
	}

	//memory leak Ȯ�� ���
	//�Ҵ�޴� �޸𸮰� Ŭ ��� : Task manager(�۾� ������)-> CPu ��뷮�� pumping �� �ȴ�. 
	//-> memory leak �߻�
	//����� -::> ���� ���� ���� Ȯ��
	return 0;
}