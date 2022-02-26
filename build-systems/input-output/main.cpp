#include <iostream>

int main(){
    
    int number;                                                 //Declaration of a new variable                    
    std::cout << "Please input any number" << std::endl;        //Print "Please input any number" to the screen
    std::cin >> number;                                         //assigning the entered number value to the variable
    std::cout << "number = " << number << std::endl;            //print number to the screen
    std::cerr << "Boring error message" << std::endl;           //print error message to the screen

    return 0;

}
