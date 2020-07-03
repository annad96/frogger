#include "Car.h"
#include "Terminal.h"

Car::Car()
{

}

void Car::draw(Terminal & term) {
	for (int i = 0; i < Car.size(); i++) {
		term.set_cell();
	}
}
/*
void Car::move_car(std::vector<Vec2D>& car, Direction dir) {
	for (int i = 0; i < car.size(); i++) {
		if (dir == RIGHT) {
			car[i].x += 1;
		}
		if (dir == LEFT) {
			car[i].x -= 1;
		}
	}
}*/
