#pragma once

#include "igeofig.h"
#include "iprintable.h"
#include "iphysobject.h"
#include "IDialogInitiable.h"
#include "CVector2D"
#include <iostream>

class Hexagon : public IGeoFig, public IPrintable, public IPhysObject, public IDialogInitiable {
public:
    Hexagon();
    Hexagon(double a);

    double square();
    double perimeter();
    double mass() const;
    CVector2D position() const;
    bool operator== (const IPhysObject& ob) const;
    bool operator< (const IPhysObject& ob) const;
    void draw();
    void initFromDialog();

    const char* classname();
    unsigned int size();

private:
    double side_a;
    double hexagon_area;
    double hexagon_perimeter;
    double hexagon_mass;
    CVector2D hexagon_center;
};
