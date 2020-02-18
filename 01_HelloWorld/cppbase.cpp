#include <iostream>

using namespace std;

#include <ctime>

int main1()
{
	cout << "==========base start==========" << endl;

	cout << "1" << endl;

	goto PA;

	cout << "2" << endl;

PA:

	cout << "3" << endl;

	cout << "==========base end==========" << endl;

	system("pause");

	return 0;
}