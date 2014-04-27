#include <iostream>
#include <string>
#include "Search.h"
#include <stdlib.h>
#include <fstream>

//#DEFINE DEBUG
using namespace std;




int main()
{
	
	Commands Input;
	Input.Input();
	
	string line;
	string buffer;
	ifstream myfile;
	myfile.open("test.txt");

	while(!myfile.eof())
	{	
		
		getline(myfile,line);
		buffer += (line + "..");
		cout << line << endl;
	}
	myfile.close();
	cout << buffer << endl;

	ofstream output;
	output.open("test1.txt");
	size_t found = buffer.find("..");
	
	output << buffer;
	output.close();
	
	return 0;
}
