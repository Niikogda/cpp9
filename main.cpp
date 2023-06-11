#include <iostream>
#include <vector>
#include <Windows.h>

using namespace std;

void AddRowTo2DArray(vector<vector<int>>& array2D, const vector<int>& row)
{
    array2D.push_back(row);
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    vector<vector<int>> array2D;

    array2D.push_back({ 1, 2, 3 });
    array2D.push_back({ 4, 5, 6 });

   
    vector<int> newRow = { 7, 8, 9 };

    AddRowTo2DArray(array2D, newRow);

    
    for (const auto& row : array2D)
    {
        for (const auto& element : row)
        {
            cout << element << " ";
        }
        cout << endl;
    }

    return 0;
}
