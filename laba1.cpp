#include <iostream>


// Часть 1

double fraction(double x) { return x - int(x); }

int sumLastNums(int x) { return x % 10 + ((x / 10) % 10); }

int charToNum(char x) { return int(x) - 48; }

bool isPositive(int x) { return x >= 0; }

bool is2Digits(int x) { return x >= 10 && x < 100; }

// Часть 2

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
  else if ((x % 3) == 0)
    return true;
  else if ((x % 5) == 0)
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
  
  if (x >= y && x >= z)
    return x;
  else if (y >= x && y >= z)
    return y;
  return z;
}

// Часть 3

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

// Часть 4
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
    newArr[i + flag] = arr[i + flag];
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
// Функции для облегчения ввода
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

int main() {
    setlocale(LC_ALL, "Russian");
    int x = 1;
    std::cout << "Введите номер задачи" << std:: endl;
    std::cin >> x;
    switch (x) {
        case 1:
            double x1;
            x1 = input(x1);
            std::cout << "Дробная часть вашего числа: " << fraction(x1) << std::endl;
            break;
        case 2:
            int x2;
            x2 = input(x2);
            std::cout << "Сумма двух последних знаков числа: " << sumLastNums(x2)
                << std::endl;
            break;
        case 3:
            char x3;
            x3 = input(x3, "Введите символ от 0 до 9: ");
            std::cout << "Вывод цифры в int: " << charToNum(x3) << std::endl;
            break;
        case 4:
            int x4;
            x4 = input(x4);
            std::cout << "Если число положительное вернёт 1 иначе 0: " << isPositive(x4)
                << std::endl;
            break;
        case 5:
            int x5;
            x5 = input(x5);
            std::cout << "Если введённое число двузначное то 1 инча 0: "
                << is2Digits(x5) << std::endl;
            break;
        case 6:
            int x6;
            x6 = input(x6);
            std::cout << "Модуль введёного числа: " << absi(x6) << std::endl;
            break;
        case 7:
            int x7, y7;
            x7 = input(x7);
            y7 = input(y7);
            std::cout << "Результат деления первого числа на второе: "
                << safeDiv(x7, y7) << std::endl;
            break;
        case 8:
            int x8;
            x8 = input(x8);
            std::cout << "Если число делится на 3 или на 5 то 1, если на оба то 0: "
                << is35(x8) << std::endl;
            break;
        case 9:
            int x9, y9;
            x9 = input(x9, "Введите цифру: ");
            y9 = input(y9, "Введите цифру: ");
            std::cout << makeDecision(x9, y9) << std::endl;
            break;
        case 10:
            int x10, y10, z10;
            x10 = input(x10);
            y10 = input(y10);
            z10 = input(z10);
            std::cout << "Наибольшее число из введённых: " << max3(x10, y10, z10)
                << std::endl;
            break;
        case 11:
            int x11;
            x11 = input(x11);
            std::cout << "Все числа от 0 до введённого числа: " << listNums(x11)
                << std::endl;
            break;
        case 12:
            int x12;
            x12 = input(x12);
            std::cout << "Все числа от введённого числа до 0: " << reverseListNums(x12)
                << std::endl;
            break;
        case 13:
            int x13;
            x13 = input(x13);
            std::cout << "Все чётные числа от 0 до x: " << chet(x13) << std::endl;
            break;
        case 14:
            int x14, y14;
            x14 = input(x14);
            y14 = input(y14);
            std::cout << x14 << " в степени " << y14 << " = " << pow(x14, y14)
                << std::endl;
            break;
        case 15:
            long x15;
            std::cout << "Введите число: ";
            std::cin >> x15;
            std::cout << "Кол-во цифр в числе: " << numLen(x15) << std::endl;
            break;
        case 16:
            int x16, count16;
            int* ptr16;
            ptr16 = inputArr(&count16);
            x16 = input(x16);
            std::cout << "Первое вхождение числа находится по индексу: "
                << findFirst(ptr16, x16, count16) << std::endl;
            delete ptr16;
            break;
        case 17:
            int x17, count17;
            int* ptr17;
            ptr17 = inputArr(&count17);
            x17 = input(x17);
            std::cout << "Последние вхождение числа находится по индексу: "
                << findLast(ptr17, x17, count17) << std::endl;
            delete ptr17;
            break;
        case 18:
            int* ptr18;
            int count18;
            ptr18 = inputArr(&count18);
            std::cout << "Наибольшее число мо модулю в этом массиве: "
                << maxAbs(ptr18, count18) << std::endl;

            delete ptr18;
            break;
        case 19:
            int* ptr19;
            int x19, pos19, count19;
            ptr19 = inputArr(&count19);
            x19 = input(x19);
            pos19 = input(pos19, "Введите позицию на которую вставить это число: ");
            ptr19 = add(ptr19, x19, pos19, count19);
            std::cout << "Новый массив: ";
            for (int i = 0; i < count19; i++)
                std::cout << *(ptr19 + i) << ' ' << std::endl;
            delete ptr19;
            break;
        case 20:
            int* ptr20, * NewArr;
            int count20;
            ptr20 = inputArr(&count20);
            NewArr = deleteNegative(ptr20, count20);
            std::cout << "Массив без отрицательных значений: " << std::endl;
            for (int i = 0; i < count20; i++)
                std::cout << *(NewArr + i) << ' ' << std::endl;
            delete ptr20;
            break;
    }
}
