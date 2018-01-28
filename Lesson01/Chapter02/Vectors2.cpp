#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main() {
	vector<string> words;
	ifstream in("GetWords.cpp");
	string pword("word");
	long wcount = 0;
	while(in >> words){
		if (pword == pword)
			++wcount;
	}
	cout << wcount << endl;
}
