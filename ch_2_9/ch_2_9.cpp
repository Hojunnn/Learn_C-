#include <iostream>
#include "MY_CONSTANTS.h"
//#define PRICE_PER_ITEM 30
using namespace std;

//void printNumber(const int my_number) { //�Ű������� �ڿ��� �ʱ�ȭ �� �� �ֱ� ������ const�� ����Ͽ� ���ƹ���
//	
//	//my_number = 455; // �Ű������� ���� ���� �ٽ� �ʱ�ȭ�� �� ���� �ѵ�, �ٸ� ���α׷��Ӱ� ������ �� �ִ�
//	int n = my_number //������ �׳� ������ �����ؼ� ����ϴ� ����
//	
//	
//	//cout << my_number << endl;
//}




int main() {

	double radius;
	cin >> radius;
	
	double circumference = 2.0 * radius * constants::pi;
	



	//const int price_per_item = 30; // ��ũ�� ��뺸�� ������ ���������ָ鼭 ����ϴ°� �� ����
	//
	//int num_item = 123;

	//int price = num_item * price_per_item;

	/*constexpr int my_const(123);
	
	int number;

	cin >> number;

	const int special_number(number);*/


	/*printNumber(123);
	const double gravity{ 9.8 };*/ // const�� ��������ν� ���� ���� �����ع���, �ٸ������� �ٲ� ���� ����

	return 0;
}