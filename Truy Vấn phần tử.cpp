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
		int k;
		cin >> k;
		int dem = 0;
		int maxval = 0;
		for (int i = 0; i <= k; i++)
		{
			res[a[i]] = 1;
		}
		for (int i = 0; i <= k; i++)
		{
			if (res[a[i]] == 1)
			{
				dem++;
				res[a[i]] = 0;
			}
		}
		cout << dem << endl;
	}
	
}
