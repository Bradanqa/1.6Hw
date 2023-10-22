#include "IssoTriangle.h"

IssoTriangle::IssoTriangle(int a, int b, int A) : Triangle(a,b,a,A,180 - A * 2,A) {
   this->a = a;
   this->b = b;
   this->c = a;
   this->A = A;
   this->B = 180 - A * 2;
   this->C = A;
}

void IssoTriangle::print_info() {
   std::cout << "�������������� �����������: " << std::endl;
   std::cout << "�������: " << "a=" << a << " b=" << b << " c=" << c << std::endl;
   std::cout << "����: " << "A=" << A << " B=" << B << " C=" << C << std::endl;
}