#include <iostream>
#include <cstring>
#include <cstdlib>

int main() {
  int a , b;
  std::cout << "Enter the numbers : ";
  std::cin >> a >> b;
  
  int result = a + b;
  std::string digits = std::to_string(result);
  std::cout << "Sum : " << result << std::endl << "num of digits : " << digits.size();
  
}
