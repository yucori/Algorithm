#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string dartResult) {
    int answer = 0;
    string temp = "";
    string word = "";
    string next = "";
    vector<string> list;
    vector<int> tempScore;
    
    for(int i = 0; i<dartResult.length(); i++){
        word = dartResult[i];
        
        if(i != dartResult.length()-1){
            next = dartResult[i+1];
        }
        
        temp.append(word);
        
        if(word == "S" || word == "D" || word == "T"){
            if(next == "*" || next == "#"){
                temp.append(next);
                list.push_back(temp);
                temp = "";
                next = "";
                word = "";
                i++;
            }else{
                list.push_back(temp);
                temp = "";
                next = "";
                word = "";
            }
        }
    }
    
    string type = "";
    string score = "";
    string option = "";
    int len = 0;
    
    for(int i=0; i<list.size(); i++){
        type = list[i][1];
        score = list[i][0];
        option = list[i][2];
        len = list[i].length();
        
        if(type == "0"){
            score.append(type);
            type = list[i][2];
            option = "";
            len = 2;
        }
        
        int num = stoi(score);
        
        if(len == 2){
            
            if(type == "S"){
                tempScore.push_back(num);
            }
            else if(type == "D"){
                tempScore.push_back(num*num);
            }
            else if(type == "T"){
                tempScore.push_back(num*num*num);
            }
        }
        
        else if(len == 3){
            if(option == "*"){
                if(i==0){
                   if(type == "S"){
                    tempScore.push_back(num*2);
                    }
                    else if(type == "D"){
                        tempScore.push_back(num*num*2);
                    }
                    else if(type == "T"){
                        tempScore.push_back(num*num*num*2);
                    }
                }else{
                   if(type == "S"){
                        tempScore[i-1] = tempScore[i-1]*2;
                        tempScore.push_back(num*2);
                    }
                    else if(type == "D"){
                        tempScore[i-1] = tempScore[i-1]*2; 
                        tempScore.push_back(num*num*2);
                    }
                    else if(type == "T"){
                        tempScore[i-1] = tempScore[i-1]*2;
                        tempScore.push_back(num*num*num*2);
                    } 
                }
            }
            
            else if(option == "#"){
                if(type == "S"){
                    tempScore.push_back(num*(-1));
                }
                else if(type == "D"){
                    tempScore.push_back(num*num*(-1));
                }
                else if(type == "T"){
                    tempScore.push_back(num*num*num*(-1));
                }
            }
        }
    }

    for(int i = 0; i<tempScore.size(); i++)
    {
        answer += tempScore[i];
    }
    
    return answer;
}