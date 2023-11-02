#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    setlocale(0, "");

    cout << "[+] Программа: Фигуры\n[1] Линия\n[2] Квадрат\n[3] Треугольник\n\n[+] Выберите фигуру: ";
    int chs1;
    cin >> chs1;

    system("cls");

    switch (chs1)
    {
    case 1:
        // Линия
        cout << "[+] Выберите положение линии\n[1] Горизонтальная\n[2] Вертикальная\n";
        int chs2;
        cin >> chs2;

        system("cls");

        cout << "[+] Введите размер линии:";
        int size;
        cin >> size;

        system("cls");

        cout << "[+] Введите символ из которого будет состоять линия";
        char symbol[1];
        cin >> symbol[0];

        system("cls");

        if (chs2 == 1)
        {
            for (int i = 0; i < size; i++)
            {
                cout << symbol[0];
            }
        }
        else
        {
            for (int i = 0; i < size; i++)
            {
                cout << symbol[0] << "\n";
            }
        }

        break;
    case 2:
        // Квадрат
        cout << "[+] Фигура: квадрат\n[1] Полый\n[2] Заполненный\n";
        int chs3;
        cin >> chs3;

        system("cls");

        cout << "[+] Введите длинну стороны квадрата:";
        int size2;
        cin >> size2;

        system("cls");

        cout << "[+] Введите символ из которого будет состоять квадрат";
        char symbol2;
        cin >> symbol2;

        system("cls");

        if (chs3 == 1)
        {
            for (int i = 0; i < size2; i++)
            {
                for (int j = 0; j < size2; j++) 
                {
                    if (i == 0 || i == size2 - 1 || j == 0 || j == size2 - 1)
                    {
                        cout << symbol2;
                    }
                    else
                    {
                        cout << " ";
                    }
                }

                cout << "\n";
            }
        }
        else
        {
            for (int i = 0; i < size2; i++)
            {
                for (int j = 0; j < size2; j++)
                {
                    cout << setw(2) << symbol2;
                }
                cout << "\n";
            }
        }
        break;
    case 3:
        //Треугольник

        cout << "[+] Фигура: треугольник\n[1] Полый\n[2] Заполненный\n";
        int chs4;
        cin >> chs4;

        system("cls");

        cout << "[+] Введите длинну стороны треугольника:";
        int size3;
        cin >> size3;

        system("cls");

        cout << "[+] Введите символ из которого будет состоять треугольник";
        char symbol3;
        cin >> symbol3;

        system("cls");

        if (chs4 == 1)
        {
            for (int i = 1; i <= size3; i++) {
                for (int j = 1; j <= size3 - i; j++) {
                    cout << " ";
                }
                for (int j = 1; j <= 2 * i - 1; j++) {
                    if (j == 1 || j == 2 * i - 1 || i == size3) {
                        cout << symbol3;
                    }
                    else {
                        cout << " ";
                    }
                }
                cout << endl;
            }
        }
        else
        {
            for (int i = 0; i < size3; ++i)
            {
                cout << setw(size3 + i) << string(i * 2 + 1, symbol3) << endl;
            }
        }

        break;
    default:
        cout << "[+] Некорректный ввод!";
        break;
    }
}
