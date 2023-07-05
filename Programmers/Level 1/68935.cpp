#include <string>
#include <cmath>
#include <stack>

using namespace std;

int solution(int n) {
    int answer = 0;
    int N = n;
    int num = 0;
    int powNum;
    stack<int> third;
    
    while(N>0){
        N = N/3;
        num++;
    }
    num = num-1;
    
    for(int i=num; i>0; i--){
        powNum = pow(3, i);
        third.push(n/powNum);
        n = n%powNum;
    }
    third.push(n);
    
    for(int i=0; i<=num; i++){
        powNum = pow(3, num-i);
        answer+=third.top()*powNum;
        third.pop();
    }
    return answer;
}