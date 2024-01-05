#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,count=0;
        cin>>n;
        
        set<int> s;
        for(int i=0;i<n;i++){
            int apple;
            cin>>apple;
            s.insert(apple);
        }
    
        cout<<s.size()<<endl;
    }
	// your code goes here

}
