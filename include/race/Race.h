#pragma once

#include <vector>
#include "Car.h"
#include "Weather.h"

class Race {
private:
   std::vector<Car> cars;
   bool isYellowFlag = false;

public:
   void simulateRace(Weather &weather);
   void printRaceResults() const;
   bool isYellowFlagActive() const;
   void registerCar(Car car);
};