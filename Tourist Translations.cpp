#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    string m, s;
    cin>>t>>m;
    
    char english[26] = {'a', 'b', 'c', 'd', 'e',
                        'f', 'g', 'h', 'i', 'j',
                        'k', 'l', 'm', 'n', 'o',
                        'p', 'q', 'r', 's', 't',
                        'u', 'v', 'w', 'x', 'y', 'z'};
    
    // string translate;
    unordered_map<char, char> translate({{ '_', ' ' }});
    for(int i=0;i<m.size();i++){
        translate[english[i]] = m[i];
    }
    while(t--){
        cin>>s;
        for(int i=0;i<s.size();i++){
            char curr = translate[char(tolower(s[i]))];
            
            if(curr){
                if(isupper(s[i])){
                    cout<<char(toupper(curr));
                }
                else{
                    cout<<curr;
                }
            }
            else{
                cout<<s[i];
            }
        }cout<<endl;
    }
    
    
	// your code goes here

}
