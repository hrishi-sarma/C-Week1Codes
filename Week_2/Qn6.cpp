#include <iostream>

int main() {
  int qty, price;
  std::cout<< "Enter the quantity: ";
  std::cin>> qty;
  int cost = qty*100;
  if(cost >1000){
    price = cost - 0.1*cost;
  }
  else{
    price = cost;
  }
  std::cout<< "Total cost : "<< price;
}