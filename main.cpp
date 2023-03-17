#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cout << "Enter n: " << endl;
    cin >> n;
    cout << "Enter m: " << endl;
    cin >> m;
    int** matrix = new int* [n];
    cout << "Enter elements: " << endl;
    for(int i = 0; i < n; i++)
    {
            matrix[i] = new int[m];
            for(int j = 0; j < m; j++)
            {
                cin >> matrix[i][j];
            }
    }
    for(int i = 0; i < n / 2; i++)
    {
        swap(matrix[i], matrix[n-i-1]);
    }
    cout << "Reversed matrix: " << endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
    return 0;
}
