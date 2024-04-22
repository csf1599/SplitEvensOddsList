#include "intLinkedList.h"

using namespace std;

void intLinkedList::splitEvensOdds(intLinkedList &evens, intLinkedList &odds) {
    nodeType<int>* current = this->first;
    nodeType<int>* evensLast = nullptr;
    nodeType<int>* oddsLast = nullptr;

    while (current != nullptr) {
        if (current->info % 2 == 0) {
            if (evens.first == nullptr) {
                evens.first = current;
                evens.last = current;
                evensLast = current;
            }
            else {
                evensLast->link = current;
                evensLast = current;
            }
        }
        else {
            if (odds.first == nullptr) {
                odds.first = current;
                odds.last = current;
                oddsLast = current;
            }
            else {
                oddsLast->link = current;
                oddsLast = current;
            }
        }
        current = current->link;
    }
    if (evensLast != nullptr) {
        evensLast->link = nullptr;
        evens.last = evensLast;
    }
    if (oddsLast != nullptr) {
        oddsLast->link = nullptr;
        odds.last = oddsLast;
    }
    this->first = this->last = nullptr;
}