#include <iostream>
#include <math.h>

long long getTiles(long m, long n, long a){
    return ceil(double(m)/a)*ceil(double(n)/a);
}

int main(){
    long long m,n,a;
    std::cin >> m >> n >> a;
    std::cout << getTiles(m,n,a) << std::endl;
    return 0;
}