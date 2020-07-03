#ifndef CAR_H
#define CAR_H

#include <vector>
#include "Vec2D.h"

class Terminal;

class Car
{
public:
    Car();
    void draw(Terminal& term);
    //void move_car(std::vector<Vec2D>& car, Direction dir);

private:
    enum class MoveDirection
    {
        LEFT,
        RIGHT
    };

   // std::vector<Vec2D> _segments;
    MoveDirection _dir;
};

#endif
