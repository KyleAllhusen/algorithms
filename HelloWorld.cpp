#include <iostream>
#include <string>

int main() {
    std::string num1;
    std::string num2;
    std::string op;
    
    std::cout << "Numbers Please: " << std::endl;
    std::cin >> num1 >> num2;

    std::cout << "Please Enter an Operator: ";

    std::cout << "Answer = " << stoi(num1) + stoi(num2) << std::endl;

    return 0;

}