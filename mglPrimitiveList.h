#ifndef _MGL_PRIMITIVE_LIST
#define _MGL_PRIMITIVE_LIST
#include "mglPrimitive.h"
#include "mglLine.h"
#include "mgl_structs.h"
#include <GL/glut.h>
#include <list>
using namespace std;


class mglPrimitiveList
{
public:
    mglPrimitiveList();

    list<mglPrimitive*> primitives;
    mglColor3f color; 

    void add_line( int x1, int y1, int x2, int y2 );     

    void draw();
    void scale( float, float );
    void rotate( float, float, float );
    void move( int, int );
    int min_distance_to( mglPoint p );
    int max_distance_to( mglPoint p );
}; 
#endif
