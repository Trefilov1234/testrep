#include <iostream>
using namespace std;

void main()
{
    int size = 10;
    int n;
    int* mas = new int[size];
    cout << "введите n" << endl;
    cin >> n;
    size = 2 * n + 1;
    int k = 1;
    for (int i = 0; i < size; i++)
    {
        mas[i] = k;
        if (k == n)
        {
            k = 0;
        }
        k++;

    }
    for (int i = 0; i < size; i++) cout << mas[i] << " ";
}