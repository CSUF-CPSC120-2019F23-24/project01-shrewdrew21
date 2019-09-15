// Name: Andrew Martin
// This program calculates and displays business expenses.

#include <iostream>
#include <iomanip>
int main()
{
  std::string location;
  int days;
  double hotel;
  double meal;

  std::cout << "What is the business trip location?";
  std::cin >> location;
  std::cout << "How many days will the trip take?";
  std::cin >> days;
  std::cout << "What is the total hotel expense?";
  std::cin >> hotel;
  std::cout << "what is the total meal expense?";
  std::cin >> meal;
  std::cout << std::setw(15) << "location" << std::setw(6) << "days" << std::setw(10) << "hotel" << std::setw(10) << "meal" << "\n";gi
  std::cout << std::setw(15) << location << std::setw(6) << days << std::setw(10) << hotel << std::setw(10) << meal << "\n";
}
