#include <iostream>

int main() {
  int n1, n2, d1, d2;
  std::cout << "Enter the 1st fraction: ";
  std::cin>> n1;
  std::cin.ignore();
  std::cin>> d1;

  std::cout << "Enter the 2nd fraction: ";
  std::cin>> n2;
  std::cin.ignore();
  std::cin>> d2;

  std::cout<< "Sum= " << n1*d2+n2*d1 << "/" << d1*d2;

}
