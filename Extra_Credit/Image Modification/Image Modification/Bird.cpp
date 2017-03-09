#include <iostream>
#include <fstream>
#include <list>
#include <string>

int main()
{
	ifstream input("bird.ppm");
	string buffer;
	string header;

	// Save the header:
	getline(input, buffer); // ascii code
	header += buffer + "\n";
	getline(input, buffer); // comment
	header += buffer + "\n";
	getline(input, buffer); // width/height
	header += buffer + "\n";
	getline(input, buffer); // max color
	header += buffer + "\n";
}