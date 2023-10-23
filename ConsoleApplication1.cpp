#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");

    int chs1 = -1;

    while ((chs1 != 0) || (chs1 != 1))
    {
        cout << "[+] Программа: Фигуры\n\n" << "[1] Линия\n\n" << "[0] Выход\n\n" << "[+]Выберите фигуру: ";
        
        cin >> chs1;
        if (chs1 == 0)
        {
            return 0;
        }
        else if (chs1 == 1)
        {
            system("cls");
            break;
        }
        else
        {
            cout << "Некорректный ввод. Попробуйте снова: ";
        }

        system("cls");
    }

    int chs2 = -1;

    while ((chs2 != 1) || (chs2 != 2))
    {
        cout << "[+] Выберите положение линии\n\n" << "[1] Горизонтальная\n\n" << "[2] Вертикальная\n\n";

        cin >> chs2;

        if (chs2 == 1 || chs2 == 2)
        {
            break;
        }
        else 
        {
            cout << "Некорректный ввод. Попробуйте снова: ";
        }
    }

    system("cls");

    int lenght;

    cout << "[+] Введите размер линии: ";
    cin >> lenght;

    system("cls");

    char symbol[1];
    cout << "[+] Введите символ из которого будет состоять линия: ";
    cin >> symbol[0];

    system("cls");

    if (chs2 == 1)
    {
        for (int i = 0; i < lenght; i++) {
            cout << symbol[0];
        }
    }
    else
    {
        for (int i = 0; i < lenght; i++)
        {
            cout << symbol[0] << "\n";
        }
    }
    system("pause");
    return 0;
}
