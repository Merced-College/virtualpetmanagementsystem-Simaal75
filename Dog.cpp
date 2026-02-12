#include "Dog.h"

Dog::Dog(const std::string& name, const std::string& species, int age, int hungerLevel, const std::string& breed)
    : Pet(name, species, age, hungerLevel), breed(breed) {} // initializer list

void Dog::printInfo() const {
    Pet::printInfo();
    std::cout << "Breed: " << breed << std::endl;
}

void Dog::makeSound() const {
    std::cout << getName() << " says Woof!\n";
}
