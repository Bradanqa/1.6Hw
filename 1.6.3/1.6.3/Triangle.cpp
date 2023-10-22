#include "Triangle.h"

Triangle::Triangle(int a, int b, int c, int A, int B, int C) : Figure() {
   this->a = a;
   this->b = b;
   this->c = c;
   this->A = A;
   this->B = B;
   this->C = C;
}

void Triangle::print_info() {
   std::cout << "�����������: " << std::endl;
   std::cout << "�������: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
   std::cout << "����: " << "A=" << A << " B=" << B << " C=" << C << std::endl;
}