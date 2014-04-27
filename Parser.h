#include <string>
#include <fstream>

void ParseText(){
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


	string result;
	string result_string;
	size_t found = 0;
	//size_t found = buffer.find("..");
	while(found <= buffer.length()){
	 found = buffer.find("..");
	for(int i=0; i < found; i++)
	result += buffer[i];
	
	output << result << endl;
	buffer = buffer.substr(found+2,buffer.length());   //redefine string to prevent duplicate
	

	cout << result << endl;
	result = "";            //mask out result
	
	}

	output.close();			//close file
}



	
