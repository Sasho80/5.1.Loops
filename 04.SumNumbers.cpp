#include <iostream>
using namespace std;
int main() {
	int n;
	int sum=0;
	cin >> n;
	int num;
	for (int i = 0; i <n; i++)
	{
		cin >> num;
		sum += num;
	}
	cout << sum << endl;
	return 0;
}
