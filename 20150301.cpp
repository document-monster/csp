#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int line, row;
	cin >> line >> row;
	vector<vector<int>> num;
	int i,j;
	for (i = 0;i < line;i++)
	{
		vector<int> b;
		
		for (j = 0;j < row;j++)
		{
			int k;
			cin >> k;
			b.push_back(k);
		}
		num.push_back(b);
	}

	vector<vector<int>> num2;
	for (i = row-1;i >=0;i--)
	{
		vector<int> c;
		for (j = 0;j < line;j++)
		{
			c.push_back(num[j][i]);
		}
		num2.push_back(c);
	}

	for (i = 0;i < row;i++)
	{
		for (j = 0;j < line;j++)
		{
			cout << num2[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}