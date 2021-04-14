#include <QCoreApplication>
#include <QDebug>
#include <iostream>

using namespace  std;

void selectionSort (int arr[],int index) {

    int min = 0;
    int buf = 0;

    for (int i=0; i<=index ; i++) {

        min =i;
        for (int j = i+1; j<= index; j++) {
            min = (arr[j]<arr[min]) ? j : min;
        }
            if(i !=min) {
                buf = arr[i];
                arr[i] =arr[min];
                arr[min] = buf;
            }
        }

    for (int i = 0; i< index;i++) {
        cout<< arr[i]<<endl;
    }
}


int main()
{
   const int index=5;
   int arr[index] = {5,3,6,2,10};
   selectionSort(arr,index);
   return 0;
}

//------------------//
//* j=i+1  -  после прохода внутреннего цикла for , будет найден min элемент, без swap
// (найденная позиция с нулевой).Затем после прохода for swap с нулевым элементом о чем
// и говорит j=i+1, далее мещение на позицию и заново поиск наименьшего.
//* необходимо помнить что при  const int index=5; в массиве последний элемент
// детерминирующий ноль.
