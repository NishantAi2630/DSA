#include <iostream>
using namespace std;

int main() {
    int n = 9;
    bool isPrime = true;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            cout << "Non prime";
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << "prime";
    }

    return 0;
}