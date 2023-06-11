#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    double length = arr.size();
    double total=0;
    for(int i=0; i<length; i++){
        total+=arr[i];
    }
    answer = total/length;
    return answer;
}