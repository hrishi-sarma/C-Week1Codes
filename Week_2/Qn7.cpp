#include <iostream>

int main() {
  int marks;
  std::cout << "Enter your marks: ";
  std::cin >> marks;
  if(marks > 80){
    std::cout<<"Grade A";
  }
  else if(marks >60 && marks <= 80){
    std::cout<<"Grade B";
  }
  else if(marks >50 && marks <= 60){
    std::cout<<"Grade C";
  }
  else if(marks >45 && marks <= 50){
    std::cout<<"Grade D";
  }
  else if(marks >25 && marks <= 45){
    std::cout<<"Grade B";
  }
  else{
    std::cout<<"Grade F";
  }
}