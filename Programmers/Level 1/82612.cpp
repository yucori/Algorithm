using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;
    long long cost = 0;
    
    for(int i=1; i<=count; i++){
        cost += price*i;
    }
    
    if(cost<=money){
        return 0;
    }else{
        answer = cost-money;
    }

    return answer;
}