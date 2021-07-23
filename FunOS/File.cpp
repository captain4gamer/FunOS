#include "File.h"
#include <string.h>

File::File(string name, string type, string data)
{
	this->name = name;
	this->type = type;
	this->data = data;
}
string File::getName()
{
	return this->name;
}
void File::setName(string name)
{
	this->name = name;
}
string File::getType()
{
	return this->type;
}
void File::setType(string type)
{
	this->type = type;
}
string File::getFullName()
{
	string result = this->name + "." + this->type;
	return result;
}
string File::getData()
{
	return this->data;
}
void File::setData(string data)
{
	this->data = data;
}
int File::getSize()
{
	return this->data.length();
}