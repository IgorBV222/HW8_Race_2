#include "Track.h"


Track::Track (const std::string& track, const std::string& pavement) : _track(track), _pavement(pavement) {}

double Track::Race(Car & car, Motorbike & bike) {

		if (car.transitTime(_track, _pavement) < bike.transitTime(_track, _pavement)) {
			std::cout << "Car and motorcycle compete. Pavement -  " << _pavement << ". The CAR won with a time of ";
			return car.transitTime(_track, _pavement);
		}
		else if (car.transitTime(_track, _pavement) == bike.transitTime(_track, _pavement)) {
			std::cout << "Car and motorcycle compete. Pavement -  " << _pavement << ". DRAW!!! Time: ";
			return car.transitTime(_track, _pavement);
		}
		else {
			std::cout << "Car and motorcycle compete. Pavement -  " << _pavement << ". The BIKE won with a time of ";
			return bike.transitTime(_track, _pavement);
		}
	}