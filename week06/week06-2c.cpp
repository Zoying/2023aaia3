#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector <int> a; //step03 vector array
	int now;
	while (cin >> now) //step01 input
	{
		a.push_back(now); //step03 vector array
		//cout << now << "\n"; //step02 output

		sort(a.begin(), a.end()); //step05 sort
		int N = a.size();
		if (N % 2 == 1) cout << a[N / 2] << "\n"; //step06
		else cout << (a[N / 2 - 1] + a[N / 2]) / 2 << "\n"; //step06
		//for (int b : a) cout << b <<' ';
		//cout << "\n"; //step04 prunt array
	}
}
