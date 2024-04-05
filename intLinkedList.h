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
            if (current->info % 2 == 0)
            {
                // add int to evensList
                if (evensList.count == 0)
                {
                    evensList.first = current;
                }
                else
                {
                    evensList.last->link = current;
                }
                evensList.last = current;
                evensList.count++;
                current = current->link;
                evensList.last->link = nullptr;
            }
            else
            {
                // add int to oddsList
                if (oddsList.count == 0)
                {
                    oddsList.first = current;
                }
                else
                {
                    oddsList.last->link = current;
                }
                oddsList.last = current;
                oddsList.count++;
                current = current->link;
                oddsList.last->link = nullptr;
            }
        }
        // clean up list to make it empty
        this->first = nullptr;
        this->last = nullptr;
        this->count = 0;
    }
};

