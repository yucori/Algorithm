#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int temp = 0;
    int n = x;
    if(x>0 && x<10){
        return true;
    }
    while (n > 0){
        temp += n % 10;
        n /= 10;
    }
    if ( x % temp == 0) return true;
    return false;
}