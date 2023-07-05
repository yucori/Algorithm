#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    vector <pair<int, int>> list;
    
    for(int i=left; i<=right; i++){
      int trying = i;
      set<int> s;

      if(i<=3){
        s.insert(i);
        s.insert(1);
      }else{
        for(int i=1; i<=trying/2; i++){
          if(trying%i == 0){
            s.insert(i);
            s.insert(trying/i);
          }
        }
      }

      list.push_back(make_pair(i, s.size()));
      s.clear();
    }

    for(int i=0; i<list.size(); i++){
      if(list[i].second%2 == 0){
        answer+=list[i].first;
      }else{
        answer-=list[i].first;
      }
    }
    
    return answer;
}