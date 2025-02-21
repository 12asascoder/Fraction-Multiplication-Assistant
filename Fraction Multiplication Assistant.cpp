#include <iostream>

int main() {
    int num1, den1, num2, den2;
    char slash;

    std::cout << "Enter first fraction (a/b): ";
    std::cin >> num1 >> slash >> den1;

    std::cout << "Enter second fraction (c/d): ";
    std::cin >> num2 >> slash >> den2;

    // Calculate product
    int productNum = num1 * num2;
    int productDen = den1 * den2;

    // Calculate sum
    int sumNum = (num1 * den2) + (num2 * den1);
    int sumDen = den1 * den2;

    std::cout << "Product = " << productNum << "/" << productDen << std::endl;
    std::cout << "Sum = " << sumNum << "/" << sumDen << std::endl;

    return 0;
}

