#include <iostream>
using namespace std;

char cfunc(int i) {
	if(i == 0)
		return 'a';
	if(i == 1)
		return 'b';
	if(i == 5)
		return 'c';
}

int main() {
	cout << "Type an integer: ";
	int val;
	cin >> val;
	cout << cfunc(val) << endl;
}
