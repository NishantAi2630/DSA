#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cout << "test cases" << endl;
    cin >> t;
    while (t--)
    {
        int n, x;
        cout << "value of n and x" << endl;
        cin >> n >> x;
        if (n % 6 == 0)
        {
            cout << (n / 6) * x << endl;
        }
        else if (n % 6 != 0)
        {
            if (n >= 0)
            {
                cout << ((n / 6) + 1) * x << endl;
            }
            else
            {
                cout << "boka ho kya\n pahle khud karke dikhawo\n";
            }
        }
    }
}
