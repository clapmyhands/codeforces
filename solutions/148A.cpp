#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::ios::sync_with_stdio(false);
    int k,l,m,n,d;
    std::cin >> k >> l >> m >> n >> d;
    std::vector<int> temp, attack = {k, l, m, n};
    
    // remove factor
    std::sort(attack.begin(), attack.end(), std::greater<int>());
    for(int i=0; i<attack.size(); ++i){
        int j=i+1;
        for(; j<attack.size(); ++j){
            if(attack[i]%attack[j]==0) break;
        }
        if(j==attack.size()) temp.emplace_back(attack[i]);
    }
    attack = temp;

    // assign initial
    int dragons [100100];
    for(int i=0; i<=d; ++i){dragons[i] = 0;}

    // flip switch
    int count=0;
    for(auto j: attack){
        int i=j;
        while(i<=d){
            if(dragons[i]!=1){
                dragons[i] = 1;
                ++count;
            }
            i+=j;
        }
    }
    std::cout << count << std::endl;
    return 0;
}