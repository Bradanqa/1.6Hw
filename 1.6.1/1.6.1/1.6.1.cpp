#include "Mathh.h"

int main()
{
   int num = 0;
   int numTwo = 0;
   int option = 0;

   setlocale(LC_ALL, "Russian");

   std::cout << "������� ������ �����: ";
   std::cin >> num;
   std::cout << "������� ������ �����: ";
   std::cin >> numTwo;

   std::cout << "�������� �������� (1 - ��������, 2 ���������, 3 - ���������, 4 - �������, 5 - ���������� � �������): ";
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
