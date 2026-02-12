#ifndef GOLDFISH_H
#define GOLDFISH_H

#include "Pet.h"

class Goldfish : public Pet {
private:
    int tankSizeGallons;   // unique attribute 1
    std::string color;     // unique attribute 2

public:
    Goldfish(const std::string& name, const std::string& species, int age, int hungerLevel,
             int tankSizeGallons, const std::string& color);

    void printInfo() const override;   // overridden
    void makeSound() const override;   // overridden

    void swim() const; // new method
};

#endif
