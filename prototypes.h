#pragma once
//prototypes of functions of dragon
void back();
void affichcylindre();

const int n = 6;
const int r = 1;
const double h = 3;
class Point
{
public :
    //coordonnées x, y et z du point
    double x;
    double y;
    double z;
    // couleur r, v et b du point
    float r;
    float g;
    float b;
};
extern Point pCylindre[(n+1)*2];
extern unsigned int fCylindre[n][4];
