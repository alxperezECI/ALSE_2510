/**
 * Project Untitled
 */


#ifndef _PENTAGONO_H
#define _PENTAGONO_H

#include "Geometrica.h"


class Pentagono: public Geometrica {
public: 
	
/**
 * @param l
 * @param x
 * @param y
 */
Pentagono(float l, float x, float y);
private: 
	float _lado;
	
Pentagono();
};

#endif //_PENTAGONO_H
