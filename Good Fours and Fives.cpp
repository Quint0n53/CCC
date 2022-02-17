#include <iostream>

using namespace std;


int main() {
	int input;
	int ways = 0;
	int j;
	int i;
	int total;
	int fours;
	cin >> input;
	for (i = 0; i < (input / 5 + 1); i++) {
		total = (5 * i);
		if ((input - total) % 4 == 0) {
			ways++;
		}
		else { continue; }
	}
	cout << ways;
	return 0;
}
