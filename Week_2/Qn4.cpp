#include <iostream>

int main() {
  double height, weight;
  std::cout<< "Enter your height : ";
  std::cin>> height;
  std::cout << "Enter your weight : ";
  std::cin >> weight;
  std::cout << "Your BMI is : "<< weight/(height*height);
}