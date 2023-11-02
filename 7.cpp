#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void fillArr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100;
    }

    cout << "Массив: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    setlocale(0, "");
	int arr1[5], arr2[10];

    fillArr(arr1, 5);
    fillArr(arr2, 10);

	return 0;
}
