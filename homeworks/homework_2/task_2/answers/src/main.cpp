#include <iostream>
#include <sstream>
#include <string>

int main() {

  while ("true") {
    std::string name1, name2;
    std::stringstream fileName1;
    std::stringstream fileName2;
    std::cout << "Please input two filenames : ";
    std::cin >> name1;
    std::cin >> name2;
    fileName1 << name1 << std::endl;
    fileName2 << name2 << std::endl;

    int number1, number2;
    std::string extension1, extension2;

    fileName1 >> number1 >> extension1;
    fileName2 >> number2 >> extension2;

    if (extension1 == ".txt" && extension2 == ".txt") {
      std::cout << "The mean value of " << number1 << " and " << number2
                << " : " << (number1 + number2) / 2 << std::endl;
    } else if (extension1 == ".png" && extension2 == ".png") {
      std::cout << "The sum of " << number1 << " and " << number2 << " : "
                << number1 + number2 << std::endl;
    } else if (extension1 == ".txt" && extension2 == ".png") {
      std::cout << "The modulo division of " << number1 << " and " << number2
                << " : " << number1 % number2 << std::endl;
    } else {
      std::cerr << "There is an error! The program terminated!" << std::endl;
      break;
    }
  }

  return 0;
}