#ifndef TYPES_H
#define TYPES_H
#include "game.h"

struct object
{
    void setTexture(GLuint tex, bool solid);
    void setCord(int x, int y );
    void setTexCords(float *x);
    bool isSolid;
    GLuint texture;
    int x;  int w;
    int y;  int h;
    float *cords;
};

#endif // TYPES_H
