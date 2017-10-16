#include <iostream>
#include <map>

int main() {
    std::ios::sync_with_stdio(false);
    int n;
    std::cin >> n;

    std::string word;
    std::cin >> word;

    int max_count = 0, count = 0;

    char c;
    std::map<char,int> pretty_set;
    for(int i=0; i<n; i++) {
        c = word[i];
        // check if capital
        if(c<'a') {
            count = 0;
            pretty_set.clear();
            continue;
        }

        if(pretty_set.count(c)>0) {
            continue;
        } else {
            pretty_set[c]=1;
            count++;
            if(count>max_count) max_count = count;
        }
    }
    std::cout << max_count << std::endl;
    return 0;
}