#include <iostream>
#include <string>
#include "Car.h"
#include "Motorbike.h"
#include "Track.h"

int main()
{
	std::string track1 = ("ccccccccccccccccbbbbbbbcccccccccccccccccccccccccccccccccccbbbcccccccccccccccccccccccc");
	std::string track2 = ("bbbbbbbbbbbbbbbbbbbbbbbbccccccccbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbccbbbbbbbbbbbbbb");
	Car car;
	Motorbike bike;

	Track road (track1, "asphalt");
	std::cout << "Race on the track one!!!\n";
	road.Race(car, bike);
	std::cout << "\n===========================================================\n";

	road = { track1, "gravel" };
	std::cout << "Race on the track two!!!\n";
	road.Race(car, bike);
	std::cout << "\n===========================================================\n";

	road = { track1, "snow" };
	std::cout << "Race on the track three!!!\n";
	road.Race(car, bike);
	std::cout << "\n===========================================================\n";

	road = { track2, "gravel" };
	std::cout << "Race on the track four!!!\n";
	road.Race(car, bike);
	std::cout << "\n===========================================================\n";

	road = { track2, "snow" };
	std::cout << "Race on the track five!!!\n";
	road.Race(car, bike);
	std::cout << "\n===========================================================\n";
	
	road = { track2, "asphalt" };
	std::cout << "Race on the track six!!!\n";
	road.Race(car, bike);
	std::cout << "\n===========================================================\n";
	
}