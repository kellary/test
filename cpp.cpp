#include <iostream>
#include "windows.h"
#include <iomanip>

using namespace std;
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int cnt = 0;
    int a, b, c;
    cout << "\nВведіть A:";
    cin >> a;
    if (a > 0) cnt++;
    cout << "\nВВедіть B:";
    cin >> b;
    if (b > 0) cnt++;
    cout << "\nВВедыть C:";
    cin >> c;
    if (c > 0) cnt++;
    if (cnt == 2) cout << "Позитивне"; else
    {
        cout << "Негавтивне";
        system("pause");
        return 0;
    }
}
