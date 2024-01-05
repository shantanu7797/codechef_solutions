#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int a[111];
        int newarr[111] = {0};
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        for(int i=1;i<=n;i++){
            
            if(a[i] != i){
                newarr[a[i]] = newarr[a[i]] + 1;
            }
        }
        int count = 0;
        for(int i=1;i<=n;i++){
            
            if(newarr[i] >= k and a[i] != i){
                count = count + 1;
            }
        }
        cout<<count<<endl;
        
        
    }
	// your code goes here

}
