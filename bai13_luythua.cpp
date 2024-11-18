#include<iostream>
using namespace std;
int main()
{
	cout << "luy thua\n" << endl;
	int so, luythua = 1, b = 4;
	cin >> so;
	for (int i = 0; i < 4; i++)
	{
		luythua *= so;
	}
	cout << luythua * so;
	return 0;
}