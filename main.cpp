// Names: Afaan Ally, Simaal Belgaumi
// Date: 2/12/2026
#include <iostream>
#include <vector> // added
#include "Pet.h"
#include "Dog.h"      // added
#include "Cat.h"      // added
#include "Goldfish.h" // added

int main() {
    Pet pet1("Rex", "Dog", 3, 6);
    Pet pet2("Whiskers", "Cat", 2, 4);

    std::cout << "Pet 1 Info:\n";
    pet1.printInfo();

    std::cout << "\nPet 2 Info:\n";
    pet2.printInfo();

    std::cout << "\nComparing pets by name: ";
    int result = pet1.compareTo(pet2);
    if (result < 0) std::cout << pet1.getName() << " comes before " << pet2.getName() << "\n";
    else if (result > 0) std::cout << pet1.getName() << " comes after " << pet2.getName() << "\n";
    else std::cout << "Both pets have the same name.\n";

    // created one of each type
    Dog dog1("Buddy", "Dog", 4, 3, "Husky");
    Cat cat1("Milo", "Cat", 2, 5, "Laser Pointer");
    Goldfish fish1("Bubbles", "Goldfish", 1, 2, 10, "Orange");

    dog1.makeSound();
    cat1.makeSound();
    fish1.makeSound();
    fish1.swim();

    // polymorphism pointer test
    Pet* myDog = new Dog("Rocky", "Dog", 5, 2, "Pitbull");
    myDog->makeSound();
    delete myDog;

    // vector polymorphism test
    std::vector<Pet*> pets;
    pets.push_back(new Dog("Max", "Dog", 3, 4, "Beagle"));
    pets.push_back(new Cat("Luna", "Cat", 1, 3, "Feather Wand"));
    pets.push_back(new Goldfish("Goldie", "Goldfish", 1, 2, 5, "Gold"));

    for (Pet* p : pets) {
        p->makeSound();
    }

    for (Pet* p : pets) {
        delete p;
    }

    return 0;
}
