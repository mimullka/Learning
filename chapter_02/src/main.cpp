#include <iostream>
#include <string>
#include <list>
#include <vector>

class TestClass {
    public:

    TestClass (std::string name){

        param1 = name;
    };

    void operator()(){
        std::cout << "param " << param1 << std::endl;
    };

    friend std::ostream& operator<<(std::ostream& os, const TestClass& in);

    private:
    std::string param1;
};

std::ostream& operator<<(std::ostream& os, const TestClass& in) // copy&pasterfrom internet. Ostream is required due to std::cout
{
    os << "[" << in.param1 << "] Hello!";
    return os;
}

int main(int argc, char *argv[])
{
    TestClass testClass("Zdeno");
    testClass();
    std::cout << testClass << std::endl;

    return 0;
}