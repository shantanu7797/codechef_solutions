#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x, y;
        cin>>x>>y;
        string str;
        cin>>str;
        int N = str.length();
        int count=0;
        int cnt=0;
        int max=0;
        for(int i=0;i<31;i++){
            if(str[i]=='1'){
                cnt++;
                count++;
                //cout<<count<<endl;
            }
            else{
                if(max<=count){
                    max = count;
                }
                count = 0;
            }
        }
        cout<<((x*cnt)+(y*max))<<endl;
    }
	// your code goes here
	return 0;
}
