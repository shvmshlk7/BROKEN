#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int a;
        cin>>a;

        string str;
        cin>>str;
        
        string x = str.substr(0,a/2);
        string y = str.substr(a/2,a);
        
        if(x==y)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    
    }
	return 0;
}
