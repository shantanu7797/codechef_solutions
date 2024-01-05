#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a[3];
        for(int i=0;i<3;i++){
            cin>>a[i];
        }
        sort(a, a+3);
        if(a[2] == a[0]+a[1]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	// your code goes here

}
