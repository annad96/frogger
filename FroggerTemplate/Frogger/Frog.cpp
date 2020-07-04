#include "Frog.h"
#include "Terminal.h"

Frog::Frog(Terminal& term) :
    _dir(MoveDirection::UP)
{
    _position = { {6,5} }
}

void Frog::draw(Terminal & term) {

		term.set_cell(_position[0].x, _position[0].y, "o");
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
