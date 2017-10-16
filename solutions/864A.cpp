#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    int n;
    std::cin >> n;
    int tmp;
    // first = value, second = count
    int first=-1,second=-1;
    bool playable=true;
    int zero_sum = 0;
    while(n--){
        std::cin >> tmp;

        if(first==-1) {
            first = tmp;
            zero_sum++;
            continue;
        } else if(first == tmp){
            zero_sum++;
            continue;
        }
        
        if(second == -1) {
            second = tmp;
            zero_sum--;
            continue;
        } else if(second == tmp) {
            zero_sum--;
            continue;
        }

        if(tmp!=first && tmp!=second) {
            playable = false;
            break;
        }
    }

    if(first==-1 || second==-1 || zero_sum!=0 || !playable) {
        std::cout << "NO" << std::endl;
    } else {
        std::cout << "YES" << std::endl;
        std::cout << first << " " << second << std::endl;
    }

    return 0;
}