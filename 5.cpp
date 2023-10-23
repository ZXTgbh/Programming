#include <iostream>

int main()
{
    int arrInt[10] = {22, 43, 765, -3, 97, 0, 295, -4582, 7, 9};
    short arrShort[10] = {-44, 63, 77, 32, 87, 23, 92, 94, 32, 250};
    long arrLong[10] = {666435633, 0, 2553227, 32, 7433, -89899, 265, 7322, 477372, -10227222};
    float arrFloat[10] = {-23.0, 14.88, 23.4, -86252.22242, -5633.546346, 7436.42237, 995333.443, 1864.447, -883.55, 56432.009775};
    double arrDouble[10] = {553966.333, 4743733474.728472478, 64464587.5678765, 3456765.56765, 567.3456776543456666654, 6743655778.6787653, 14884459.52677953387, 9557755882.8634545, 783345.64, 44884745.333333333};
    char arrChar[10] = {'#', '$', 'R', 'V', '^', '&', 'J', '<', 'O', '%'};
    bool arrBool[10] = {true, true, false, true, false, true, true, true, false, false};

    for (int i = 0; i < 10; i++)
    {
        std::cout << arrInt[i] << " ";
    }

    std::cout << "\n";

    for (int i = 0; i < 10; i++)
    {
        std::cout << arrShort[i] << " ";
    }

    std::cout << "\n";

    for (int i = 0; i < 10; i++)
    {
        std::cout << arrLong[i] << " ";
    }

    std::cout << "\n";

    for (int i = 0; i < 10; i++)
    {
        std::cout << arrFloat[i] << " ";
    }

    std::cout << "\n";

    for (int i = 0; i < 10; i++)
    {
        std::cout << arrDouble[i] << " ";
    }

    std::cout << "\n";

    for (int i = 0; i < 10; i++)
    {
        std::cout << arrChar[i] << " ";
    }

    std::cout << "\n";

    for (int i = 0; i < 10; i++)
    {
        std::cout << arrBool[i] << " ";
    }

    std::cout << "\n";

    system("pause");

    return 0;
}