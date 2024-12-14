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
	F[1] = 0, F[2] = F[3] = 1;
	for (int i = 4; i <= 1000000; i++)
	{
		F[i] = ((F[i - 1] + F[i - 2]) % mod + F[i - 3]) % mod;
		F[i] %= mod;
	}
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		cout << F[n] << endl;
	}
}
