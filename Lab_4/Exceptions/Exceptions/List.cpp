#include "List.hpp"

List::List()
{
	m_itemCount = 0;
	m_arraySize = 3;
}

void List::Insert(string newItem, int position)
{
	//check position for valid range
	if (position < 0 || position >= m_arraySize)
	{
		//throw appropriate exception
		throw out_of_range("Invalid Position.");
	}
	else
	{
		m_data[position] = newItem;
	}
}

void List::Delete(int position)
{
	//check position for valid range
	if (position < 0 || position >= m_arraySize)
	{
		//throw appropriate exception
		throw out_of_range("Invalid Position.");
	}
	else
	{
		m_data[position] = "";
	}
	
}

string List::GetItem(int position)
{
	//check position for valid range
	if (position < 0 || position >= m_arraySize)
	{
		//throw approriate exception
		throw out_of_range("Invalid Position.");
	}
	else
	{
		return m_data[position];
	}
}