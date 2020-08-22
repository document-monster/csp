#include<iostream>
#include<string>
using namespace std;

int main()
{
	string n;
	cin >> n;
	int i;
	int sum = 0;
	for (i = 0;i < (int)n.size();i++)
	{
		sum += (int)(n[i] - '0');
	}cout << sum << endl;
	return 0;
}