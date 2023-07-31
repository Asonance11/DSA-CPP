#include <iostream>

void bubbleSort(int array[], int length);

int main()
{
    int arr[9] = {6, 2, 1, 7, 9, 5, 3, 8, 4};

    int arrayLength = 9;
    // Function call
    bubbleSort(arr, arrayLength);

    for (int i = 0; i < arrayLength; i++)
    {
        std::cout << arr[i] << " "; // prints the elements of the array after sorting
    }

    return 0;
}

// Creation of the bubbleSort algorithm

void bubbleSort(int array[], int length)
{
    for (int i = 0; i < length; i++)
    {
        for (int j = 0; j < length - 1; j++)
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