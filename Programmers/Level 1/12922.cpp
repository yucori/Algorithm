#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    int temp;
    int rest;
    temp = n/2;
    rest = n%2;
    for(int i=0; i<temp; i++){
        answer.append("수박");
    }
    for(int i=0; i<rest; i++){
        answer.append("수");
    }
    
    return answer;
}