#pragma once
#include "Car.hpp"
#include "ElectricEngine.hpp"


class ElectricCar : virtual public Car
{
public:
    ElectricCar(ElectricEngine* engine);
    ~ElectricCar();

    
    void changeEngine(ElectricEngine*ee);
    void refill() override;

    private:
    ElectricEngine* engine_;
    void charge();
};

