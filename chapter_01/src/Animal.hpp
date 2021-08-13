#pragma once
#include <string>
#include <iostream>

class Animal
{
public:
    Animal(std::string name, std::string usage);

    ~Animal();
    Animal(const Animal &other);                // copy constructor
    Animal(Animal &&other) noexcept;            // move constructor
    Animal &operator=(const Animal &other);     // copy assignment
    Animal &operator=(Animal &&other) noexcept; // move assignment

private:
    std::string m_name;
    std::string m_usage;
};