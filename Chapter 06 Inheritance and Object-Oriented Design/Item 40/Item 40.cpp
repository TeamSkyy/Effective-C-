#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
class IPerson {
public:
	virtual ~IPerson() {}
	virtual const std::string name()const = 0;
};
struct DataBaseID {
	std::string _name;
};
DataBaseID returnDataBaseID(const std::string& n) {
	DataBaseID dbi;
	dbi._name = n;
	return dbi;
}
class PersonInfo {
private:
	DataBaseID id;
	virtual const char* valueDelimOpen()const;
	virtual const char* valueDelimClose()const;
public:
	PersonInfo(DataBaseID i) :id(i) {}
	virtual ~PersonInfo(){}
	const char* theName()const;
};
class CPerson :public IPerson, private PersonInfo {
public:
	explicit CPerson(std::string s):PersonInfo(returnDataBaseID(s)){}
	virtual const std::string name()const override {
		return theName();
	}
};

const char* PersonInfo::valueDelimOpen() const
{
	return "*";
}

const char* PersonInfo::valueDelimClose() const
{
	return "*";
}

const char* PersonInfo::theName() const
{
	static const int size = 1000;
	static char array[size];
	strcpy(array, valueDelimOpen());
	strcat(array, id._name.c_str());
	strcat(array, valueDelimClose());
	return array;
}
std::shared_ptr<CPerson> createCPerson(const std::string& s) {
	return std::make_shared<CPerson>(s);
}
int main() {
	std::shared_ptr<CPerson> pt = createCPerson("ABC");
	std::cout<<pt->name();
}