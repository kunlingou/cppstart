#include<iostream>
using namespace std;

int main2()
{
	//整型
	int a = -1;
	cout << "请给整型变量a赋值：" << endl;
	cin >> a;
	cout << "整型变量a=" << a << endl;

	//浮点型
	float f = 3.14f;
	cout << "请给浮点型变量f赋值：" << endl;
	cin >> f;
	cout << "浮点型变量f=" << f << endl;

	//字符型
	//字符串型
	string str = "hello";
	cout << "请给字符串 str赋值" << endl;
	cin >> str;
	cout << "字符串str = " << str << endl;
	//布尔类型
	bool flag = false;
	cout << "请给flag赋值" << endl;
	cin >> flag; //非0数字为1，0或字母位0
	cout << "flag =" << flag << endl;

	return 0;
}