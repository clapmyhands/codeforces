#include <iostream>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    std::string word;
    std::cin >> word;

    bool caps = true;
    bool small_first = word[0] >= 'a';
    for(int i=1; i<word.length(); i++){
        if(word[i]>='a') {
            caps = false;
            break;
        }
    }

    if(!caps) std::cout << word << std::endl;
    else {
        // word is caps
        std::transform(word.begin(), word.end(), word.begin(), ::tolower);
        if(small_first) word[0] = toupper(word[0]);
        std::cout << word << std::endl;
    }
    
    return 0;
}