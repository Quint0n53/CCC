#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>

using namespace std;

int grid[4] = { 1,2,3,4 };
string input;

void hori() {
	swap(grid[0], grid[2]);
	swap(grid[1], grid[3]);
}
void vert() {
	swap(grid[0], grid[1]);
	swap(grid[2], grid[3]);
}

int main() {
	cin >> input;
	for (int i = 0; i < input.size(); i++) {
		if (input[i] == 'H') {
			hori();
		}
		else if (input[i] == 'V') {
			vert();
		}
	}
	cout << grid[0]  << " " << grid[1] << endl << grid[2] << " " << grid[3] << endl;
	system("pause");
	return 0;
}