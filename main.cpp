#include <QCoreApplication>
#include <QDebug>
#include <string>

using namespace std;

int binary_search(int counterElement[],int item,int length){ //реализовать для массивов
    int low = 0;
    int high = length-1;

    while (low <= high) {
        int mid = (low+high)/2;
        int guess = counterElement[mid];

        if (guess==item) {
            qDebug()<<counterElement[mid];
            return mid;
        }

        if (guess>item) {
            high = mid -1;
            qDebug()<<counterElement[mid];
        } else {
            low = mid+1;
            qDebug()<<counterElement[mid];
        }
    }
    return 0;
}


int main()
{  
    int item = 12;
    int counterElement[10] = {1,3,5,7,9,11,12,13,15,17};
    int length = sizeof (counterElement)/sizeof (counterElement[0]);
    binary_search(counterElement,item,length);

    return 0;
}
