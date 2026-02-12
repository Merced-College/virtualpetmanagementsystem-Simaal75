#include "Goldfish.h"

Goldfish::Goldfish(const std::string& name, const std::string& species, int age, int hungerLevel,
                   int tankSizeGallons, const std::string& color)
    : Pet(name, species, age, hungerLevel),
      tankSizeGallons(tankSizeGallons), color(color) {}

void Goldfish::printInfo() const {
    Pet::printInfo();
    std::cout << "Tank Size: " << tankSizeGallons << " gallons" << std::endl;
    std::cout << "Color: " << color << std::endl;
}

void Goldfish::makeSound() const {
    std::cout << getName() << " says blub blub!\n";
}

void Goldfish::swim() const {
    std::cout << getName() << " swims around the tank.\n";
}
