#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int max = 0;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		if (max < num) {
			if (max < num)
			{
				sum += max;
			}
			max = num;
		}
		else {
			sum += num;
		}
	}
		if (max==sum)
		{
			cout << "Yes Sum= " << max << endl;
		}
		else {
			cout << "No Diff= " << abs(max - sum) << endl;
		}
	return 0;
}
