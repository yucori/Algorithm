#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int temp = 0;
    
    for(int i=0; i<numbers.size(); i++){
        temp+=numbers[i];
    }
    
    return 45-temp;
}