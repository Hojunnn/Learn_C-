#include <iostream>

using namespace std;

bool isEqual(int a, int b) {
	bool result = (a == b);

	return result;
}


int main() {

	//bool b1 = true; // copy initialization
	//bool b2(false); // direct initilization
	//bool b3{ true }; //unifor initial
	//b3 = false;

	//cout << boolalpha;
	//cout << b3 << endl;
	//cout << b1 << endl;


	//cout << !true << endl;
	//cout << !false << endl;

	//cout << noboolalpha;
	//cout << (true && true) << endl;
	//cout << (false && true) << endl;
	//
	//cout << "" << endl;
	//
	//cout << (true || true) << endl;
	//cout << (false || true) << endl;
	//cout << (false || false) << endl;

	/*cout << boolalpha;
	cout << isEqual(1, 1) << endl;
	cout << isEqual(0, 3) << endl;*/

	bool b;

	cin >> b;
	cout << boolalpha;
	cout << "Your input : " << b << endl;

	//�Է°��� true��� ���ڿ��� �ְ� �Ǹ� false�� ����, ���� true�� �ƴ� 1�� �Է������ true�� ��ȯ��



	return 0;
}