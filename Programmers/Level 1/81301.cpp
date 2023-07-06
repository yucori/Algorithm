#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    string tmp = "";
    vector<string> nums;
    for(int i=0; i<s.size(); i++){
        
        if(s[i] == '0' ||s[i] == '1' ||s[i] == '2' ||s[i] == '3' ||s[i] == '4' ||s[i] == '5' ||s[i] == '6' ||s[i] == '7' ||s[i] == '8' ||s[i] == '9'){
            string conv;
            conv.push_back(s[i]);
            nums.push_back(conv);
            
        }else{
            tmp+=s[i];
            if(tmp == "zero"){
                nums.push_back("0");
                tmp.clear();
            }else if(tmp == "one"){
                nums.push_back("1");
                tmp.clear();
            }else if(tmp == "two"){
                nums.push_back("2");
                tmp.clear();
            }else if(tmp == "three"){
                nums.push_back("3");
                tmp.clear();
            }else if(tmp == "four"){
                nums.push_back("4");
                tmp.clear();
            }else if(tmp == "five"){
                nums.push_back("5");
                tmp.clear();
            }else if(tmp == "six"){
                nums.push_back("6");
                tmp.clear();
            }else if(tmp == "seven"){
                nums.push_back("7");
                tmp.clear();
            }else if(tmp == "eight"){
                nums.push_back("8");
                tmp.clear();
            }else if(tmp == "nine"){
                nums.push_back("9");
                tmp.clear();
            }
        }
    }

    string answer;
    for(int i=0; i<nums.size(); i++){
        answer+=nums[i];
    }

    return stoi(answer);
}