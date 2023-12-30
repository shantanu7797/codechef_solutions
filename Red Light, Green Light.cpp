#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int arr[n];
        int count = 0;
        for(int i=0;i<n;i++){
            int p;
            cin>>p;
            if(p>k){
                count++;
            }
        }
        cout<<count<<endl;
        
    }
	// your code goes here
	return 0;
}
