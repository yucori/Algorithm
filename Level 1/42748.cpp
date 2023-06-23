#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<vector<int>> list;
    int arr[105];

    for(int i=0; i<commands.size(); i++){
        int a = commands[i][0];
        int b = commands[i][1];
        int c = commands[i][2];
        int num = 0;
        if(a != b){
            for(int j=a-1; j<b; j++){
            arr[num] = array[j];
            num++;
            }
        }
        else{
            arr[num] = array[a-1];
        }
        
        int len = b-a+1;
        sort(arr, arr+len);
        answer.push_back(arr[c-1]);
    }
    
    return answer;
}