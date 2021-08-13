#include "Animal.hpp"

Animal::Animal(std::string name, std::string usage)
{
    m_name = name;
    m_usage = usage;
    std::cout << "Default constructor, name " << m_name << ", usage " << m_usage << std::endl;
}

Animal::~Animal()
{
    std::cout << "Destructor, name " << m_name << ", usage " << m_usage << std::endl;
}

Animal::Animal(const Animal &other) // copy constructor
{
    m_name = other.m_name;
    m_usage = other.m_usage;
    std::cout << "COPY constructor, name " << m_name << ", usage " << m_usage << std::endl;
}

Animal::Animal(Animal &&other) noexcept // move constructor
{
    m_name = other.m_name;
    m_usage = other.m_usage;
    std::cout << "MOVE constructor, name " << m_name << ", usage " << m_usage << std::endl;
}

Animal &Animal::operator=(const Animal &other) // copy assignment
{
    m_name = other.m_name;
    m_usage = other.m_usage;
    std::cout << "COPY ASSIGNMENT, name " << m_name << ", usage " << m_usage << std::endl;
    return *this;
}

Animal &Animal::operator=(Animal &&other) noexcept // move assignment
{
    m_name = other.m_name;
    m_usage = other.m_usage;
    std::cout << "MOVE ASSIGNMENT, name " << m_name << ", usage " << m_usage << std::endl;
    return *this;
}