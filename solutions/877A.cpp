#include <iostream>
#include <set>
#include <vector>
#include <string>
using namespace std;

int main(){
    std::ios::sync_with_stdio(false);
    vector<string> names = {"Danil", "Olya", "Slava", "Ann", "Nikita"};
    string myString;
    cin >> myString;

    string existName;
    bool result = false;
    int min = 110;
    for(auto name: names){
        size_t found = myString.find(name);
        if(found!=string::npos && found<min) {
            min = found;
            existName = name;
            result = true;
        }
    }
    if(result){
        size_t pos = min+existName.size();
        myString = myString.substr(pos, myString.size()-pos);
        for(auto name: names){
            size_t found = myString.find(name);
            if(found!=string::npos){
                result=false;
                break;
            }
        }
    }
    if(result){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}