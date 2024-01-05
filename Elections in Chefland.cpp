#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a, b, c;
        cin>>a>>b>>c;
        if(a>=51 || b>=51 || c>=51){
            if(a>=51){
                cout<<"A"<<endl;
            }
            if(b>=51){
                cout<<"B"<<endl;
            }
            if(c>=51){
                cout<<"C"<<endl;
            }
        }
        else{
            cout<<"NOTA"<<endl;
        }
    }
	// your code goes here
	return 0;
}
