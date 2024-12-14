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
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int dem = 0;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (abs(a[i] - a[j]) == k)
			{
				dem++;
			}
		}
	}
	cout << dem << endl;
}
