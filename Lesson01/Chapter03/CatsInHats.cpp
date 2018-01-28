#include <iostream>
#include <time.h>
using namespace std;

void removeHat(char cat) {
	for(char c = 'A'; c < cat; ++c)
		cout << " ";
	if(cat <= 'Z') {
		cout << "cat " << cat << endl;
		removeHat(cat + 1); // Recursive Call
	}else
		cout << "VOOM!!" << endl;
}

int main() {
	removeHat('A');
}
