#include <iostream>
#include <vector>

using namespace std;

vector<int> occur;
vector <int> times;

int input;
int highest = 0;
int twohighest = 0;

int main() {
	int machines;
	cin >> machines;//first input
	cout << machines;
	for (int i = 0; i < machines; i++) {
		input = 0;
		cin >> input;//scan each input
		for (int j = 0; j < machines; j++) {
			occur.push_back(input);
		}
	}
	for (int i = 0; i < occur.size(); i++) {
		
	}
	for (int i = 0; i < occur.size(); i++) {//cycle through number vector
		if (times[i] >= highest) {//if it comes up more times than a previous one do
			highest = occur[i];//change it
		}
		else if (times[i] >= twohighest) {//if it is the second most
			twohighest = occur[i];//change it
		}
	}
	cout << highest << twohighest;

		return 0;
}