#include "intLinkedList.h"

using namespace std;

void intLinkedList::splitEvensOdds(intLinkedList &evens, intLinkedList &odds) {
    nodeType<int>* current = this->first;
    while (current != nullptr) {
        if (current->info % 2 == 0) {
            evens.insertLast(current->info);
        }
        else {
            odds.insertLast(current->info);
        }
        nodeType<int>* temp = current;
        current = current->link;
        delete temp;
    } 
    this->first = this->last = nullptr;
}