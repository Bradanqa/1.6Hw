#include "Counter.h"

int main() {
   setlocale(LC_ALL, "Russian");

   std::string option;
   int count;
   char userOption;
   bool cycle = true;

   std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���: ";
   std::cin >> option;
   std::cout << std::endl;

   if (option == "��") {
      std::cout << "������� ��������� �������� ��������: ";
      std::cin >> count;
      Counter* counter = new Counter(count);
      while (cycle) {
         cycle = counter->setOptions();
      }
      delete counter;
   }
   else if (option == "���") {
      Counter *counter = new Counter();
      while (cycle) {
         cycle = counter->setOptions();
      }
      delete counter;
   }
   else
      return 1;

   return 0;
}