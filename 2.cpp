#include <iostream> // подключаем заголовки для классов ввода/вывода (потоки cin и cout)
#include <cmath> // подключаем заголовки для математических функций (для того, чтобы юзать функцию pow)
using namespace std; // подключаем пространство имен std, если этого не сделать придется писать std::cin вместо cin

int main()
{ // начало функции main
  int n; // целочисленная переменная для хранения количества элементов массива
  int sum = 0; //объявляем что сумма равна нулю
  int geom = 1; // здесь, будет произведение элементов массива

  cout << "Введите кол-во чисел массива: " ;
  cin >> n; // вводим фактическое число элементов, объект cin имеет перегруженный оператор >>,
  // использемый для ввода в переменную справа
  //int a[1024]; // сам массив, с большим запасом на случай, если юзер захочет много элементов
  int a[n]; // сам массив, с большим запасом на случай, если юзер захочет много элементов

  for (int j = 0; j < n; ++j) { // цикл for по переменной j; на первом шаге инициализируем ее нулем,
    // перед каждой новой итерации производим инкремент,
    // а в конце итерации проверяем, не достигла ли j значения n
    cout << "Введите a[" << j << "]; ";
    // объект cout аналогичен cin, но используется для вывода на экран,
    //для этого используется оператор <<  этот оператор возвращает опять же объект cout,
    // поэтому мы можем строить такие цепочки cout << что_то_для_вывода << что_то_еще << ..
    cin >> a[j]; // вводим c с клавиатуры целое число и сохраняем его в j-ый элемент массива a

    sum += a[j]; // прибавляем к общей сумме текущий элемент массива, значение которого мы только что ввели
    geom *= a[j]; // умножаем общее произведение на текущий элемент
  } // конец цикла

  double middle_geom = pow(double(geom), 1.0 / n);
  // возводим произведение элементов в степень 1/n - получаем среднее геометрическое

  cout << "Ваш массив: ["; // выводим текст
  for (int j = 0; j < n - 1; ++j) // цикл до n-1 элемента, так как последний элемент нужно выводить без запятой
    cout << a[j] << ", "; // выводим j-ый элемент массива и запятую в конце
  cout << a[n - 1] << "]" << endl; // выводим последний элемент и символ новой строки endl

  cout << "Сумма чисел массива равна: " << sum << endl; // выводим посчитанное
  cout << "Среднее арифметическое: " << double(sum) / n << endl;
  cout << "Среднее геометрическое: " << middle_geom << endl;

  return 0; // выход из функции main с кодом возврата 0 (нормальное завершение прграммы)
}