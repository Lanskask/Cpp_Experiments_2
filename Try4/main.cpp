#include "foo.h"
#include "Box.cpp"
#include <iostream>

int main(int argc, char const *argv[])
{
	hello_world();

	Box box1;

	box1.height = 2;
	box1.length = 2;
	box1.width = 2;


	double volume = 0.0;
	volume = box1.height * box1.length * box1.width;

	std::cout << "Volume: " << volume << std::endl;

	return 0;
}