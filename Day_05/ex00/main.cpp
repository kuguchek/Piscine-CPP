#include "Bureaucrat.hpp"
#include <iostream>

int main () {
    try {
        Bureaucrat A("Bureaucrat 1", 100);
        std::cout << A;
        Bureaucrat B("Bureaucrat 2", 151);
        std::cout << B;
        Bureaucrat C("Bureaucrat 3", 0);
        std::cout << C;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try {
        Bureaucrat E("Bureaucrat", 2);
        std::cout << E;
        E.incGrade();
        std::cout << E;
        E.incGrade();
        std::cout << E;
        E.incGrade();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}