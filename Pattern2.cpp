#include<iostream>
using namespace std;

int main() {
    for(int i = 0; i < 6; i++) {     // Declare int i
        for(int j = 0; j < i; j++) { // Declare int j
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
