#ifndef _LINKED_LIST_HPP
#define _LINKED_LIST_HPP

#include <iostream>
#include <string>
using namespace std;

template <typename T>
struct Node
{
    Node()
    {
        ptrNext = nullptr;
        ptrPrev = nullptr;
    }

    Node<T>* ptrNext;
    Node<T>* ptrPrev;

    T data;
};

template <typename T>
class LinkedList
{
    public:
    LinkedList() // done
    {
        m_ptrFirst = nullptr;
        m_ptrLast = nullptr;
        m_itemCount = 0;
    }

    ~LinkedList() // done
    {
        Free();
    }

    void Push( const T& newItem )
    {
		//class addition
		//implementing a new node
		Node<T>* newNode = new Node<T>;
		newNode->data = newItem;

		if (m_ptrFirst == nullptr)
		{
			//empty list
			m_ptrFirst = newNode;
			m_ptrLast = newNode;
		}
		else
		{
			//not empty
			//list
			//A -> B -> C -> nullptr
			newNode->ptrPrev = m_ptrLast;		//new node's previous is the old last
			m_ptrLast->ptrNext = newNode;		//old last's next is the new node
			m_ptrLast = newNode;				//the new last is now the new node
		}

		m_itemCount++;
    }

    bool Insert( int index, const T& newItem )
    {
        return false; // temp
    }

    void Extend( const LinkedList& other )
    {
		//use Get as reference

		//use Push to add items to the end of the local list


		Node<T>* ptrCurrent = other.m_ptrFirst;
		//add all elements from "other" with Push() function
		other.Push();
    }

    bool Pop()
    {
		if (IsEmpty())
		{
			return false;
	   }

		//first											last
		//A			<->			B			<->			C
		if (Size() > 1)
		{
			Node<T>* ptrPentultimate = m_ptrLast->ptrPrev;
			delete m_ptrLast;

			//set old pointer to new pointer
			m_ptrLast = ptrPentultimate;
			m_ptrLast->ptrNext = nullptr;
			m_itemCount--;
			return true;
		}
		else
		{
			//first/last
			//		-
			//update pointer locations
			delete m_ptrFirst;
			m_ptrFirst = nullptr;
			m_ptrLast = nullptr;
			m_itemCount--;
			return true;
		}
	}

    bool Remove( int index )
    {
        return false; // temp
    }

    T Get( int index ) const
    {
		//check for errors
		if (index < 0 || index >= m_itemCount)
		{
			T(); //return new "T" item
		}
		Node<T>* ptrCurrent = m_ptrFirst;

		//loop to check counter
		//traverse list until "index" position is found
		int counter = 0;
		while (counter < index)
		{
			ptrCurrent = ptrCurrent->ptrNext;
			counter++;
		}
		//return the data at this position
		return ptrCurrent->data;
    }

    int Size() const // done
    {
        return m_itemCount;
    }

    bool IsEmpty() const // done
    {
        return ( m_ptrFirst == nullptr );
    }

    T operator[]( int index ) // done
    {
        return Get( index );
    }

    LinkedList& operator=( const LinkedList& other )
    {
        return (*this); // temp
    }

    bool operator==( const LinkedList& other )
    {
        return false; // temp
    }

    bool operator!=( const LinkedList& other )
    {
        return !( (*this) == other );
    }

    private:
    void Free() // done
    {
        while ( !IsEmpty() )
        {
            Pop();
        }
    }

    Node<T>* m_ptrFirst;
    Node<T>* m_ptrLast;
    int m_itemCount;
};

#endif
