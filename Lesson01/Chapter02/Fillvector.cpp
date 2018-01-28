#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
	vector<string> v;
	ifstream in("Fillvector.cpp");
	string line;
	while(getline(in, line)) {
		v.push_back(line);
		cout << line;
		cin.get();
	}
}
