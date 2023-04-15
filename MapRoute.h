#pragma once
#include <vector>
#include <string>
#include <iostream>
using namespace std;

class MapRoute
{
private:

	string Cityies[30];

public:
	MapRoute();
	~MapRoute();
	vector<int> getNextCities();
	string getNameCity(int i);
	vector<int> getParametrOfCity(int i);
	
	
};