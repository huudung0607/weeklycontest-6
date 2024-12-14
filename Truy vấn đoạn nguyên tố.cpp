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
int prime(int n)
{
	if (n < 2)
	{
		return 0;
	}
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
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
	int q;
	cin >> q;
	while (q--)
	{
		int l, r;
		cin >> l >> r;
		int dem = 0;
		for (int i = l; i <= r; i++)
		{
			if (prime(a[i]))
			{
				dem++;
			}
		}
		cout << dem << endl;
	}
}
