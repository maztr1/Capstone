#include "MapRoute.h"

#include <vector>
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

MapRoute::MapRoute() {

	
	//ifstream work_file("data.csv");
	ifstream work_file("data.txt");
	string line;
	char delimiter = ';';

	getline(work_file, line);

	int num = 0;
	while (getline(work_file, line))
	{
		//cout << line << endl;
		Cityies[num] = line;
		num++;
		if (num >= 30)
			break;
	}
	work_file.close();

}

MapRoute::~MapRoute() {
}

vector<int> MapRoute:: getNextCities() {

	vector <int> rezult;

	srand(10);
	rezult.push_back(rand() % 30);
	rezult.push_back(rand() % 30);
	rezult.push_back(rand() % 30);
	return rezult;

}

string MapRoute::getNameCity(int i) {

	return Cityies[i];

}

vector<int> MapRoute::getParametrOfCity(int i) {

	vector <int> rezult;

	srand(10);
	rezult.push_back(rand() % 30);
	rezult.push_back(rand() % 30);
	rezult.push_back(rand() % 30);
	return rezult;

}

