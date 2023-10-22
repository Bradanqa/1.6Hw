#include <iostream>
#include "Rhomb.h"
#include "Para.h"
#include "Square.h"
#include "Rectangle.h"
#include "EquTriangle.h"
#include "IssoTriangle.h"
#include "RightTriangle.h"

int main() {
   setlocale(LC_ALL, "Russian");

   Triangle triangle(10, 20, 30, 50, 60, 70);
   RightTriangle rightTriangle(10, 20, 30, 50, 60);
   IssoTriangle issoTriangle(10, 20, 50);
   EquTriangle equTriangle(30);

   Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
   Rectangle rectangle(10, 20);
   Square square(20);
   Para para(20, 30, 30, 40);
   Rhomb rhomb(30, 30, 40);

   triangle.print_info();
   rightTriangle.print_info();
   issoTriangle.print_info();
   equTriangle.print_info();
   quadrangle.print_info();
   rectangle.print_info();
   square.print_info();
   para.print_info();
   rhomb.print_info();

   return 0;
}