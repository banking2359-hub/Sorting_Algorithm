#include <iostream>
using namespace std;
int main()
{
    int array[] = {5, 9, 4, 1,3};
    int n = sizeof(array) / sizeof(array[0]);
    int temp;
    for (int i = 0; i < n - 1; i++)
    {

        int smaller_index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (array[j] < array[smaller_index])
                smaller_index = j;
        }
        if (smaller_index != i)
        {
            int temp = array[i];
            array[i] = array[smaller_index];
            array[smaller_index] = temp;
        }
    }
    for (int i : array)
    {
        cout << i << " ";
    }
}