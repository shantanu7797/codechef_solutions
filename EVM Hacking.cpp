#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c,p,q,r;
        cin>>a>>b>>c>>p>>q>>r;
        int d = a+b+c;
        int s = p+q+r;
        int ans = max(p-a,q-b);
        ans = max(ans,r-c);
        
        if((d+ans)>(s/2)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	// your code goes here

}
