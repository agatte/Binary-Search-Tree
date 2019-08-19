#ifndef _BTREENODE_H
#define _BTREENODE_H

/*------------------------------------------------------------------
A standard linked-list implementation of a queue class.  Given the
linked-list implementation, there is no upper limit on the number
of elements that the queue can contain.

Written by Anthony Gatte
------------------------------------------------------------------*/

#include <iostream>

using namespace std;

// Definition of what the queue can store.
typedef int value;

// Definition of a queue node.
struct QueueNode {
    int value;
    QueueNode *next;
};


class BTree {

  public:
    // Constructors & destructors
    /*--------------------------------------------------------------
    The default queue constructor provides the caller with an
    	initially empty queue.  (IsEmpty == TRUE).
    --------------------------------------------------------------*/
    LLQueue ();

    /*--------------------------------------------------------------
    The default queue destructor: deallocates all dynamically
    	allocated memory (i.e. queueNodes).
    --------------------------------------------------------------*/
    ~LLQueue ();


    // Modification Methods
    /*--------------------------------------------------------------
    Enqueue inserts a new value into the queue
    Precondition: none.
    Postcondition: The number of elements being stored on the queue
    	is one greater than before. (IsEmpty == false)
    --------------------------------------------------------------*/
    void Enqueue (int value);

    /*--------------------------------------------------------------
    Dequeue removes the first element in the queue.
    Precondition: none.
    Postcondition: The number of elements being stored in the queue
    	is one less than before.
    --------------------------------------------------------------*/
    bool Dequeue (int &value);


    // Constant Methods
    /*--------------------------------------------------------------
    First returns to the user the value of head->value (if head != NULL).
    Preconditions: none.
    Postconditions: none.
    --------------------------------------------------------------*/
    bool First (int &value) const;

    /*--------------------------------------------------------------
    IsEmpty is a predicate function that indicates whether
    	the queue is empty or not.  (if (numOfqueueEntries == 0)
	then return true, o.w. false.
    Preconditions: none.
    Postconditions: none.
    --------------------------------------------------------------*/
    bool IsEmpty () const;

    /*--------------------------------------------------------------
    NumOfQueueEntries is a constant member function that returns
    	the number of values currently stored in the queue.
    Preconditions: none.
    Postconditions: none.
    --------------------------------------------------------------*/
    int NumOfQueueEntries () const;

    // Friendly Methods
    /*--------------------------------------------------------------
    Overloaded output method.  This method prints out on the
    	console the values currently being stored in the specified
    	queue.
    Preconditions: none.
    Postconditions: none.
    --------------------------------------------------------------*/
    friend ostream& operator << (ostream& outs, const LLQueue& target);


  private:
    BTreeNode *root;

};

#endif
