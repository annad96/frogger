#include "Car.h"
#include "Terminal.h"

Car::Car() :
	_dir(MoveDirection::RIGHT), _dir(MoveDirection::LEFT)
{

}

void Car::draw(Terminal & term) {
	//if (_dir == RIGHT) {
	//for (int i = 0; i < car.size(); i++)
	//{	//car right
		term::set_cell(paddle[0].x, paddle[0].y, '- -');
		term::set_cell(paddle[0].x, paddle[0].y, '0H>');
		term::set_cell(paddle[0].x, paddle[0].y, '- -');

		//car left

		term::set_cell(paddle[0].x, paddle[0].y, '- -');
		term::set_cell(paddle[0].x, paddle[0].y, '<H0');
		term::set_cell(paddle[0].x, paddle[0].y, '- -');
	//}
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
