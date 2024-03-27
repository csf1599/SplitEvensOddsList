#ifndef ILL
#define ILL
#include "unorderedLinkedList.h"

class intLinkedList : public unorderedLinkedList<int> {
public:
	void splitEvensOdds(intLinkedList& evensList, intLinkedList& oddsList);
};
#endif
