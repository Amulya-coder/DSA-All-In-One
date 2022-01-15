#include <bits/stdc++.h>

using namespace std;

vector<string> v;

void helper(string str, int n, int i)
{
	if (i == n)
	{
		v.push_back(str);
		return;
	}

	int s1 = str;
	s1.push_back('0');
	helper(s1, n, i + 1);

	if (i > 0 and str[i - 1] != '1')
	{
		str.push_back('1');
		helper(str, n, i + 1);
	}

	else
	{
		str.push_back('1');
		helper(str, n, i + 1);
	}

	return;
}

vector<string> BinaryString(int n)
{

	v.clear();
	string str;
	helper(str, n, 0);

	return v;
}

int main()
{
	vector<string> res = BinaryString(3);

	for (int i = 0; i < 3; i++)
	{

		cout << res[i] << " ";
	}

	return 0;
}
