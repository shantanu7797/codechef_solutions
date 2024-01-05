#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
	while(t--){
	        string n;
	        cin>>n;
	        
	        int one=0,zero=0;
	        
	        for(int i=0;i<n.length();i++){
	                if(n[i]=='1') one++;
	                else zero++;
	        }
	        if(one==1 || zero==1) cout << "Yes" << endl;
	        else cout << "No" << endl;
	}
	// your code goes here

}
