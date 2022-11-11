#include <iostream>
#include "coord3d.h"
#include "funcs.h"

int main()
{
    Coord3D pointP = {10, 20, 30};
    Coord3D pointQ = {-20, 21, -22}; // 36.4
    Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);
    std::cout << length(&pointP) << std::endl; // would print 37.4166
    std::cout << "Address of P: " << &pointP << std::endl;
    std::cout << "Address of Q: " << &pointQ << std::endl << std::endl;
    std::cout << "Answer = " << ans << std::endl;


    Coord3D pos = {0, 0, 100.0};
    Coord3D vel = {1, -5, 0.2};
    move(&pos, &vel, 2.0);
    std::cout << pos.x << " " << pos.y << " " << pos.z << std::endl;

    double x, y, z;
    std::cout << "Enter position: ";
    std::cin >> x >> y >> z;
     
    Coord3D *ppos = createCoord3D(x,y,z);
    
    std::cout << "Enter velocity: ";
    std::cin >> x >> y >> z;
    Coord3D *pvel = createCoord3D(x,y,z);

    move(ppos, pvel, 10.0);
    std::cout << "Coordinates after 10 seconds: "<< (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << std::endl;


    deleteCoord3D(ppos);
    deleteCoord3D(pvel);


}
