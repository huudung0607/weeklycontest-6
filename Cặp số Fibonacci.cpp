#include <iostream>
#include <vector> 
#include <cmath>
#include <climits>
using namespace std;
const int mod = 1e9 + 7;
int a[1000001];
int res[1000001];
long long fibo(int n)
{
	if (n == 0 || n == 1)
	{
		return 1;
	}
	long long F[100];
	F[0] = 0, F[1] = 1;
	for (int i = 2; i <= 92; i++)
	{
		F[i] = F[i - 1] + F[i - 2];
	}
	for (int i = 2; i <= 92; i++)
	{
		if (n == F[i])
		{
			return 1;
		}
	}
	return 0;
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
	int dem = 0;
	for (int i = 0; i < n - 1; i++)
	{
		int sum = 0;
		for (int j = i + 1; j < n; j++)
		{
			sum = a[i] + a[j];
			if (fibo(sum))
			{
				dem++;
			}
		}
	}
	cout << dem << endl;
}
