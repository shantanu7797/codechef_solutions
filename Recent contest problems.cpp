#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count1=0;
        int count2=0;
        for(int i=0;i<n;i++){
            string x;
            cin>>x;
            if(x=="START38"){
                count1++;
            }
            if(x=="LTIME108"){
                count2++;
            }
        }
        cout<<count1<<" "<<count2<<endl;
    }
	// your code goes here
	return 0;
}
