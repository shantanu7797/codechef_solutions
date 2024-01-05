#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[101] = {0};
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            arr[a[i]]++;
        }
        bool flag = true;
        for(int i=0;i<n;i++){
            if((arr[a[i]]%2) != 0){
                flag = false;
            }
        }
        if(flag==true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
	// your code goes here

}
