#include <iostream>
#include <tuple>

using namespace std;

int main()
{
    tuple<int, int> tup1;
	tup1 = make_tuple(1, 2);
	
	cout << get<0>(tup1) << " " << get<1>(tup1) << endl;
	
	cout << "For tuple 2" << endl;
	
	tuple<int, double, char> tup2 {3, 3.2, 'a'};
	
	cout << get<0>(tup2) << " " << get<1>(tup2) << " " << get<2>(tup2) << endl;
	return 0;
}
