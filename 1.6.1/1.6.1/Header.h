#pragma once
#include <iostream>

void add(int numOne, int numTwo) {

	int result = numOne + numTwo;

	std::cout << "\n" << numOne << " ���� " << numTwo << " = " << result << std::endl;
}

void sub(int numOne, int numTwo) {

	int result = numOne - numTwo;

	std::cout << "\n" << numOne << " ����� " << numTwo << " = " << result << std::endl;
}

void mul(int numOne, int numTwo) {

	int result = numOne * numTwo;

	std::cout << "\n" << numOne << " �������� �� " << numTwo << " = " << result << std::endl;
}

void divi(int numOne, int numTwo) {

	int result = numOne / numTwo;

	std::cout << "\n" << numOne << " ��������� �� " << numTwo << " = " << result << std::endl;
}

void ets(int numOne, int numTwo) {

	int result = numOne;

	for (int i = 0; i < numTwo; i++) {
		result *= numOne;
	}

	std::cout << "\n" << numOne << " � ������� " << numTwo << " = " << result << std::endl;
}