/*Написать ф-ю, которая воспринимает время как 3
целых аргумента - часы, минуты и секунды, и возвращает
кол-во секунд, прошедших со времени, когда часы в последний раз
показали 12. Исп. эту ф-ю для вычисления интервала времени в секундах
между 2 моментами, находящимися внутри 12-часового цикла*/
#include <iostream> /// Подключение потокового ввода-вывода
#include <math.h>   /// Подключение математической библиотеки
using namespace std;
int Difference1(int, int, int);
/**
 * @brief Main - основная функция программы. Тип функции - int.
 *
 * После успешного выполнения возвращает ноль.
 * @return 0 - успешное выполнение программы, 1 - аварийная остановка программы
 *
 */
int main()
{
    int H, M, S, h, m, s;
    cout << "Type in the first period of time (hours, minutes, seconds): ";
    cin >> H >> M >> S;
    int interval1 = Difference1(H, M, S);

    cout << "Type in the second period of time (hours, minutes, seconds): ";
    cin >> h >> m >> s;
    int interval2 = Difference1(h, m, s);
    int result = abs(interval1 - interval2);
    cout << "The difference between these periods equals: " << result << endl;
    system("pause");
    return 0;
}

/**
 * @brief Функция целочисленного значения. Переводит часы, минуты и секунды в секунды
 *
 * @param H Введенные пользователем часы (тип int)
 * @param M Введенные пользователем минуты (тип int)
 * @param S Введенные пользователем секунды (тип int)
 * @return Возвращаемое значение - число типа int
 */
int Difference1(int H, int M, int S)
{
    return H * 3600 + M * 60 + S;
}
