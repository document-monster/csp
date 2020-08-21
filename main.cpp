#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	vector<int> a;
	vector<int> num;
	vector<int> count;
	cin >> n;
	int i;

	for (i = 0;i < n;i++)
	{
		int j;
		cin >> j;
		a.push_back(j);
	}

	sort(a.begin(), a.end());
	num.push_back(a[0]);
	count.push_back(1);
	int j = 0;
	for (i = 1;i < n;i++)
	{
		if (a[i] == a[i - 1])
		{
			count[j]++;
		}
		else
		{
			num.push_back(a[i]);
			j++;
			count.push_back(1);
		}
	}
	int k = 0;
	for (i = 1;i <= j;i++)
	{
		if (count[i] > count[k])
		{
			k = i;
		}
		else
		{
			if (count[i] == count[k])
			{
				if (num[i] < num[k])
				{
					k = i;
				}
			}
		}
	}
	cout << num[k] << endl;
	return 0;
}