#include <iostream>

void optimizedBubbleSort(int array[], int length);

int main()
{
    int arr[] = {6, 2, 1, 7, 9, 5, 3, 8, 4};

    int arrayLength = 9;

    // Function call
    optimizedBubbleSort(arr, arrayLength);

    for (int i = 0; i < arrayLength; i++)
    {
        std::cout << arr[i] << " "; // prints the elements of the array after sorting
    }

    return 0;
}

// Creation of the optimized BubbleSort algorithm

void optimizedBubbleSort(int array[], int length)
{
    bool swapped;
    int i = 0;
    do
    {
        swapped = false;
        for (int j = 0; j < length - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = true;
            }
        }
        i++;
    } while (swapped);
}