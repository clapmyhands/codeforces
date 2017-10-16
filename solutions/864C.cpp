#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);

    int journey_length,max_fuel,gas_station,journey_count;
    std::cin >> journey_length >> max_fuel >> gas_station >> journey_count;

    int refuel_count=0;
    // start position change to gas station
    int current_fuel = max_fuel-gas_station;
    // left and right signify length from gas station to left and right respectively
    int distance_to_gas = journey_length-gas_station;
    if(max_fuel<gas_station || max_fuel<distance_to_gas){
        refuel_count = -1;
        journey_count = 0;
    }
    while(journey_count>1) {
        if(current_fuel<2*distance_to_gas) {
            if(2*distance_to_gas>max_fuel){
                refuel_count=-1;
                break;
            }
            refuel_count++;
            current_fuel = max_fuel;
        }
        current_fuel -= 2*distance_to_gas;
        distance_to_gas = journey_length - distance_to_gas;
        journey_count--;
    }
    if(refuel_count >=0 && current_fuel<distance_to_gas) refuel_count++;
    std::cout << refuel_count << std::endl;

    return 0;
}