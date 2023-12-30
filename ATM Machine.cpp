#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            if(k-a>=0){
                cout<<"1";
                k = k-a;
            }
            else{
                cout<<"0";
            }
        }cout<<endl;
    }
	// your code goes here
	return 0;
}
