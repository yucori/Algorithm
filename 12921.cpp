#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<bool>v(n, 0);
    for(int i=2; i<=n; i++){
        if(v[i])
            continue;
        for(int j=i+i; j<=n; j+=i){
            v[j] = 1;
        }
    }
    for(int i=2; i<=n; i++){
        if(!v[i])
            answer++;
    }
    return answer;
}