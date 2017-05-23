//  File: main.cpp
//  COMP 235 Bubble Sort Template
//  Programmer: Alex
//  Created by alex on 2/7/17.
//  Purpose: Demonstrate template bubble sort with multiple data types

#include <iostream>
using namespace std;

// convert to template
template <typename T>
void bubbleSort(T array[], int arraySize) {
    bool needNextPass = true;
    for (int k = 1; k < arraySize && needNextPass; k++)
    {
        // Array may be sorted and next pass not needed
        needNextPass = false;
        for (int i = 0; i < arraySize - k; i++)
        {
            if (array[i] > array[i + 1])
            {
                // Swap arr[] with list[i + 1]
                T temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                
                needNextPass = true; // Next pass still needed
            }
        }
    }
}

int main() {
    const int SIZE = 10;
    int list[] = {7, 5, 4, 9, 8, 3, 1, 2, 6, 0};
    cout << "Unsorted integer list: " << endl;
    for (int i = 0; i < SIZE; i++)
        cout << list[i] << " ";
    bubbleSort(list, SIZE);
    cout << endl;
    cout << "Now sorted integer  list: " << endl;
    for (int i = 0; i < SIZE; i++)
        cout << list[i] << " ";
    cout << endl;
    char lets[] = {'e', 'e', 'c', 'f', 'a', 'f', 't', 'r', '\0', 'o'};
    cout << "Unsorted char list: " << endl;
    for (int i = 0; i < SIZE; i++)
        cout << lets[i] << " ";
    bubbleSort(lets, SIZE);
    cout << endl;
    cout << "Now sorted char  list: " << endl;
    for (int i = 0; i < SIZE; i++)
        cout << lets[i] << " ";
    cout << endl;
    return 0;
}
