#pragma once
#include <iostream>
#include <locale.h>
#include <string>

class Counter {
public:
   Counter();
   Counter(int counter1);

   void addCounter();
   void subCounter();
   void printCounter();
   bool setOptions();

private:
   int counter1;
};