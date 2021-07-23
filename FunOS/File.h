#ifndef FILE_H
#define FILE_H

#include <iostream>
using namespace std;

class File
{
public:
		File(string name, string type, string data);
		string getName();
		void setName(string);
		string getType();
		void setType(string);
		string getFullName();
		string getData();
		void setData(string);
		int getSize();

private:
	string name;
	string type;
	string data;
};

#endif

