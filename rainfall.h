#include <iostream>
#include <fstream>
using namespace std;
//global constant variable
const int num = 12;
//constant array of month

const string month[num] = { "January", "February","March",
						 "April", "May", "June",
						 "July","August", "September",
						"October","November", "December" };

//prototypes
void getData(double rainfalls[num]);
double totalRainfall(double rainfalls[num]);
int wettestMonth(double rainfalls[num]);
int driestMonth(double rainfalls[num]);
void display(double rainfalls[num]);