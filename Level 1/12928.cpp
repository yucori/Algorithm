#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int i=1;
    while(i*i<=n){
        if(n%i == 0 && i*i != n){
            answer+=i;
            answer+=n/i;
        }
        else if(i*i == n){
            answer+=i;
        }
        i++;
    }
    return answer;
}