#include<iostream>
using namespace std;

int main2()
{
	//����
	int a = -1;
	cout << "������ͱ���a��ֵ��" << endl;
	cin >> a;
	cout << "���ͱ���a=" << a << endl;

	//������
	float f = 3.14f;
	cout << "��������ͱ���f��ֵ��" << endl;
	cin >> f;
	cout << "�����ͱ���f=" << f << endl;

	//�ַ���
	//�ַ�����
	string str = "hello";
	cout << "����ַ��� str��ֵ" << endl;
	cin >> str;
	cout << "�ַ���str = " << str << endl;
	//��������
	bool flag = false;
	cout << "���flag��ֵ" << endl;
	cin >> flag; //��0����Ϊ1��0����ĸλ0
	cout << "flag =" << flag << endl;

	return 0;
}