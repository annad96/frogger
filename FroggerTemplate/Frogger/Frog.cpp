#include "Frog.h"
#include "Terminal.h"

Frog::Frog() :
    _dir(MoveDirection::UP)
{
    _position = { {term.width()/2,term.height()} }
}

void Frog::draw() {

		term.set_cell(_position[0].x, _position[0].y - 2, "o");
        term.set_cell(_position[0].x, _position[0].y - 1, "-0-");
        term.set_cell(_position[0].x, _position[0].y, "^ ^");
	}
}
/*
void Frog::move_frog(char get_key)
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
