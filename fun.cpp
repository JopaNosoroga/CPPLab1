#include <iostream>

int input(int a, std::string str = "Введите число: ") {
  std::cout << str;
  std::cin >> a;
  return a;
}

double input(double a, std::string str = "Введите вещественное число: ") {
  std::cout << str;
  std::cin >> a;
  return a;
}

char input(char a, std::string str = "Введите символ: ") {
  std::cout << str;
  std::cin >> a;
  return a;
}

int *inputArr(int *count) {
  std::cout << "Введите кол-во чисел в массиве: ";
  std::cin >> *count;
  int *arr{new int[*count]};
  for (int i = 0; i < *count; i++) {
    std::cout << "Введите элемент массива: ";
    std::cin >> arr[i];
  }
  return arr;
}
