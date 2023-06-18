#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int n;
	cin >>n;
	int j=0;
	int i = 1;
	int sum = 0;
	int diff = 0;
	int previousSum = 0;
	int previousDiff = 0;
	int maxdiff = 0;
	if (n==1)
	{
		n = 2 * n;
		for (; i <=n / 2; i++)
		{
			sum = 0;
			for (; j < i + 1;)
			{
				int num;
				cin >> num;
				sum += num;
				diff = abs(diff - num);
				j++;
				if (j == i + 1) {
					previousSum = sum;
				}
			}
		}
	}
	else if(n>=2){
		n = 2 * n;
		for (i=1; i<=n / 2; i++)
		{
			sum = 0; diff = 0;
			for (j = 1; j <=2;j++)
			{
				int num;
				cin >> num;
				sum += num;
				diff = diff - num;
				if (j == 2) {
					if (i == 1) {
						previousDiff = diff;
						previousSum = sum;
					}
					else if ((i > 1) && (previousSum == sum)) {
						previousSum = sum;
					}
					else if ((maxdiff) < abs(previousDiff - diff)) {
						maxdiff = abs(previousDiff - diff);
						previousDiff = diff;
					}
					else {
						previousDiff = diff;
					}
				}
			}
		}
	}
	if (previousSum==sum){
		cout << "Yes,value=" << sum << endl;
	}
	else{
		cout << "No,maxdiff=" << maxdiff<< endl;
	}
	return 0;
}
