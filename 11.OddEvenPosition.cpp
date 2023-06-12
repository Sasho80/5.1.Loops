#include <iostream>
using namespace std;
int main() {
	double n;
	cin >> n;
	double oddMin;
	double evenMin;
	double oddMax;
	double evenMax;
	double oddSum = 1;
	double evenSum = 1;
	if (n < 3) {
		if (n == 0) {
			oddSum = 0;
			evenSum = 0;
		}
		else if (n == 1) {
			cin >> oddMin;
			oddMax = oddSum = oddMin;
			evenMin = evenMax = evenSum = 0;
		}
		else if (n == 2) {
			cin >> oddMin;
			cin >> evenMin;
			oddMax = oddSum = oddMin;
			evenMax = evenSum = evenMin;
		}
	}
	else if (n == 3) {
		cin >> oddMin;
		cin >> evenMin;
		cin >> oddMax;
		double num = oddMax;
		oddSum = oddMin + oddMax;
		evenMax = evenSum = evenMin;
		if (oddMin > num) {
			oddMax = oddMin;
			oddMin = num;
		}
	}
	else if (n == 4) {
		cin >> oddMin;
		cin >> evenMin;
		cin >> oddMax;
		double oddNum = oddMax;
		cin >> evenMax;
		double evenNum = evenMax;
		oddSum = oddMin + oddMax;
		evenSum = evenMin + evenMax;
		if (oddMin > oddNum) {
			oddMax = oddMin;
			oddMin = oddNum;
		}
		if (evenMin > evenNum) {
			evenMax = evenMin;
			evenMin = evenNum;
		}
	}
	else {
		cin >> oddMin;
		cin >> evenMin;
		cin >> oddMax;
		cin >> evenMax;
		oddSum = oddMin + oddMax;
		evenSum = evenMin + evenMax;
		for (int i = 1; i <= n - 4; i++)
		{
			double num;
			cin >> num;
			if (i % 2 == 0) {
				if (evenMax < num) {
					evenMax = num;
				}
				evenSum += num;
			}
			else
			{
				if (oddMax < num) {
					oddMax = num;
				}
				oddSum += num;
			}
			if (i % 2 == 0) {
				if (evenMin > num) {
					evenMin = num;
				}
			}
			else {
				if (oddMin > num) {
					oddMin = num;
				}
			}
		}
	}
	if (oddSum == 0 && evenSum == 0) {
		cout << "oddSum= " << oddSum << endl;
		cout << "oddMin= " << "No" << endl;
		cout << "oddMax= " << "No" << endl;
		cout << "evenSum= " << evenSum << endl;
		cout << "evenMin= " << "No" << endl;
		cout << "evenMax= " << "No" << endl;
	}
	else if (oddSum == 0) {
		cout << "oddSum= " << oddSum << endl;
		cout << "oddMin= " << "No" << endl;
		cout << "oddMax= " << "No" << endl;
		cout << "evenSum= " << evenSum << endl;
		cout << "evenMin= " << evenMin << endl;
		cout << "evenMax= " << evenMax << endl;
	}
	else if (evenSum == 0) {
		cout << "oddSum= " << oddSum << endl;
		cout << "oddMin= " << oddMin << endl;
		cout << "oddMax= " << oddMax << endl;
		cout << "evenSum= " << evenSum << endl;
		cout << "evenMin= " << "No" << endl;
		cout << "evenMax= " << "No" << endl;
	}
	else {
		cout << "oddSum= " << oddSum << endl;
		cout << "oddMin= " << oddMin << endl;
		cout << "oddMax= " << oddMax << endl;
		cout << "evenSum= " << evenSum << endl;
		cout << "evenMin= " << evenMin << endl;
		cout << "evenMax= " << evenMax << endl;
	}
	return 0;
}
