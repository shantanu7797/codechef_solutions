#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    int min = 0;
    while(t--){
        int a1, a2;
        cin>>a1>>a2;
        int a = a1 + a2;
        int b1, b2;
        cin>>b1>>b2;
        int b = b1 + b2;
        int c1, c2;
        cin>>c1>>c2;
        int c = c1 + c2;
        int d = max(a,b);
        int e = max(d,c);
        cout<<e<<endl;
    }
	// your code goes here
	return 0;
}
