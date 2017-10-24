#include <iostream>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    string myStr;
    cin >> myStr;
    int i=0, k=0;
    // remove pre b

    // starts here
    int max = 0;
    int n=myStr.size(), temp=0;
    while(i<n){
        k=i;
        while(myStr[k]=='a') ++k;
        while(myStr[k]=='b') ++k;
        
        temp = k-i;
        i = k;
        while(myStr[k]=='a') ++k;
        temp+=k-i;
        if(max<temp) max=temp;
    }

    cout << max << endl;
    return 0;
}