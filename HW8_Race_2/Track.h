#pragma once
#include <iostream>
#include <string>
#include "Car.h"
#include "Motorbike.h"


class Track
{
public:
	Track(const std::string& track, const std::string& pavement);
	Track() = delete;
	double Race(Car& car, Motorbike& bike);
private:
	std::string _track;
	std::string _pavement;	
};