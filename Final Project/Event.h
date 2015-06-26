#ifndef EVENT_H
#define EVENT_H
#include <iostream>
#include <string>
#include "string.h"
#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;


class Event {
protected:
	string stroke;
	double dTime = stod(sTime);
	string sTime;
	int points;
	int int_stroke;
	
public:

	static const int IM = 1;
	static const int BACKSTROKE = 2;
	static const int FREESTYLE = 3;
	static const int BREASTSTROKE = 4;
	static const int BUTTERFLY = 5;

	//double string_to_double(const string &s);

	string get_stroke();
	string get_sTime();
	double get_dTime();
	int get_points();
	int get_int_stroke();

	//double dtime = stod(sTime);

	void set_stroke(string s);
	void set_sTime(string st);
	void set_dTime(string sTime);
	void set_points(int pnt);
	


};




#endif