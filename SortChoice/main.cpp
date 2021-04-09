#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace std;

int findSmall(int arr[],int length) {
    int smallest = arr[0];
    int smallestIndex = 0;
    for (int i = 1; i<length; i++) {
        if(arr[i]<smallest) {
            smallest = arr[i];
            smallestIndex = i;
        }
    }
    return smallestIndex; //из двух наименьший возвращает
}

int selectionSort (int arr[], int length) {
    int newArr [5] = {};
    for (int i = 0; i<length; i++) {
        int smallest = findSmall(arr,length);

    }
}

int main()
{
    int arr[5] = {5,3,6,2,10};
    int length = sizeof (arr)/sizeof (arr[0]);
    findSmall(arr,length);

    return 0;

}
