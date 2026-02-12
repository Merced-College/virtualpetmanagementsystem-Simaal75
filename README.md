[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-2972f46106e565e64193e422d61a12cf1da4916b45550586e14ef0a7c637dd04.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=22660709)
# cpp_virtualPet
A project to practice inheritance making VirtualPets.

virtual-pet/
├── main.cpp
├── Pet.cpp
└── Pet.h

Custom Pet: Goldfish

For my custom pet, I created a Goldfish class that inherits from the Pet base class. The Goldfish has two unique attributes: tankSizeGallons and color. It overrides printInfo() to display the tank size and color, and overrides makeSound() to print a simple “blub blub” sound.

I also added a new method called swim() that allows the goldfish to perform a unique action. The challenge I implemented was using polymorphism by storing the Goldfish in a vector of Pet pointers and calling makeSound() through the base class pointer to make sure the overridden version runs correctly.