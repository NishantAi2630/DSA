#include <iostream>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        if (x < 12) {
            if (x + 3 <= 10) {
                cout << "yes" << endl;
            }
            else {
                cout << "no" << endl;
            }
        }
        else if (x == 12) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }
}