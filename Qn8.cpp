#include <iostream>

int main() {
  std::cout << "Enter 1 to convert to Fahrenheit & 2 to convert to Celsius: ";
  int choice;
  std::cin >> choice;

  if (choice == 1){
    std::cout << "Enter the Temperature in Celcius: ";
    float temp;
    std::cin >> temp;
    std::cout << "Temperature in Fahrenheit is: " << (temp*9/5) + 32;
  }
  else if(choice == 2){
    std::cout << "Enter the Temperature in Fahrenheit: ";
    float temp;
    std::cin >> temp;
    std::cout << "Temperature in Celcius is: " << (temp)*5/9 -32;
  }
  else{
    std::cout << "Invalid Input";
  }
}
