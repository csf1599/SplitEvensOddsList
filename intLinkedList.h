#ifndef ILL
#define ILL
#include "unorderedLinkedList.h"

class intLinkedList : public unorderedLinkedList<int> {
public:
	void splitEvensOdds(intLinkedList& evensList, intLinkedList& oddsList); // preconditions : there is an unordered linked list of Int type, postconditions : the list is split into two lists of even and odd, the orginal list is empty
};
#endif
