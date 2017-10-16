#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    int n, p, q, count=0;
    std::cin >> n;
    while(n--){
        std::cin >> p >> q;
        if(q-p>=2) ++count;
    }
    std::cout << count << std::endl;
    return 0;
}