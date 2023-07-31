#include <iostream>

void bubbleSort(int array[9]);

int main()
{
    int arr[9] = {6, 2, 1, 7, 9, 5, 3, 8, 4};

    // Function call
    bubbleSort(arr);

    for (int i = 0; i < 9; i++)
    {
        std::cout << arr[i] << " "; // prints the elements of the array after sorting
    }

    return 0;
}

// Creation of the bubbleSort algorithm

void bubbleSort(int array[9])
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}