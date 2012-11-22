#pragma once

#include "ofMain.h"

class ofxFog {

public:

    enum fogMode{


                OF_FOG_EXP = 0,
                OF_FOG_EXP2 = 1,
                OF_FOG_LINEAR = 2

                };

    ofxFog();
    virtual ~ofxFog();

	void settings(int fogMode, ofFloatColor fogColor, float density, float fog_start, float fog_end );

	bool enableCoordinate(bool enable);

	bool enable(bool enable);
 	bool disable(bool diable);



};
















