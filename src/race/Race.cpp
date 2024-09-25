#include <iostream>
#include "Race.h"
#include "Weather.h"

using namespace std;

void Race::simulateRace(Weather& weather){
    for (int i = 0; i < 50; ++i) {
        isYellowFlag = false;
        for (Car &car : cars) {
            weather.randomize();
            car.prepareForLap(isYellowFlag);
            car.moveForAnHour();
        }
    }
}

void Race::printRaceResults() const{
    string results = "";

    for (Car car : cars) {
        results += car.toString() + "\n";
    }

    cout << results;
}

bool Race::isYellowFlagActive() const{
    return isYellowFlag;
}

void Race::registerCar(Car car) {
    cout << car.toString() << endl;
    cars.push_back(car);
}