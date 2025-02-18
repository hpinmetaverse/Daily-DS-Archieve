#include<iostream>
using namespace std;

int main() 
{
    for(int i = 1; i <= 5; i++) {     // Declare int i
        for(int j = 1; j <= i; j++) { // Declare int j
            cout << i;
        }
        cout << endl;
    }
    return 0;
}
