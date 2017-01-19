#include <iostream>
#include <string>
#include <list>
using namespace std;

//pre-exisitng code
class Student
{
    public:
    Student( const string& name, int grade ) : m_name( name ), m_grade( grade ) { }
    void Display();

    bool operator>( const Student& other );
    bool operator<( const Student& other );
    bool operator>=( const Student& other );
    bool operator<=( const Student& other );
    bool operator==( const Student& other );

    private:
    string m_name;
    int m_grade;
};


int main()
{
    // Create a list of Student objects called students
    list<Student> students;

    // Push multiple students into the list.
    students.push_back(Student("Vid", 100 ));
	students.push_back(Student("John", 84));
	students.push_back(Student("Mary", 95));
	students.push_back(Student("Joe", 78));
	students.push_back(Student("Bryan", 68));
	students.push_back(Student("Sally", 89));

	//sort in ascending order
	students.sort();

    // Display all the students
    for ( list<Student>::iterator it = students.begin(); it != students.end(); it++ )
    {
        it->Display();
    }

	//new line
	cout << endl;
	
	//sort in descending order
	students.reverse();

	// Display all the students
	for (list<Student>::iterator it = students.begin(); it != students.end(); it++)
	{
		it->Display();
	}

	return 0;
}

void Student::Display()
{
    cout << m_grade << "\t" << m_name << endl;
}


bool Student::operator>( const Student& other )
{
    return this->m_grade > other.m_grade;
}

bool Student::operator<( const Student& other )
{
    return this->m_grade < other.m_grade;
}

bool Student::operator>=( const Student& other )
{
    return this->m_grade >= other.m_grade;
}

bool Student::operator<=( const Student& other )
{
    return this->m_grade <= other.m_grade;
}

bool Student::operator==( const Student& other )
{
    return this->m_grade == other.m_grade;
}