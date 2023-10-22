#include "Counter.h"

Counter::Counter() {
   counter1 = 1;
}

Counter::Counter(int counter1) {
   this->counter1 = counter1;
};

void Counter::addCounter(){
   ++counter1;
}

void Counter::subCounter() {
   --counter1;
}

void Counter::printCounter() {
   std::cout << counter1;
   std::cout << std::endl;
}

bool Counter::setOptions() {
   char option;
   std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
   std::cin >> option;

   switch (option) {
   case '+':
      this->addCounter();
      return true;
      break;
   case '-':
      this->subCounter();
      return true;
      break;
   case '=':
      this->printCounter();
      return true;
      break;
   case 'x':
      std::cout << "До свидания!";
      return false;
   default:
      return false;
   }
}