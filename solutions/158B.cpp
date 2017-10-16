#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    int n;
    std::cin >> n;
    
    int people [4] = {0, 0, 0, 0};
    int friends;
    while(n--){
        std::cin >> friends;
        people[friends-1]++;
    }

    int taxis = 0;
    // 4 friends fit in 1 taxi
    taxis += people[3];
    // 2 group of 2 friends fit in 1 taxi
    taxis += people[1]/2;
    people[1] &= 1;
    // group of 3 friends + optional 1 friends fit in 1 taxi
    while(people[2]>0){
        taxis++;
        people[2]--;
        if(people[0]>0){
            people[0]--;
        }
    }
    // if theres 1 more group of 2 friends, combine them with 2 groups of 1 friend
    if(people[1]>0){
        taxis++;
        if(people[0]>=2){
            people[0]-=2;
        } else if(people[0]>=1) people[0]--;
    }
    // the rest of the group of 1 friend
    while(people[0] > 0){
        taxis++;
        people[0] -= 4;
    }

    std::cout << taxis << std::endl;
    return 0;
}