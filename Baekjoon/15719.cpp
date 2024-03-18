#include <iostream>
using namespace std;
int n;
int num;
int t;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        t+=i;
        cin>>num;
        t-=num;
    }
    cout<<-t;
    return 0;
}