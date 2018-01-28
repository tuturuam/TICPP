#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main() {
	vector<float> v1;
	for(int i = 0; i < 25; i++) {
		v1.push_back(i);
	}
	cout << "Vector v1: ";
	for (int i = 0; i < v1.size(); i++) {
		cout << v1[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < v1.size(); i++) { // Squares the vector
		v1[i] = v1[i] * v1[i]; 
	}
	cout << "Square of Vector v1: ";
	for (int i = 0; i < v1.size(); i++) {
		cout << v1[i] << " ";
	}
	cout << endl;
}
