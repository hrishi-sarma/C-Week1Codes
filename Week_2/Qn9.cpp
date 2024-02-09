#include <iostream>

int main() {
  int salary, rating;
  std::cout << "Enter the current salary: ";
  std::cin >> salary;
  std::cout << "Enter the performance rating (1-3): ";
  std::cin >> rating;
  if(rating == 1){
    std::cout<<"New salary: "<< salary*6/100 + salary;
  }
  else if(rating == 2){
      std::cout<<"New salary: "<< salary*4/100 + salary;
    }
  else if(rating == 3){
    std::cout<<"New salary: "<< salary*1.5/100 + salary;
  }
  else{
    std::cout<<"No raise for you";
  }
 
}