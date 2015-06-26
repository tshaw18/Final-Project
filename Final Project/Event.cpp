#include "Event.h"

// Get Functions
string Event::get_stroke(){ return stroke; }

int Event::get_int_stroke(){ 
	if (stroke == "IM")
		return 1;
	else if (stroke == "BACKSTROKE")
		return 2;
	else if (stroke == "FREESTYLE")
		return 3;
	else if (stroke == "BREASTSTROKE")
		return 4;
	else if (stroke == "BUTTERFLY")
		return 5;
	else
		return 3;

}

int Event::get_points(){ return points; }

double Event::get_dTime(){ return dTime; }

string Event::get_sTime(){ return sTime; }


// Set Functions
void Event::set_stroke(string s) {
	stroke = s;

	//stroke = (s >= IM && s <= BUTTERFLY) ? s : FREESTYLE;
}


void Event::set_sTime(string st){
	sTime = st;
}

void Event::set_points(int pnt){
	points = pnt;
}


//double Event::string_to_double(const string &s)
//{
//
//
//
//	string str = s;
//	const char *cp = strchr(str.c_str(), ':');
//	if (cp == 0) {
//		double seconds = atof(str.c_str());
//		return seconds;
//	}
//	else {
//		unsigned minutes = atoi(str.c_str());
//		double seconds = atof(++cp);
//		seconds += 60.0 * minutes;
//		return seconds;
//	}
//}

