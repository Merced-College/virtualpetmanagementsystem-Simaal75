#ifndef CAT_H
#define CAT_H

#include "Pet.h"

class Cat : public Pet {
private:
    std::string favoriteToy; // added attribute

public:
    Cat(const std::string& name, const std::string& species, int age, int hungerLevel, const std::string& favoriteToy);

    void printInfo() const override;   // overridden
    void makeSound() const override;   // overridden
};

#endif
