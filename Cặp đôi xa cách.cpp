#include <iostream>
#include <vector> 
#include <cmath>
#include <climits>
using namespace std;
const int mod = 1e9 + 7;
int a[1000001];
int res[1000001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int maxval = INT_MIN;
	bool found = false;
	for (int i = 0; i < n; i++)
	{
		int minusmax = 0;
		for (int j = i; j < n; j++)
		{
			minusmax = j - i;
			if (a[i] == a[j] && i < j && minusmax > maxval)
			{
				maxval = minusmax;
				found = true;
			}
		}
	}
	if (!found)
	{
		cout << "28tech" << endl;
	}
	else
	{
		cout << maxval << endl;
	}
}
