#include <iostream>
#include <limits>


using namespace std;

int main() {

	//char c1(65);
	//char c2('A'); // ���� �ϳ��� ǥ���� ���� '', ���ڿ��� ǥ���Ҷ��� ""

	//cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;

	////c ��Ÿ�� ĳ����
	//cout << (char)65 << endl;
	//cout << (int)'A' << endl;

	////c++ ��Ÿ�� ĳ����
	//cout << char(65) << endl;
	//cout << int('A') << endl;

	//// c++ static casting - �������� �� ������
	//cout << static_cast<char>(65) << endl;
	//cout << static_cast<int>('A') << endl;


	//char ch(97);
	//cout << ch << endl;
	//cout << static_cast<int>(ch) << endl;
	//cout << ch << endl;
	
	//char c1(65);

	//cin >> c1;
	//cout << c1 << " " << static_cast<int>(c1) << endl;
	//
	////string operator�� �ѹ��� ������ ���� �ѹ��� ó�� ���� ��� buffer�� �����Ѵ�
	//cin >> c1;
	//cout << c1 << " " << static_cast<int>(c1) << endl;

	//cin >> c1;
	//cout << c1 << " " << static_cast<int>(c1) << endl;

	//cin >> c1;
	//cout << c1 << " " << static_cast<int>(c1) << endl;

	char c1(65);

	/*cout << sizeof(unsigned char) << endl;
	cout << (int)numeric_limits<unsigned char>::max() << endl;
	cout << (int)numeric_limits<unsigned char>::lowest() << endl;*/

	cout << "This is first line \nsecond line \n";
	cout << "This is first line" << endl;
	cout << "second line";

	wchar_t c;// windows ���α׷��ֿ��� ��ĩ�Ÿ�
	char32_t c3; // 

	// \t : tap
	// \a : sound
	//endl : cout buffer�� �ִ� ��� ������ ����ض� & �ٹٲ�?

	// std::flush; -> buffer�� �ִ� ��� ���� ���
	return 0;
}