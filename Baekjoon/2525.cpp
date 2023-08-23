#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    int t = 0;
    cin >> a >> b >> c;
    t = a * 60 + b + c;
    a = (t / 60) % 24;
    b = t % 60;
    cout << a << " " << b;
    return 0;
}