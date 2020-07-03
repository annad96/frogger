#ifndef FROG_H
#define FROG_H

class Terminal;

class Frog
{
public:
    Frog();
    void draw(Terminal& term);
    void move_frog(char key);

private:
    enum class MoveDirection
    {
        LEFT,
        RIGHT,
        UP,
        DOWN
    };

    //std::vector<Vec2D> _segments;
    MoveDirection _dir;
};

#endif
