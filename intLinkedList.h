#pragma once
#include "unorderedLinkedList.h"
class intLinkedList :
    public unorderedLinkedList<int>
{
public:

    // precondition - original list is not empty
    // postcondition - integers have been placed in their respective 
    // list (even or odd), leaving original list empty

    void splitEvenOddsList(intLinkedList& evensList,
        intLinkedList& oddsList)
    {
        nodeType<int>* current = this->first;
        while (current != nullptr)
        {
            // check if int is even
            if (current->info % 2 != 0)
                oddsList.insertLast(current->info);
            else
                evensList.insertLast(current->info);
            nodeType<int>* temp = current;
            current = current->link;
            delete temp;
            this->count--;
        }
    }
};

