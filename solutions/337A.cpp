#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::ios::sync_with_stdio(false);
    int n, m, tmp;
    std::cin >> n >> m;
    std::vector<int> puzzle_size;
    for(int i=0; i<m; ++i){
        std::cin >> tmp;
        puzzle_size.emplace_back(tmp);
    }
    --n; // window size
    std::sort(puzzle_size.begin(), puzzle_size.end());
    int min = 65535;
    for(int i=0; i<m-n; ++i){
        tmp = puzzle_size[i+n] - puzzle_size[i];
        if(min > tmp){
            min = tmp;
        }
    }
    std::cout << min << std::endl;

    return 0;
}