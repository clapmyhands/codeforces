#include <iostream>
#include <vector>

bool check_lucky_number(int n){
    while(n>0){
        if((n%10)!=4 && (n%10)!=7)
            return false;
        n/=10;
    }
    return true;
}

std::vector<int> get_lucky_numbers(int n){
    std::vector<int> lucky_numbers;
    for(int i=1; i<=n; i++){
        if(check_lucky_number(i)){
            lucky_numbers.push_back(i);
        }
    }
    return lucky_numbers;
}

int main() {
    std::ios::sync_with_stdio(false);
    int i,n;
    std::cin >> n;
    // lucky numbers below 1000
    std::vector<int> lucky_numbers = get_lucky_numbers(n);
    for(i=0; i<lucky_numbers.size(); ++i){
        if(n%lucky_numbers[i] == 0){
            break;
        }
    }
    if(i==lucky_numbers.size())
        std::cout << "NO" << std::endl;
    else
        std::cout << "YES" << std::endl;
    return 0;
}