#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n;
	cin >> n;
	n = n * 2;
	int leftSum=0;
	int rightSum=0;
	for (int i = 0; i < n/2; i++)
	{
		int num;
		cin >> num;
		leftSum += num;
	}
	for (int i = 0; i < n/2; i++)
	{
		int num;
		cin >> num;
		rightSum += num;
	}
	if (abs(leftSum-rightSum)==0){
		cout << "Yes,sum= " << leftSum  << endl;
	}
	else{
		cout << "No,diff= " << abs(leftSum - rightSum) << endl;
	}
}