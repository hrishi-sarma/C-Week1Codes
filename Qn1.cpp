#include <iostream>
#include <iomanip>

int main() {
  double pi = 3.1416;

  std::cout << "The value of pi : " << pi << std::endl;
  std::cout << "The value of pi 4 decimal place of total width 8 : |" << std::setw(8) << std::fixed << std::setprecision(4) << pi << "|" << std::endl;
  std::cout << "The value of pi 4 decimal place of total width 8 : |" << std::setw(10) << std::setprecision(4) << pi << "|" << std::endl;
  std::cout << "The value of pi 4 decimal place of total width 8 : |" << std::setw(0) << std::setprecision(4) << "--" << pi << "|" << std::endl;
  std::cout << "The value of pi 4 decimal place of total width 8 : |" << std::setw(0) << std::setprecision(4) << "----" << pi << "|" << std::endl;
  std::cout << "The value of pi in scientific format is : " << std::scientific << std::setprecision(4) << pi << std::endl;
  int num = 0;
  bool alpha = false;

  std::cout << "Status in number : " << num << std::endl;
  std::cout << "Status in alphabet : " << std::boolalpha << alpha << std::endl;
}
