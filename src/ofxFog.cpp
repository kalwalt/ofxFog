//
// Created by kalwalt alias Walter Perdan on 22/11/12
// Copyright 2011 http://www.kalwaltart.it/ All rights reserved.

#include "ofxFog.h"

//ofxFog::ofxFog(){}

ofxFog::ofxFog(){

    _fogMode = OF_FOG_EXP2;
    _fogColor.set(0.4f,0.6f,0.8f,1.0f);
    float _density = 0.0035f;
    float _fog_start = 10.0f;
    float _fog_end = 50.0f;

}


ofxFog::~ofxFog(){}

/*

void ofxFog::settings( int fogMode, ofFloatColor fogColor, float density, float fog_start, float fog_end ){

    GLfloat _fogColor[4] = {fogColor.r,fogColor.g,fogColor.b,1.0f};


    glFogi(GL_FOG_MODE, fogMode );       // Fog Mode
    glFogfv(GL_FOG_COLOR, _fogColor);               // Set Fog Color
    glFogf(GL_FOG_DENSITY, density);                 // How Dense Will The Fog Be
    glHint(GL_FOG_HINT, GL_DONT_CARE);             // Fog Hint Value
    glFogf(GL_FOG_START, fog_start);                    // Fog Start Depth
    glFogf(GL_FOG_END, fog_end);                      // Fog End Depth





}
*/
void ofxFog::setup(){

    GLfloat fogCol[4] = { _fogColor.r, _fogColor.g, _fogColor.b, 1.0f };


    glFogi(GL_FOG_MODE, _fogMode );       // Fog Mode
    glFogfv(GL_FOG_COLOR, fogCol);               // Set Fog Color
    glFogf(GL_FOG_DENSITY, _density);                 // How Dense Will The Fog Be
    glHint(GL_FOG_HINT, GL_DONT_CARE);             // Fog Hint Value
    glFogf(GL_FOG_START, _fog_start);                    // Fog Start Depth
    glFogf(GL_FOG_END, _fog_end);                      // Fog End Depth


}

void ofxFog::setfogColor(ofFloatColor fogColor){

     GLfloat fogCol[4] = { fogColor.r, fogColor.g, fogColor.b, 1.0f };
     glFogfv(GL_FOG_COLOR, fogCol);

}

void ofxFog::setFogMode(int fogMode){

     glFogi(GL_FOG_MODE, fogMode );

}

void ofxFog::setDensity(float density){

     glFogf(GL_FOG_DENSITY, density);

}

void ofxFog::setFogStartEnd( float fog_start, float fog_end ){

     glFogf(GL_FOG_START, fog_start);
     glFogf(GL_FOG_END, fog_end);

}


bool ofxFog::enableCoordinate(bool enable){

    if(enable){

        glFogi(GL_FOG_COORD_SRC, GL_FOG_COORDINATE);


    }else if(!enable){

        glFogi(GL_FOG_COORD_SRC, GL_FRAGMENT_DEPTH);


    }


    return true;

}

bool ofxFog::enable(bool enable){

    glEnable(GL_FOG);

    return true;

}

bool ofxFog::disable(bool disable){

    glDisable(GL_FOG);

    return true;

}

ofFloatColor ofxFog::getfogColor(){

    return _fogColor;

}

int ofxFog::getFogMode(){

    return _fogMode;


}

float ofxFog::getDensity(){

    return _density;


}

float ofxFog::getFogStart(){

    return _fog_start;

}

float ofxFog::getFogEnd(){

    return _fog_end;

}


