#ifndef CAR_RACE_SRC_WEATHER_H_
#define CAR_RACE_SRC_WEATHER_H_

#include <string>
#include <random>

class Weather {
 private:
    std::random_device rd;
    std::mt19937 mt;
    std::uniform_real_distribution<double> dist;
    bool isRain;
 public:
    Weather(bool isRain);
    bool isRaining() const;
    void randomize();
};

#endif //CAR_RACE_SRC_WEATHER_H_
