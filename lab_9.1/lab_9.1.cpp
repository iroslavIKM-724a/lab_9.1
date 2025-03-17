#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    setlocale(LC_CTYPE, "ukr");
    const int rows = 4, cols = 4;
    int array[rows][cols];


    cout << "Двовимірний масив:" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            array[i][j] = rand() % 20 + 1;
             cout << array[i][j] << "\t";
        }
        cout << endl;
    }


    int k;
    cout << "Введіть значення k: ";
    cin >> k;

    vector<int> sum_indices_elements;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) 
        {
            if (i + j == k) 
            {
                sum_indices_elements.push_back(array[i][j]);
            }
        }
    }

    double average = 0;
    if (!sum_indices_elements.empty()) 
    {
        for (int num : sum_indices_elements) 
        {
            average += num;
        }
        average /= sum_indices_elements.size();
    }
    cout << "Середнє арифметичне елементів із сумою індексів " << k << ": " << average << endl;

    
    vector<int> even_elements;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (array[i][j] % 2 == 0) 
            {
                even_elements.push_back(array[i][j]);
            }
        }
    }

    cout << "Одновимірний масив із парних елементів: ";
    for (int num : even_elements)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
