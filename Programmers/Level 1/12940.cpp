#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    vector<int> nnums;
    vector<int> mnums;
    int a = 0;
    int b = 0;

    for(int i=1; i<=n; i++){
        if(n%i == 0){
            nnums.push_back(i);
        }
    }
    for(int j=1; j<=m; j++){
        if(m%j == 0){
            mnums.push_back(j);
        }
    }
    sort(nnums.rbegin(), nnums.rend());
    sort(mnums.rbegin(), mnums.rend());

    for(int i=0; i<nnums.size(); i++){
        for(int j=0; j<mnums.size(); j++){
            if (mnums[j] == nnums[i]){
                if(mnums[j]>=a){
                    a = mnums[j];
                }
            }
        }
    }
    
    b = n*m / a;

    answer.push_back(a);
    answer.push_back(b);
    
    return answer;
}