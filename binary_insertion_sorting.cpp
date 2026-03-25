#include <iostream>
using namespace std;

int main()
{
    int array[] = {5, 9, 6, 98, 68, 5, 1};
    int n = sizeof(array) / sizeof(array[0]);

    for (int i = 1; i < n; i++)
    {
        int temp = array[i];
        int left = 0;
        int right = i - 1;

        // 1. Use Binary Search to find the insertion point
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (temp < array[mid])
                right = mid - 1;
            else
                left = mid + 1;
        }

        // The correct position is now at 'left'
        int empty_space = left;

        // 2. Shift all elements to the right to create the hole
        for (int j = i - 1; j >= empty_space; j--)
        {
            array[j + 1] = array[j];
        }

        // 3. Place the temp value in the empty space
        array[empty_space] = temp;
    }

    // Output the sorted array
    for (int i : array)
    {
        cout << i << " ";
    }
    return 0;
}