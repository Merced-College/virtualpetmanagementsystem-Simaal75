#ifndef DOG_H
#define DOG_H

#include "Pet.h"

class Dog : public Pet {
private:
    std::string breed; // added attribute

public:
    Dog(const std::string& name, const std::string& species, int age, int hungerLevel, const std::string& breed);

    void printInfo() const override;   // overridden
    void makeSound() const override;   // overridden
};

#endif
