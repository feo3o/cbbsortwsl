#include <stdio.h>

void sorter(int array[], int size)
{
    int holder;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                holder = array[j];
                array[j] = array[j + 1];
                array[j + 1] = holder;
            }
        }
    }
}

void print_array(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d \n", array[i]);
    }
}

int main()
{
    int arr[] = {1 ,3 ,2 ,7 ,6};
    int size = sizeof(arr) / sizeof(arr[0]);
    sorter(arr, size);
    print_array(arr, size);


    return 0;
}