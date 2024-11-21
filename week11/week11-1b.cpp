#include <iostream>
using namespace std;
int f(int n) // Step2
{
	int ans = 0;
	while (n > 0)
	{
		ans += n % 10;
		n = n / 10;
	}
	return ans;
}

int main()
{
	int n;
	while (cin >> n) //Step01: input
	{
		if (n == 0) break;

		n = f(f(f(n)));

		cout << n << endl;
	}
}
