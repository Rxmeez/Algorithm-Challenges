#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr1{}; string arr2{};
    getline(cin, arr1);
    getline(cin, arr2);

    cout << arr1.size() << " " << arr2.size() << endl;
    cout << arr1 + arr2 << endl;
    cout << arr2.front() + arr1.substr(1, arr1.size()-1) << " " << arr1.front() + arr2.substr(1, arr2.size() -1);
    
    return 0;
}
