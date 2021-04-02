#ifndef CAR_H
#define CAR_H
#include <string>

class Car
{
    public:
        void inputFunc(std::string model, std::string brand, int topSpeed, int carPrice);


    protected:

    private:
        std::string model;
        std::string brand;
        int topSpeed;
        int carPrice;
};

#endif // CAR_H
