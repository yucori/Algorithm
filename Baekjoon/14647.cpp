#include<iostream>
using namespace std;

int fnine(int num);
int n, m;
int arr[505][505];
int a[505], b[505];
int max1=0;
int sum;

int main(){
    cin.tie(0);
    cin.sync_with_stdio(false);
    cin>>n>>m;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
            a[i] += fnine(arr[i][j]);
            b[j] += fnine(arr[i][j]);
            sum += fnine(arr[i][j]);
        }
     }
    for (int i=0; i<n; i++)
    {
        if (a[i]>max1) max1=a[i];
    }
    for (int j=0; j<m; j++)
    {
        if (b[j]>max1) max1=b[j];
    }
    cout<<sum-max1<<'\n';
    
}

int fnine(int num){
    int result =0;
    while(num){
        if(num%10==9) result++;
        num/=10;
        }
    return result;
}