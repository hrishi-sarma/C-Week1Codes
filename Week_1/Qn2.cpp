#include <iostream>
#include <cmath>

int main() {
  double a,b,c; 
  
  std::cout << "Enter the 1st side: "<< std::endl;
  std::cin >> a;
  std::cout << "Enter the 2nd side: "<< std::endl;
  std::cin >> b;
  std::cout << "Enter the 3rd side: "<< std::endl;
  std::cin >> c;
  double s = (a+b+c)/2;
  double area = sqrt(s*(s-a)*(s-b)*(s-c));

  std::cout<< "The area of the triangle is: " << area << std::endl;
}
