#include <iostream>
using namespace std;
int main()
{
    int array[] = {6, 5, 4, 1, 2, 3};
    int n = sizeof(array) / sizeof(array[0]);
    int numberOfSwap = 0;
    int numberOfComp = 0;
    for (int i = 0; i < n - 1; i++)
    {
        bool is_swap = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            numberOfComp++;
            if (array[j + 1] < array[j])
            {
                numberOfSwap++;
                is_swap = true;
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
        if (!is_swap)
            break;
    }
    cout << "number of swap :" << numberOfSwap << endl;
    cout << "numer of comparison :" << numberOfComp << endl;
    for (int i : array)
    {
        cout << i << " ";
    }
}