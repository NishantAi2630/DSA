#include <iostream>
using namespace std;
int reverse(int n)
{
    int ans = 0;
    while (n > 0)
    {
        int ld = n % 10;
        n /= 10;
        ans = ans * 10 + ld;
    }
    cout << ans << endl;
}
int main()
{
    int a = 4, b = 7;

    cout << (a & b) << endl;
    // so 4 = 100 and 7 = 111 and 100 and 111 = 100 so ans is 4 if same 1
    cout << (a | b) << endl;
    // so 4 = 100 and 7 = 111 and 100 or 111 = 111 so ans is 7 any one of them 1 is 1
    cout << (a ^ b) << endl;
    // so 4 = 100 and 7 = 111 and 100 and 111 = 011 so ans is 3 if same 0 if diff 1
    cout << (4 << 2) << endl;
    // so 4 is 100 it will move two left side so 10000 then 16
    cout << (4 >> 2) << endl;
    // so 4 is 100 it will move two rightside side so 0001 then 1
    reverse(5210899);
    return 0;
}