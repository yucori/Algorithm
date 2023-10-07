#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int t;
 
int main() {
    scanf("%d", &t);
 
    while (t--) {
        pair<int, string> angle[5];
        for (int i = 0; i < 5; ++i) {
            string s;
            cin >> s;
 
            int h = (s[0] - '0') * 10 + s[1] - '0';
            int m = (s[3] - '0') * 10 + s[4] - '0';
 
            int d = abs(m * 12 - (h * 60 + m));
            while (d >= 720) d -= 720;
            if (d > 360) d = 720 - d;
            angle[i] = pair<int, string>(d, s);
        }
        sort(angle, angle + 5);
 
        cout<< angle[2].second<<'\n';
    }
}