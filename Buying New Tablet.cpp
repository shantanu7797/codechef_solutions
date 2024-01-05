#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n, b;
        cin>>n>>b;
        int count = 0;
        int maximum=0;
        for(int i=0;i<n;i++){
            int w, h, p;
            cin>>w>>h>>p;
            int length = w * h;
           
            if(p<=b){
                count++;
                if(length>maximum){
                    maximum = length;
                }
            }
            
        }
        if(count==0){
            cout<<"no tablet"<<endl;
        }
        else{
            cout<<maximum<<endl;
        }
    }
	// your code goes here
	return 0;
}
