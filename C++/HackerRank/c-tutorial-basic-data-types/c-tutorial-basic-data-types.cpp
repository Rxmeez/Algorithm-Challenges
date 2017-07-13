#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    // Complete the code.
    int intnumber; long longnumber; char a; float floatnumber; double doublenumber;

    cin >> intnumber >> longnumber >> a >> floatnumber >> doublenumber;

    cout << intnumber << endl;
    cout << longnumber << endl;
    cout << a << endl;
    cout << fixed;
    cout << setprecision(2);
    cout << floatnumber << endl;
    cout << fixed;
    cout << setprecision(9);
    cout << doublenumber << endl;

    return 0;
}
