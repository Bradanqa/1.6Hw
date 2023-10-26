#include "Mathh.h"

int main()
{
   int num = 0;
   int numTwo = 0;
   int option = 0;

   setlocale(LC_ALL, "Russian");

   std::cout << "¬ведите первое число: ";
   std::cin >> num;
   std::cout << "¬ведите второе число: ";
   std::cin >> numTwo;

   std::cout << "¬ыберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
   std::cin >> option;

   switch (option)
   {
   case 1:
      add(num, numTwo);
      break;

   case 2:
      sub(num, numTwo);
      break;

   case 3:
      mul(num, numTwo);
      break;

   case 4:
      divi(num, numTwo);
      break;

   case 5:
      ets(num, numTwo);
      break;

   default:
      break;
   }
}
