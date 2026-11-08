#include <iostream>
using namespace std;

int dectobinary(int decnum)
{
    int ans = 0, power = 1;

    while (decnum > 0)
    {
        int rem = decnum % 2;
        decnum /= 2;

        ans += (rem * power);
        power *= 10;
    }
    return ans;
}
int bintodec(int binnum)
{
    int num = 0, power = 1;
    while (binnum > 0)
    {
        int rem = binnum % 10;
        num += rem * power;

        binnum /= 10;
        power *= 2;
    }
    return num;
}

int main()
{
    cout << dectobinary(50) << endl;
    cout << bintodec(110010) << endl;

    return 0;
}