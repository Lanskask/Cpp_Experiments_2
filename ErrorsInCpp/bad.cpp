#include <iostream>

using namespace std;

void bad() {
	cout << "I'm bad" << endl;
}

int main() {
	long a,b, ar[10];
	cin >> a >> b;
	ar[a] = b;
}

// nm ./a.out | grep bad
// 13 4196196 // to get segmentation fault