#include <iostream>
#include "intLinkedList.h"

using namespace std;

void test() {
    intLinkedList list;
    intLinkedList evensList;
    intLinkedList oddsList;

    cout << "Enter integers ending with -999" << endl;
    int num;
    cin >> num;
    while (num != -999) {
        list.insertLast(num);
        cin >> num;
    }
    cout << "list: ";
    for (linkedListIterator<int> it = list.begin(); it != list.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    list.splitEvensOdds(evensList, oddsList);
    // list is now empty
    cout << "evensList: ";
    for (linkedListIterator<int> it = evensList.begin(); it != evensList.end(); ++it) {
        cout << *it << " ";
    } 
    cout << endl;

    cout << "oddsList: ";
    for (linkedListIterator<int> it = oddsList.begin(); it != oddsList.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    cout << "list: ";
    for (linkedListIterator<int> it = list.begin(); it != list.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
} // preconditions : none, post conditions : list is sorted into evens and odds and printed using iterators.
int main()
{
    test();
}


