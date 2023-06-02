
#ifndef OBJECT_H
#define OBJECT_H

#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include <cmath>
#include <iostream>
#include <list>

//base class of all movable objects, including plyaers, bullets and player-created obstacles
using namespace std;

class Object: public QGraphicsPixmapItem
{
public:
    Object();
};

#endif // OBJECT_H
