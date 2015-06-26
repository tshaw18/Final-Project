
#include <string>
#include <stdlib.h>
#include "Swimmer.h"
#include "Event.h"
#include <fstream>
#include <vector>
using namespace std;



int welcome(){
	int choice = 0;
	int tries = 0;

	do{
		tries++;
		// cycle if incorrect
		if (tries > 1){
			system("cls");
			cout << "Incorrect input\n\n";
		}
		// choice
		system("cls");
		cout << "What would you like to do?\n";
		cout << "1. Start Meet\n";
		cout << "2. Search\n";
		cout << "3. Meet Results\n";

		cin >> choice;

	} while (choice < 1 || choice > 3);

	return choice;
}

void Read(/*vector<Swimmer> &Team1_Swimmers, vector<Swimmer> &Team2_Swimmers*/){
	cout << "******************Welcome to MeetPlanner!******************\n\n";
	vector<Swimmer> team1;
	vector<Swimmer*> team2(100);


	// Initialize teams
	string tempAbreviation1;

	// abreviation
	cout << "Team 1 abreviation (as saved in file): ";

	cin >> tempAbreviation1;
	ifstream file_team1(tempAbreviation1 + ".txt", ios::beg);

	if (file_team1.fail()){
		cout << "\aFile not found. Please try again later.\n\n";
		_exit(EXIT_FAILURE);
	}

	string tempAbreviation2;

	// abreviation
	cout << "Team 2 abreviation (as saved in file): ";

	cin >> tempAbreviation2;

	ifstream file_team2(tempAbreviation2 + ".txt", ios::beg);

	if (file_team1.fail()){
		cout << "\aFile not found. Please try again later.\n\n";
		_exit(EXIT_FAILURE);
	}

	cout << "\nWorking...\n";

	// sort file_team1 into vector 
	string temp_first; string temp_last; string temp_abreviation;
	string temp_gender; string temp_stroke; string temp_time;

	int temp_age;

	string line;

	int x = 1;
	//Team1_Swimmers.resize(500);

	// file team 1
	team1.resize(100);


	do{
		// read objects into temp locations
		file_team1 >> temp_last >> temp_first >> temp_age >> temp_abreviation >> temp_gender >> temp_stroke >> temp_time;

		// set characteristics of Swimmer into vector

		// First Name                             Last Name
		team1[x].set_firstName(temp_first); team1[x].set_lastName(temp_last);
		// Age                                    Team Abreviation
		team1[x].set_age(temp_age); team1[x].set_abreviation(temp_abreviation);
		// Gender                                 Stroke
		team1[x].set_gender(temp_gender); team1[x].events.set_stroke(temp_stroke);
		// String Time
		team1[x].events.set_sTime(temp_time);

		x++;
	} while (getline(file_team1, line));


	// file team 2
	int p = 0;
	do{
		// read objects into temp locations
		file_team2 >> temp_last >> temp_first >> temp_age >> temp_abreviation >> temp_gender >> temp_stroke >> temp_time;


		// set characteristics of Swimmer into vector

		//     First Name                             Last Name
		team2[p]->set_firstName(temp_first); team2[p]->set_lastName(temp_last);
		// Age                                    Team Abreviation
		team2[p]->set_age(temp_age); team2[p]->set_abreviation(temp_abreviation);
		// Gender                                 Stroke
		team2[p]->set_gender(temp_gender); team2[p]->events.set_stroke(temp_stroke);
		// String Time
		team2[p]->events.set_sTime(temp_time);

		p++;
	} while (getline(file_team2, line));


}








