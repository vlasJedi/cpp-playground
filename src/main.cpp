// iostream add supports for std
#include <iostream>
// specifically import what we need, to not use using namespace std;
using std::cout;
using std::cin;
using std::endl;
int main() {
	char val[8];
	int inputVal;
	cout << "Input something inclusive to 8 chars, I will return it" << endl;
	cin >> val;
	cout << "Your input is: " << val;
	return 0;
}
