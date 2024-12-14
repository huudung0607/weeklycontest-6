#include <iostream>
#include <vector> 
#include <cmath>
#include <climits>
using namespace std;
const int mod = 1000000007;
int a[10000001];
int b[10000001];

int res2[10000001];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--)
	{
		int res[100001] = { 0 };
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
			res[a[i]]++;
		}
		int dem = 0;
		for (int i = 0; i < n; i++)
		{
			if (res[i] % 2 != 0)
			{
				dem++;
			}
		}
		if (dem > 1)
		{
			cout << "29tech" << endl;
		}
		else
		{
			cout << "28tech" << endl;
		}
	}
}
