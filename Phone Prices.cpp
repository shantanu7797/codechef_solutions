#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int p[n];
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        int count = 0;
        for(int i=n-1;i>=0;i--){
            int curr = p[i];
            bool flag = true;
            for(int j=i-1;j>=max(0,i-5);j--){
                if(p[j]<=curr){
                    flag = false;
                    break;
                }
            }
            if(flag){
                count++;
            }
        }
        cout<<count<<endl;
    }
	// your code goes here

}
