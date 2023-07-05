#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer=0;
    vector<int>temp;
    while(n/10>=1){
        temp.push_back(n%10);
        n = n/10;
    }
    temp.push_back(n);
    sort(temp.rbegin(), temp.rend());
    for(int i=temp.size()-1; i>=0; i--){
        answer+=temp[i]*(pow(10,temp.size()-1-i));
    }
    return answer;
}