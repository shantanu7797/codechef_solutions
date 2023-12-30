#include <iostream>
using namespace std;

int main() {
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n==3 || n==4 || n>5){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	// your code goes here
	return 0;
}
