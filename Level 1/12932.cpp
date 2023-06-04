#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    while(n/10>=1){
        answer.push_back(n%10);
        n = n/10;
    }
    answer.push_back(n);
    return answer;
}