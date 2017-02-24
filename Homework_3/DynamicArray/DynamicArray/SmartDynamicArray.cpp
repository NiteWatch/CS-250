#include "SmartDynamicArray.hpp"

#include "cuTEST/Menu.hpp"

SmartDynamicArray::SmartDynamicArray()
{
	//initialize variables
	m_itemCount = 0;
	m_arraySize = 0;
	m_data = 0;
}

SmartDynamicArray::~SmartDynamicArray()
{
	//call the Free function
	Free();
}

bool SmartDynamicArray::Push(const string& newItem)
{
	//if statement to see if array is full
	//if not, insert new item into array
	if (arr1.IsFull() == true)
	{
		//call Resize function to resize array
		Resize();
	}
	else
	{
		//add new element to array

	}
}


bool SmartDynamicArray::Insert(int index, const string& newItem)
{
	return false; // temp
}


bool SmartDynamicArray::Extend(const SmartDynamicArray& other)
{
	return false; // temp
}


bool SmartDynamicArray::Pop()
{
	return false; // temp
}


bool SmartDynamicArray::Remove(int index)
{
	return false; // temp
}


string SmartDynamicArray::Get(int index) const
{
	return ""; // temp
}


int SmartDynamicArray::Size() const
{
	return -1; // temp
}

int SmartDynamicArray::GetMaxSize() const
{
	return -1; // temp
}

bool SmartDynamicArray::IsFull() const
{
	return false; // temp
}

bool SmartDynamicArray::IsEmpty() const
{
	return false; // temp
}

string SmartDynamicArray::operator[](int index)
{
	return ""; // temp
}

SmartDynamicArray& SmartDynamicArray::operator=(const SmartDynamicArray& other)
{
	return *this; // temp
}

bool SmartDynamicArray::operator==(const SmartDynamicArray& other)
{
	return false; // temp
}


bool SmartDynamicArray::operator!=(const SmartDynamicArray& other)
{
	return false; // temp
}

void SmartDynamicArray::Free()
{
}

void SmartDynamicArray::Resize()
{
}


void SmartDynamicArray::Resize(int newSize)
{
}
