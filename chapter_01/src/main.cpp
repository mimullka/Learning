#include <iostream>
#include <string>
#include <list>
#include <vector>

#include "Animal.hpp"

Animal createNewAnimal()
{
    return std::move(Animal("Tarzan", "Move constructor"));
}

int main(int argc, char *argv[])
{
    {
        Animal testAnimal("Riko", "Testing");
        Animal copiedAnimal(testAnimal);
        std::cout << "--------------------------------" << std::endl;
        //------
        Animal movedAnimal = createNewAnimal();
        std::cout << "--------------------------------" << std::endl;
    }

    std::cout << "--------------------------------" << std::endl;

    std::list<Animal> listOfAnimals;
    listOfAnimals.push_back(Animal("Anim1", "list"));
    listOfAnimals.push_back(Animal("Anim2", "list"));
    listOfAnimals.push_back(Animal("Anim3", "list"));

    std::cout << "--------------------------------" << std::endl;

    std::vector<Animal> vectorOfAnimals;
    vectorOfAnimals.push_back(Animal("Anim1", "vector"));
    vectorOfAnimals.push_back(Animal("Anim2", "vector"));
    vectorOfAnimals.push_back(Animal("Anim3", "vector"));
    std::cout << "--------------------------------" << std::endl;

    return 0;
}