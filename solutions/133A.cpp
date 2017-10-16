#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::string code;
    std::cin >> code;
    bool output = false;
    
    for(int i=0; i<code.length(); i++) {
        switch(code[i]){
            case 'H':
            case 'Q':
            case '9':
                output=true;
                break;
        }
        if(output) break;
    }
    if(output) 
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;
    return 0;
}