#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

vector <string> zero_to_nine = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

int main() {
    int startnumber; int endnumber;
    cin >> startnumber >> endnumber;

    // Complete the code.
    for(int i = startnumber; i < endnumber + 1; i++){
        if(i <= 9){
            cout << zero_to_nine[i] << endl;
        }
        else if(i > 9 && i % 2 == 0){
            cout << "even" << endl;
        }
        else{
            cout << "odd" << endl;
        }
    }
    return 0;
    }
