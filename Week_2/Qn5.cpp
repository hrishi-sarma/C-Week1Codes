#include <iostream>

int main() {
  int n;
  std::cout<< "Enter the size of array: ";
  std::cin>> n;
  int arr[n];
  std::cout << "Enter " << n << " integer values:\n";
  for(int i = 0; i<n; i++){
    std::cin>> arr[i];
  }
  std::cout<< "Values in dynamically allocated array:\n";
  for(int i = 0; i<n; i++){
    std::cout<<arr[i]<< " ";
  }

  std::cout << "\n";

  delete[] arr;

  
  
  return 0;
}