#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> num;
	int i;
	for (i = 0;i < n;i++)
	{
		int j;
		cin >> j;
		num.push_back(j);
	}

	vector<int> count1(n,0);
	vector<int> count2(n,0);
	vector<int> num2;

	for (i = 0;i < n;i++)
	{
		int j = num[i];
		count1[j-1]++;
		count2[i] = count1[j - 1];
	}

	for (i = 0;i < n;i++)
	{
		cout << count2[i] << ' ';
	}
	return 0;
}