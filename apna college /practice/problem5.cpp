#include <iostream>
using namespace std;

int main()
{

    int x, y;
    cin >> x >> y;
    if (x == y || y == 0)
    {
        cout << "0" << endl;
    }
    else if (y >= x / 2)
    {
        cout << x - y << endl;
    }
    else
    {
        cout << y << endl;
    }
}
