#include "Swimmer.h"
using namespace std;


// get functions
string Swimmer::get_firstName(){ return firstName; }

string Swimmer::get_lastName(){ return lastName; }

string Swimmer::get_gender(){ return gender; }

int Swimmer::get_age(){ return age; }

string Swimmer::get_TeamName(){ return teamName;}
string Swimmer::get_abreviation(){ return abreviation; }

int Swimmer::get_ageGroup(){ return ageGroup; }


// set functions
void Swimmer::set_firstName(string first){
	firstName = first;
}

void Swimmer::set_lastName(string last){
	lastName = last;
}

void Swimmer::set_gender(string g){
	gender = g;
}

void Swimmer::set_age(int a){
	age = a;
}

void Swimmer::set_ageGroup(){
	if (age <= 6) { ageGroup = 6; }
	else if (age > 6 && age <= 8) { ageGroup = 8; }
	else if (age > 8 && age <= 10) { ageGroup = 10; }
	else if (age > 10 && age <= 12) { ageGroup = 12; }
	else if (age > 12 && age <= 18) { ageGroup = 13; }
}

void Swimmer::set_TeamName(string name) {
	teamName = name;
}

void Swimmer::set_abreviation(string t){
	abreviation = t;
}


ofstream& operator<<(ofstream& fout, Swimmer& s) {
	

		fout << s.get_lastName() << " " << s.get_firstName() << " ";

		if (s.get_ageGroup() == 6) fout << "6_&_Under";
		else if (s.get_ageGroup() == 8) fout << "8_&_Under";
		else if (s.get_ageGroup() == 10) fout << "10_&_Under";
		else if (s.get_ageGroup() == 12) fout << "12_&_Under";
		else if (s.get_ageGroup() == 13) fout << "13_&_Up";

		fout << " " << s.get_TeamName() << " " << s.get_gender() << " ";



		switch (s.events.get_int_stroke()) {
		case Event::IM:
			fout << "IM ";
			break;
		case Event::BACKSTROKE:
			fout << "BACKSTROKE ";
			break;
		case Event::FREESTYLE:
			fout << "FREESTYLE ";
			break;
		case Event::BREASTSTROKE:
			fout << "BREASTSTROKE ";
			break;
		case Event::BUTTERFLY:
			fout << "BUTTERFLY ";
			break;
		}

		fout << s.events.get_sTime() << endl;
	

	return fout;
}