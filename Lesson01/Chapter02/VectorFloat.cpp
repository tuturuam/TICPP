#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stdlib.h> //srand and rand
#include <time.h> //time
using namespace std;

int main() {
	vector<float> fnum, jnum, knum;
	float x;
	for (int j = 0; j < 25; j++) {
		srand(time(NULL)); //calls random number
		x = (float) (rand() % 100000 + 1) / 100000; //random float number
	}
	for(float i = 0; i < 25; i++) {
		fnum.push_back(i + x); //adds elements to vector fnum
		jnum.push_back(i * x); //adds elements to vector jnum
	}
	for(float i = 0; i < fnum.size(); i++) {
		knum.push_back(fnum[i] + jnum[i]); //adds elements from fnum and jnum to vector knum
	}
	for(float i = 0; i < fnum.size(); i++) {
		cout << fnum[i] << " + " << jnum[i] << " = " << knum[i] << endl;
	}
	cout << endl;

}
