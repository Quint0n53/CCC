#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int one;
	int two;
	int three;
	int place;
	int broken = 0;
	bool found = false;
	string input;
	string studentA;
	vector <vector <string>> musts;
	vector <vector <string>> cants;
	vector <vector <string>> groups;
	vector <string> loader;
	cin >> one;

	for (int i = 0; i < one; i++) {
		cin >> input;
		loader.push_back(input);
		cin >> input;
		loader.push_back(input);
		musts.push_back(loader);
		loader.erase(loader.begin(), loader.begin() + 2);
	}
	cin >> two;
	for (int i = 0; i < two; i++) {
		cin >> input;
		loader.push_back(input);
		cin >> input;
		loader.push_back(input);
		cants.push_back(loader);
		loader.erase(loader.begin(), loader.begin() + 2);
	}
	cin >> three;
	for (int i = 0; i < three; i++) {
		cin >> input;
		loader.push_back(input);
		cin >> input;
		loader.push_back(input);
		cin >> input;
		loader.push_back(input);
		groups.push_back(loader);
		loader.erase(loader.begin(), loader.begin() + 3);
	}
	for (int j = 0; j < groups.size(); j++) {
		for (int i = 0; i < musts.size(); i++) {
			if (musts[i][0] == groups[j][0] || musts[i][0] == groups[j][1] || musts[i][0] == groups[j][2]) {
				if (musts[i][1] != groups[j][0] && musts[i][1] != groups[j][1] && musts[i][1] != groups[j][2]) {
					broken++;
				}
			}
		}
		for (int i = 0; i < cants.size(); i++) {
			if (cants[i][0] == groups[j][0] || cants[i][0] == groups[j][1] || cants[i][0] == groups[j][2]) {
				if (cants[i][1] == groups[j][0] || cants[i][1] == groups[j][1] || cants[i][1] == groups[j][2]) {
					broken++;
				}
			}
		}
	}
	cout << broken;
	return 0;	
}
