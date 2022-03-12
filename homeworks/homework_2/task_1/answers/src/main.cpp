#include <iostream>
#include <random>

int main() {

  std::random_device rd;
  int randomNumber = rd() % 100;
  int userNumber;
  do {
    std::cout << "Please input any number : ";
    std::cin >> userNumber;

    if (userNumber > 99 || userNumber < 0) {
      std::cerr << "WARNING : Number must be between 0 and 99" << std::endl;
    } else if (std::cin.fail()) {
      std::cerr << "Error encountered. Exiting..." << std::endl;
      break;
    }

    if (userNumber == randomNumber) {
      std::cout << "You have guessed the number and you have won." << std::endl;
    } else if (randomNumber < userNumber) {
      std::cout << "Number is smaller. Try again." << std::endl;
    } else if (randomNumber > userNumber) {
      std::cout << "Number is larger. Try again." << std::endl;
    }
  } while (userNumber != randomNumber);

  std::cout << "Generated Number is : " << randomNumber << std::endl;

  return 0;
}