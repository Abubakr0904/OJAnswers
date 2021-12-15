#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t, n, a, b, c, d;
	cin >> t;
	while(t)
	{
		ll count = 0;
		cin >> n >> a >> b >> c >> d;
		ll arr[n];
		for(int i = 1; i <= n; i++)
		{
			arr[i-1] = i;
		}
		for(int i = 0; i < n; i++)
		{
			if(arr[i] % a != 0 && arr[i] % b != 0 && arr[i] % c != 0 && arr[i] % d != 0)
			{
				count++;
			}
		}
		printf("%lld\n", count);
		t--;
	}
}