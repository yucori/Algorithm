#include <iostream>
#include <algorithm>

using namespace std;
int n;
int cnt = 0;
int vote;
int arr[1005];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    cin >> vote;
    int temp = 0;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }
    while (true)
    {
        int find_max = 0;
        int index = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (find_max < arr[i])
            {
                find_max = arr[i];
                index = i;
            }
        }
        if (vote > find_max)
        {
            cout << cnt << "\n";
            break;
        }
        vote++;
        arr[index]--;
        cnt++;
    }
}