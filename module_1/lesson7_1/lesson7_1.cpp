
#include <iostream>

using namespace std;

int main()
{
    short Short;
    int Int;
    long Long;
    long long LongLong;
    float Float;
    double Double;
    bool Bool;

    cout << "short: " << &Short << " " << sizeof(Short) << endl;
    cout << "int: " << &Int   << " " << sizeof(Int) << endl;
    cout << "long: " << &Long << " "  << sizeof(Long) << endl;
    cout << "long long: " << &LongLong << " " << sizeof(LongLong) << endl;
    cout << "float: " << &Float << " " << sizeof(Float) << endl;
    cout << "double: " << &Double << " " << sizeof(Double) << endl;
    cout << "bool: " << &Bool << " " << sizeof(Bool) << endl;

    return EXIT_SUCCESS;
}
