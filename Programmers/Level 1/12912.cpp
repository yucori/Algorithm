#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    int temp;
    if(a>b){
        temp = b;
        b = a;
        a = temp;
    }
    if(a == b){
        return a;
    }
    
    for(int i=a; i<=b; i++){
        answer+=i;
    }
    return answer;
}