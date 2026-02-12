#include "Cat.h"

Cat::Cat(const std::string& name, const std::string& species, int age, int hungerLevel, const std::string& favoriteToy)
    : Pet(name, species, age, hungerLevel), favoriteToy(favoriteToy) {}

void Cat::printInfo() const {
    Pet::printInfo();
    std::cout << "Favorite Toy: " << favoriteToy << std::endl;
}

void Cat::makeSound() const {
    std::cout << getName() << " says Meow!\n";
}
