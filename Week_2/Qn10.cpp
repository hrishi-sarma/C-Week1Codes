#include <iostream>

int main() {
  int marks;
  std::cout << "Enter the marks percentage: ";
  std::cin >> marks;
  if(marks >= 85){
    std::cout << "E";
  }
  else if(marks >= 75 && marks <85){
      std::cout << "O";
    }
  else if(marks >= 65 && marks <75){
    std::cout << "G";
  }
  else if(marks >= 50 && marks <65){
    std::cout << "S";
  }
  else if(marks < 50){
    if(marks >= 33){
      std::cout << "Resit";
    }
    else{
      std::cout << "Redo";
    }
  }

}