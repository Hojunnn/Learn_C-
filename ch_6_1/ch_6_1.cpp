#include <iostream>

using namespace std;

//struct Rectangle
//{
//	int length;
//	int width;
//};

//enum StudentsName
//{
//	JACKJACK, // = 0
//	DASH,     // = 1
//	VIOLET,   // = 2
//};

void doSomething(int students_scores[20]) //array�� �Լ��� �Ķ���ͷ� �־��� �� �ִ�
{// ������ ���ϸ� �Ű������� ���� ���� �迭�� �ƴ�
	//�����Ϸ��� ���� �Ű������� �����ͷ� ó����
	//�迭�� ��� ���Ҹ� �����ؼ� �������� ���� �ƴ϶� �迭�� ù���� �ּ� ���� ����
	cout << &students_scores << endl; //students_scores�� �ּҰ��� �����ϴ� �ٸ� �����̱� ������ �ٸ� �ּҰ���
	cout << &students_scores[0] << endl; 
	//�� ������ ������ ����Ǿ� �ִ� ���� ����� �� ù��° index�� �ּҸ� ��������ν� ���ϴ� �� ���

	cout << students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;
	cout << students_scores[3] << endl;

	cout << sizeof(students_scores) << endl;
	//array�� �Ѿ�� ���� �ƴ϶� �����ͷ� �Ѿ��
	//x86������ int ������ ������ 4byte
	//x64������ int ������ ������ 8byte
}

int main() {

	//int one_student_score; // 1variable
	//int student_scores[5]; // 5 int

	/*cout << sizeof(one_student_score) << endl;
	cout << sizeof(student_scores) << endl;*/

	//cout << sizeof(Rectangle) << endl;

	//Rectangle rec_arr[10];

	//rec_arr[0].length = 1;
	//rec_arr[1].width = 2;


	//cout << sizeof(rec_arr) << endl;

	/*int arr[5]{ 1,2,3,4,5 };
	cout << arr[JACKJACK] << endl;
	cout << arr[DASH] << endl;
	cout << arr[VIOLET] << endl;*/

	const int num_students = 20;

	int students_scores[num_students] = { 1,2,3,4,5 };
	//�迭 ��ü�� �ּҷ� ���Ǳ� ������ �ּҿ����ڸ� ������ �ʾƵ� �ּҷ� ����� �ȴ�
	cout << students_scores << endl;
	cout << students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << students_scores[2] << endl;
	cout << students_scores[3] << endl;
	cout << sizeof(students_scores) << endl;

	doSomething(students_scores);
	// x64������ (long long)students_scores�� ����, x86, x64 ��� �� �����ϴ� ��Ƽ�÷��� �ڵ忡���� 
	// (size_t)students_scores�� ����
	return 0;
}