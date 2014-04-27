#include <string>
#include <stdlib.h>
using namespace std;



class Search
{
	public:
	string text = NULL;
	string link;
	const char * c;
	string b = "wget ";
	const char * d;
	Search(string lol):text(lol){};
	void parseText()
	{	
		//cout << text << endl;
		string www = "www";
		string slash = "//";
		int find = text.find(www);
		int counter = 0;

		if(find!=string::npos)
		{
			
			for(int i=find+4; i < text.length(); i++)
			{	
			//link[counter] = text[i];
			link += text[i];
			//counter++;
			}
			fetch();

		}
		else if ((find = text.find(slash))!=string::npos)
		{
			for(int i=find+2; i<text.length(); i++)
			{
				link += text[i];
				//link[counter] = text[i];
				//counter++;
			}
				fetch();
		}
		
		
	}

	void fetch()
	{
		//c = link.c_str();
		b += link;
		d = b.c_str();   //pass to C function
		
		system(d);
	}
};

class Commands
{
	public: 
	string command;
	
	void Input()
	{
		string url;
		cout << "$: " << endl;
		cin >> command;
		
		if(command == "Fetch" || command == "fetch" || command == "f")
		{	cout << "Please Enter URL: " << endl;
			cin >> url;
		
			Search Web(url);
			Web.parseText();
		}
		if(command == "exit" || command == "Exit")
		return;
	}
};
