#include <iostream>
#include <string>
#include "Search.h"
#include "Parser.h"
#include <stdlib.h>
#include <fstream>

//#DEFINE DEBUG
using namespace std;




int main()
{
	
	Commands Input;
	Input.Input();
	
	ParseText();
	return 0;
}
