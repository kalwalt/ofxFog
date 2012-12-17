//
// Created by kalwalt alias Walter Perdan on 22/11/12
// Copyright 2011 http://www.kalwaltart.it/ All rights reserved.


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


	void setup();

	///setter

	void setfogColor(ofFloatColor fogColor);
	void setFogMode(int fogMode);
	void setDensity(float density);
	void setFogStartEnd( float fog_start, float fog_end );

	bool enableCoordinate(bool enable);

	bool enable();
 	bool disable();

 	///getters

 	ofFloatColor getfogColor();
	int getFogMode();
	float getDensity();
	float getFogStart();
    	float getFogEnd();


	private:

 	int m_fogMode;
    	ofFloatColor m_fogColor;
    	//float fogCol[4];
    	float m_density;
    	float m_fog_start;
    	float m_fog_end;
    	bool m_enableFogCoordinate;


};
















