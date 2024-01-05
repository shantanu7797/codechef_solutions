#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int k;
        cin>>k;
        int cnt = 0;
        for(int i=1;i<=n;i++){
            if(a[i] < a[k]){
                cnt++;
            }
        }
        cout<<cnt+1<<endl;
    }
	// your code goes here

}
