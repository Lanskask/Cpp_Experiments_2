#include <iostream>

using namespace std;


void good() {
	cout << "I'm GOOD" << endl;
}

void bad() {
	cout << "I'm BAD" << endl;
}

typedef void (*F)(void);
struct Object {
	Object(F f) : f_(f) {}
	F f_;
};

int main(int argc, char const *argv[])
{
	long a, b;
	long *x = new long[1];
	Object *o = new Object(good);
	cin >> a >> b;
	x[a] = b;
	o->f_();
	return 0;
}