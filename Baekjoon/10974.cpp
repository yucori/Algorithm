#include<iostream>
using namespace std;
int n;
int arr[13];
bool visited[13];
void dfs(int cnt);
int main(){
    cin>>n;
    dfs(0);
}
void dfs(int cnt){
    if(cnt==n){
        for(int i=0; i<n; i++){
            cout<<arr[i]<<' ';
        }
        cout<<'\n';
        return;
    }
    for(int i=1; i<=n; i++){
        if(!visited[i]){
            visited[i]=true;
            arr[cnt]=i;
            dfs(cnt+1);
            visited[i]=false;
        }
    }
}