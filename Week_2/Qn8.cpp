#include <iostream>

int main() {
  int temp;
  std::cout << "Enter the temperature: ";
  std::cin >> temp;
  if(temp >=80){
    std::cout<<"Swimming\n";
  }
  else if(temp >= 60 && temp <80){
    std::cout<< "Tennis\n";
  }
  else if(temp >= 40 && temp <60){
    std::cout<< "Golf\n";
  }
  else if(temp <40){
    std::cout<< "Skiing\n";
  }
 
}