#include <iostream>
#include "funcs.h"
#include "coord3d.h"
#include <cmath>

double length (Coord3D *p){

double len = sqrt(pow(p->x,2) + pow(p->y,2) + pow(p->z,2)); 

return len;

}

Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2){

 
 if (length(p1) > length(p2)){

    return p1;

 }

 else {
    return p2;
 }



}

void move(Coord3D *ppos, Coord3D *pvel, double dt) {

Coord3D &P =*ppos;
Coord3D &V =*pvel;


P.x = P.x + V.x * dt;
P.y = P.y + V.y * dt;
P.z = P.z + V.z * dt;

 

}

Coord3D* createCoord3D(double x, double y, double z){

Coord3D* ncoord = new Coord3D;

ncoord->x = x;

ncoord->y = y;

ncoord->z = z;

return ncoord;


}

void deleteCoord3D(Coord3D *p){

delete p;



}
