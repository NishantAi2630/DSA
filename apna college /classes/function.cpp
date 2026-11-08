#include <iostream>
using namespace std;
 
int print() {
    cout << "Hello\n";
    return 3;
}

int sum(int a , int b) {
    int s = a+b;
    return s; 
}

void sumN(int n) {
    int sum = 0;
    while(n > 0) {
        sum += n;
        n--;

    }
    cout << sum << endl;
}
int main() {
    int c;
    cout << print() << endl;
    cout << sum(2,4) << endl;
    cout << "Give value of n: \n";
    cin >> c;
    sumN(c);
    return 0;
}