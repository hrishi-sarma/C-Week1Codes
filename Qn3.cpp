#include <iostream>

int main() {
  int a;
  std::cout<< "Enter the num: ";
  std::cin>> a;
  for(int i = 0; i <= 5; i++){
    for(int j = 0; j <= 3; j++){
      if(i == 1 && j== 1 || i == 1 && j== 2 || i == 2 && j == 1 || i == 2 && j == 2 || i == 3 && j == 1 || i == 3 && j == 2 || i == 4 && j == 1 || i == 4 && j == 2){
        std::cout<< " ";
      }
      else{
        std::cout<< a;
      }
    }
    std:: cout<< std::endl;
  }
}
