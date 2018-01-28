#include <string>
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main() {
	vector<string> v;
	ifstream in("GetWords.cpp");
	string vs;
	while(in >> vs) 
		v.push_back(vs);
	for(int i = 1; i < v.size() + 1; i++)
		cout << i << " words" << endl;
}
