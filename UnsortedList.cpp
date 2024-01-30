
#include "UnsortedList.h"
template<class T>
UnsortedList<T>::UnsortedList() {
    length = 0;
    iterPos = 0;
}
template<class T>
void UnsortedList<T>::MakeEmpty() {

}
template<class T>
bool UnsortedList<T>::IsFull() const {
    return false;
}
template<class T>
int UnsortedList<T>::GetLength() const {
    return length;
}
template<class T>
bool UnsortedList<T>::Contains(T someItem) {
    //look at each position
    for (int i = 0; i < length; i++){
        if (arr[i] == someItem){
            return true; //found it
        }
    }
    return false;
}
template<class T>
void UnsortedList<T>::AddItem(T item) {
    //add the item
    arr[length] = item;
    length++;
}
template<class T>
void UnsortedList<T>::DeleteItem(T item) {
    //look at each position
    for (int i = 0; i < length; i++){
        if (arr[i] == item){
            //found it
            arr[i] = arr[length - 1];
            length--;
            return;
        }
    }
}
template<class T>
void UnsortedList<T>::ResetIterator() {
    iterPos = 0;
}
template<class T>
T UnsortedList<T>::GetNextItem() {
    if(iterPos >= length){
        throw "IterPos out of bounds";
    }
    return arr[iterPos++];
}

