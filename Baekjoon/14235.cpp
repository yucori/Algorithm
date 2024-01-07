#include <iostream>
#include <queue>
using namespace std;
int n;
int in;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin>>n;
    priority_queue<int> pq;
    while(n--){
        cin>>in;
        if(in == 0){
            if(pq.empty()) {
                cout<<-1<<'\n';
                continue;
            }
            int t = pq.top();
            pq.pop();
            cout<<t<<"\n";
        }
        else{
            while(in--){
                int t;
                cin>>t;
                pq.push(t);
            }
        }
    }
    return 0;
}