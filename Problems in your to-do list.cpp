#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=0;
        for(int i=0;i<n;i++){
            int d;
            cin>>d;
            if(d>=1000){
                count++;
            }
        }
        cout<<count<<endl;
    }
	// your code goes here
	return 0;
}
