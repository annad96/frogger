#include "Frog.h"
#include "Terminal.h"

Frog::Frog()
{

}

void Frog::draw(Terminal & term) {
	for (int i = 0; i < Frog.size(); i++) {
		term.set_cell();
	}
}
/*
void Frog::move_frog(char key)
{
    switch (key) {
    case 'w':
        if (_dir != MoveDirection::DOWN) {
            _dir = MoveDirection::UP;
        }
        break;

    case 'd':
        if (_dir != MoveDirection::LEFT) {
            _dir = MoveDirection::RIGHT;
        }
        break;

    case 'a':
        if (_dir != MoveDirection::RIGHT) {
            _dir = MoveDirection::LEFT;
        }
        break;

    default:
        break;
    }
}*/
