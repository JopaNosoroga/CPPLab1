#include <iostream>

// Zadanie number 1

double fraction(double x) { return x - int(x); }

int sumLastNums(int x) { return x % 10 + ((x / 10) % 10); }

int charToNum(char x) { return int(x) - 48; }

bool isPositive(int x) { return x >= 0; }

bool is2Digits(int x) { return x >= 10 && x < 100; }

// Zadanie number 2

int absi(int x) {
  if (x < 0)
    return x * -1;
  return x;
}

double safeDiv(int x, int y) {
  if (y == 0)
    return 0;
  return (double)x / y;
}

bool is35(int x) {
  if ((x % 3) == 0 && (x % 5) == 0)
    return false;
  else if (((x % 3) == 0) || ((x % 5) == 0))
    return true;
  return false;
}

std::string makeDecision(int x, int y) {
  if (x > y)
    return std::string{char(x + 48), '>', char(y + 48)};
  else if (x < y)
    return std::string{char(x + 48), '<', char(y + 48)};
  return std::string{char(x + 48), '=', '=', char(y + 48)};
}

int max3(int x, int y, int z) {
  /*
  if (x >= y && x >= z)
    return x;
  else if (y >= x && y >= z)
    return y;
  return z;
  */
  return (x * ((x > y) && (x > z))) + (y * ((y >= x) && (y > z))) +
         (z * ((z >= y) && (z >= x))) - 2 * x * (x ==y && y == z);
}

// Zadanie number 3

std::string listNums(int x) {
  std::string result = "";
  result += '0';
  for (int i = 1; i <= x; i++) {
    result += ' ';
    result += char(i + 48);
  }
  return result;
}

std::string reverseListNums(int x) {
  std::string result = "";
  result += char(x + 48);
  for (int i = x - 1; i >= 0; i--) {
    result += ' ';
    result += char(i + 48);
  }
  return result;
}

std::string chet(int x) {
  std::string result = "";
  result += '0';
  for (int i = 2; i <= x; i += 2) {
    result += ' ';
    result += char(i + 48);
  }
  return result;
}

int pow(int x, int y) {
  int result = 1;
  for (int i = 0; i < y; i++)
    result *= x;
  return result;
}

int numLen(long x) {
  int k = 0;
  while (x > 0) {
    k++;
    x /= 10;
  }
  return k;
}

// Zadanie number 4
int findFirst(int arr[], int x, int count) {
  for (int i = 0; i < count; i++) {
    if (arr[i] == x)
      return i;
  }
  return -1;
}

int findLast(int arr[], int x, int count) {
  for (int i = count - 1; i >= 0; i--) {
    if (arr[i] == x)
      return i;
  }
  return -1;
}

int maxAbs(int arr[], int count) {
  int max = 0;
  for (int i = 0; i < count; i++) {
    if (arr[i] < 0 && (arr[i] * -1) > max)
      max = arr[i] * -1;
    else if (arr[i] > max)
      max = arr[i];
  }
  return max;
}

int *add(int arr[], int x, int pos, int count) {
  int k = count + 1;
  int *newArr = new int[k];
  pos -= 1;
  int flag = 0;
  for (int i = 0; i < k; i++) {
    if (i == pos) {
      newArr[i] = x;
      flag += 1;
    }
    newArr[i + flag] = arr[i];
  }
  return newArr;
}

int *deleteNegative(int arr[], int &count) {
  int k = 0;
  for (int i = 0; i < count; i++) {
    if (arr[i] >= 0)
      k++;
  }
  int *newArr = new int[k];
  k = 0;
  for (int i = 0; i < count; i++) {
    if (arr[i] >= 0) {
      newArr[k] = arr[i];
      k++;
    }
  }
  count = k;
  return newArr;
}
// Happy end!!
