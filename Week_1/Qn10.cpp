#include <iomanip>
#include <iostream>

int main() {
  std::cout << std::left << std::setw(15) << 0.123456 << std::endl;
  std::cout << std::right << std::setw(12) << std::fixed << std::setprecision(2)
            << 23.987 << std::endl;
  std::cout << std::scientific << std::setw(10) << std::setprecision(4)
            << -123.456 << std::endl;
}
