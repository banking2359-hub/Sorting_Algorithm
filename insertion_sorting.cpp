#include <iostream>
using namespace std;
int main()
{
    int array[] = {5, 9, 6, 98, 68, 5, 1};
    int n = sizeof(array) / sizeof(array[0]);

    for (int i = 1; i < n; i++)
    {
        int empty_space = i;
        int temp = array[i];
        for (int j = i - 1; j >= 0; j--)
        {
            if (temp < array[j])
            {
                array[j + 1] = array[j];
                empty_space = j;
            }
            else
                break;
        }
        array[empty_space] = temp;
    }
    for (int i : array)
    {
        cout << i << " ";
    }
}