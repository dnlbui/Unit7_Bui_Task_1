/* Unit7_Bui_Task_1.cpp : This file contains the 'main' function.Program execution begins and ends there.
First name : Daniel
Last name : Bui
Section : 2022 COSC 1436 57002
Txt editor : Visual Studio 2022
Dev - C++
Program creates 3 structures and defines them.
*/

#include<iostream>
#include <string>
#include<iomanip>
using namespace std;


struct TimeOfDay
{
	short hour;
	short minute;
	short second;
};

struct AppDate
{
	short dayOfMonth;
	short month;
	int year;
};

struct Event
{
	string eventName;
	TimeOfDay eventTime;
	AppDate eventDate;
	bool isUrgent;
};

TimeOfDay getInfo(); //function prototype

int main() {

	TimeOfDay time1 = { 1, 25, 3 }; //defining
	AppDate date1 = { 1,2,2022 }; //defining
	Event event1; //defining
	event1.eventName = "One";
	event1.eventTime = { 4,15,6 };
	event1.eventDate = { 2,3,2022 };
	event1.isUrgent = false;
}
