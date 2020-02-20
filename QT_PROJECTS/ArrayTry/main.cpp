#include <QCoreApplication>
#include "array.h"
#include <iostream>

using namespace std;


void ArrayTest() {
    Array<int> arr;

    for (int i=0; i<10; i++)
        arr.push(10-i);

    arr.print();
    cout << "Popping.. " << arr.pop() << "\n";
    cout << "Setting pos 2 to 99 ... \n";
    arr.push(123123);
    arr.set(2, 99999);
    arr.print();
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ArrayTest();

    return a.exec();
}
