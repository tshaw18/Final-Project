#ifndef SWIMMER_H
#define SWIMMER_H
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Event.h"

using namespace std;


class Swimmer : public Event{

private:
	string firstName;
	string lastName;
	string teamName;
	string gender;
	string abreviation;
	string sTime;

	int age;
	int ageGroup;
	int points;

public:
	Swimmer::Swimmer(){
		firstName = " "; lastName = " "; teamName = " ";
		gender = " "; abreviation = " "; sTime = " ";
		age = 0; ageGroup = 6;
		set_firstName(" "); set_lastName(" "); set_TeamName(" ");
		set_gender(" "); set_abreviation(" "); set_sTime(" ");
		set_age(0); set_ageGroup(); 
	};
	Event events;
	// get functions
	string get_firstName();
	string get_lastName();
	string get_gender();

	string get_abreviation();
	string get_TeamName();

	int get_ageGroup();
	void set_ageGroup();
	int get_age();


	// set functions
	void set_firstName(string first);
	void set_lastName(string last);
	void set_gender(string g);
	void set_age(int a);

	void set_abreviation(string t);
	void set_TeamName(string name);

	//friend ostream& operator<<(ostream& str, Swimmer& s);
	friend ofstream& operator<<(ofstream& fout, Swimmer& s);

};
#endif
