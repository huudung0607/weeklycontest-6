#include <iostream>
#include <vector> 
#include <cmath>
#include <climits>
using namespace std;
const int mod = 1000000007;
int a[1000001];
int b[1000001];
int res[1000001];
int res2[1000001];
int F[10000001];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
	}
	for (int i = 0; i < n; i++)
	{
		bool flag = false;
		for (int j = 0; j < m; j++)
		{
			if (a[i] == b[j])
			{
				flag = true;
				break;
			}
		}
		if (flag)
		{
			cout << 1 << " ";
		}
		else
		{
			cout << 0 << " ";
		}
	}
}
