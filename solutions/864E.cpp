#include <iostream>
#include <algorithm>
#include <vector>

class MyClass {
    
public:
    int t,d,p,origin;    
    MyClass(int t, int d, int p, int origin) : t(t), d(d), p(p), origin(origin) {}
    
    bool operator>(MyClass const &other) {
        return p > other.p;
    }
};

bool myfunction(MyClass i, MyClass j) {
    return i.origin < j.origin;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::vector <MyClass> vec;

    int n;
    int t,d,p;
    std::cin >> n;
    for(int i=0; i<n; i++){
        std::cin >> t >> d >> p;
        vec.push_back(MyClass(t,d,p,i+1));
    }
    std::sort(vec.begin(), vec.end());

    int total_value=0, distinct=0, time_passed=0;
    std::vector<int> set;
    for(int i=0; i<n; i++){
        if(time_passed+vec[i].t<vec[i].d){
            total_value += vec[i].p;
            distinct++;
            time_passed = vec[i].t;
            set.push_back(vec[i].origin);
        }
    }
    std::sort(set.begin(), set.end(), myfunction);
    std::cout << total_value << std::endl;
    std::cout << distinct << std::endl;
    for(int i; i<set.size()-1; i++) {
        std::cout << set[i] << " ";
    }
    std::cout << set[set.size()-1] << std::endl;
    return 0;
}