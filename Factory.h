#ifndef FACTORY_H
#define FACTORY_H
#include "CarBuilder.h"


class Factory
{
    public:
        Factory(CarBuilder *carBuilder){
            this->carBuilder=carBuilder;
        }

        Car *getCar()
            {
                return carBuilder->getCar();
            }

 void buildCar(string name)
 {
   carBuilder->buildName(name);
   carBuilder->buildColor();
   carBuilder->buildAirConditioning();
   carBuilder->buildDarkGlass();
   carBuilder->buildEngine();
   carBuilder->buildInterior();
   carBuilder->buildWheels();
 }



    private:
        CarBuilder *carBuilder;
};

#endif // FACTORY_H