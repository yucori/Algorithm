#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    vector<string> arr1De;
    vector<string> arr2De;
    string temp = "";
    string anstemp = "";
    string temp1 = "";
    string temp2 = "";
    for(int i=0; i<arr1.size(); i++){
       for(int j=0; j<n; j++){
            if(arr1[i]%2 == 1){
                temp.append("#");
            }else if(arr1[i]%2 == 0){
                temp.append(" ");
            }
            arr1[i] = arr1[i]/2;
        }
        reverse(temp.begin(), temp.end());
        arr1De.push_back(temp);
        temp="";
    }
    
    for(int i=0; i<arr2.size(); i++){
       for(int j=0; j<n; j++){
            if(arr2[i]%2 == 1){
                temp.append("#");
            }else if(arr2[i]%2 == 0){
                temp.append(" ");
            }
            arr2[i] = arr2[i]/2;
        }
        reverse(temp.begin(), temp.end());
        arr2De.push_back(temp);
        temp="";
    }
    
    for(int i=0; i<arr1.size(); i++){
        for(int j=0; j<n; j++){
            temp1 = arr1De[i][j];
            temp2 = arr2De[i][j];
            if(temp1 == "#" || temp2 == "#"){
                anstemp.append("#");
            }else{
                anstemp.append(" ");
            }
        }
        answer.push_back(anstemp);
        anstemp = "";
    }
    
    return answer;
}