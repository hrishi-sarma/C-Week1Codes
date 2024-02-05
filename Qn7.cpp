#include <iostream>
#include <iomanip>


int main() {
  int a;
  long b;
  char c;
  float d;
  double e;
  std::cout << "Enter int, long, char, float and double respectively: ";

  std::cin >> a >> b>>c >>d >> e;

  std:: cout << a << " " << b << " " << c << " " << std::fixed << std::setprecision(3) << d << " " << std::fixed << std::setprecision(9) << e;
}
