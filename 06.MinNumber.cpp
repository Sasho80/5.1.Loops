#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int min;
	cin>>min;
	for (int i = 1; i < n; i++)
	{
		int num;
		cin >> num;
		if (min>num) {
			min = num;
		}
	}
	cout << min << endl;
	return 0;
}
