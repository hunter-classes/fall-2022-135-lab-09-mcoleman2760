#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "coord3d.h"


Coord3D pointP = {10, 20, 30};
Coord3D pointQ = {-20, 21, -22};
Coord3D pointF = {5, 11, 45};
Coord3D pos = {0, 0, 100.0};
Coord3D vel = {1, -5, 0.2};

TEST_CASE("Length"){
    CHECK(length(&pointP) - 37.4166 < 0.001);
    CHECK(length(&pointQ) - 36.4  < 0.01);
    CHECK(length(&pointF) - 46.593 < 0.001);



}

TEST_CASE ("Farther From Origin"){

    CHECK(fartherFromOrigin(&pointP, &pointQ) == &pointP);
    CHECK(fartherFromOrigin(&pointQ,&pointF) == &pointF);
    CHECK(fartherFromOrigin(&pointP,&pointF) == &pointF);
}

TEST_CASE ("Move"){
  move(&pos,&vel,2);
  CHECK(pos.x== 2 );
  CHECK(pos.y== -10 );
  CHECK(pos.z == 100.4 );


  move(&pointP,&pointF,3);
  CHECK(pointP.x == 25 );
  CHECK(pointP.y == 53);
  CHECK(pointP.z == 165);

}

TEST_CASE ("Create Coord3D") {

 //   CHECK(createCoord3D());

}
