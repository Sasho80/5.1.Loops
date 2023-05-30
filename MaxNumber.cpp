#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>> n;
	int max;
	cin >> max;
	int num;
	for (int i = 1; i < n; i++)
	{
		cin >> num;
		if (max<num)
		{
			max = num;
		}
	}
	cout << max << endl;
return 0;
}