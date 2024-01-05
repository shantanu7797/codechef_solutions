#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int cnt = 0;
        for(int i=1;i<n-1;i++){
            if(arr[i] != arr[i-1] || arr[i] != arr[i+1]){
                cnt++;
            }
        }
        if(arr[0] != arr[1]){
                cnt++;
            }
        if(arr[n-1] != arr[n-2]){
            cnt++;
        }
        cout<<cnt<<endl;
    }
	// your code goes here

}
