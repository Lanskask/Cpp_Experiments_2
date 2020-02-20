#include <iostream>

using namespace std;


struct Thing { bool has_access; };

int main(int argc, char const *argv[]) {
	Thing *secutiry_check;
	secutiry_check->has_access = false;
	delete secutiry_check;
	int *x = new int(42);
	if (secutiry_check->has_access) 
		cout << "Access Granted!" << endl;
	
	return 0;
}