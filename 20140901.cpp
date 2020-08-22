#include<iostream>
#include<vector>
#include<algorithm>
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
	sort(num.begin(), num.end());

	int count = 0;
	for (i = 1;i < n;i++)
	{
		if (num[i] - num[i - 1] == 1)
		{
			count++;
		}
	}
	cout << count << endl;
	return 0;
}