#include <iostream>

int main() {
  int salary_annual;
  std::cout << "Enter the salary: ";
  std::cin >> salary_annual;
  int monthly = salary_annual/12;
  int new_monthly = monthly + (monthly*11.5/100);
  int new_salary_annual = new_monthly*12;
  std::cout << "New annual salary: " << new_salary_annual << std::endl << "New monthly salary: " << new_monthly << std::endl << "Old monthly salary: "<< monthly<< std::endl<< "Exact amount received: "<< monthly*11.5/100;
}