#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(0, "");

    int rows, cols;

    cout << "Введите количество строк: ";
    cin >> rows;
    cout << "Введите количество столбцов: ";
    cin >> cols;

    system("cls");

    vector < vector<int> > matrix(rows, vector<int> (cols));

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++) 
        {
            cout << "Введите элемент [" << i << "][" << j << "]:";
            cin >> matrix[i][j];
            system("cls");
        }
    }

    cout << "Вывод матрицы:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << setw(6) << matrix[i][j] << "|\t";
        }
        cout << "\n";
    }

    cout << "\n\n";

    for (int i = 0; i < rows; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < cols; j++)
        {
            rowSum += matrix[i][j];
        }
        cout << "Сумма элементов в строке " << i << " = " << rowSum << "\n";
    }

    for (int i = 0; i < cols; i++)
    {
        int colSum = 0;
        for (int j = 0; j < rows; j++)
        {
            colSum += matrix[i][j];
        }
        cout << "Сумма элементов в столбце " << i << " = " << colSum << "\n";
    }


    return 0;
}
