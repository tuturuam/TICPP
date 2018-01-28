#include <iostream>
#include <string>

using namespace std;

int main() {
	string s1, s2;
	string s3 = "This is a string";
	string s4("This is also a string");
	s2 = "I am";
	s1 = s3 + " " + s4;
	s1 += "Hi there";
	cout << s1 + s2 + "!" << endl;
}
