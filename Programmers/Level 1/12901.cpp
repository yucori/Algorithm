#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(int a, int b) {
    vector<string> weekend;
    weekend.push_back("SUN");
    weekend.push_back("MON");
    weekend.push_back("TUE");
    weekend.push_back("WED");
    weekend.push_back("THU");
    weekend.push_back("FRI");
    weekend.push_back("SAT");
    int months[15] ={0, 1, 4, 6, 2, 4, 0, 3, 5, 1, 3};
    string answer = "";
    
    int monthIdx = 4;
    if(a>=2){
        monthIdx = months[a-2];  
    }
    b = b%7;
    int dayIdx = monthIdx+b;
    if(dayIdx>=7){
        dayIdx-=7;
    }
    answer = weekend[dayIdx];

    return answer;
}