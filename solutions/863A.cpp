#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::string number;
    std::cin >> number;
    int lead=0,trail=number.length()-1;

    // remove trailing 0
    while(lead<trail && number[trail]=='0') trail--;
    // check palindrome with the rest
    while(lead<trail) {
        if(number[lead]!=number[trail]) break;
        lead++;
        trail--;
    }
    // if bigger or equal then it goes to the end and check every digit otherwise not palindrome
    if(lead>=trail) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
    return 0;
}