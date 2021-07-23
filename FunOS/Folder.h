#ifndef FOLDER_H
#define FOLDER_H

#include <iostream>
#include <vector>
#include "File.h"
using namespace std;

class Folder
{
public:
	Folder(string name);
	void printContent();
	void displayFullContent();
	string getName();
	void setName(string name);
	void addFile(string name);
	void addFile(File* file);
	void removeFile();//idk what are the parameters
	void addFolder(string name);
	void addFolder(Folder* folder);
	void removeFolder();//idk what are the parameters

private:
	string name;
	vector<File>* files;
	vector<Folder>* folders;
};

#endif