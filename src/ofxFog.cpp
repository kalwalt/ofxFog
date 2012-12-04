//
// Created by kalwalt alias Walter Perdan on 22/11/12
// Copyright 2011 http://www.kalwaltart.it/ All rights reserved.

#include "ofxFog.h"


ofxFog::ofxFog(){

    m_fogMode = OF_FOG_EXP2;
    m_fogColor.set(0.5f,0.5f,0.5f,1.0f);
    m_density = 0.0035f;
    m_fog_start = 10.0f;
    m_fog_end = 150.0f;
    m_enableFogCoordinate = true;

}


ofxFog::~ofxFog(){}


void ofxFog::setup(){

    GLfloat fogCol[4] = { m_fogColor.r, m_fogColor.g, m_fogColor.b, 1.0f };


    glFogi(GL_FOG_MODE, m_fogMode );       // Fog Mode
    glFogfv(GL_FOG_COLOR, fogCol);               // Set Fog Color
    glFogf(GL_FOG_DENSITY, m_density);                 // How Dense Will The Fog Be
    glHint(GL_FOG_HINT, GL_DONT_CARE);             // Fog Hint Value
    glFogf(GL_FOG_START, m_fog_start);                    // Fog Start Depth
    glFogf(GL_FOG_END, m_fog_end);                      // Fog End Depth

    //enable fog coord
    if(m_enableFogCoordinate){

        glFogi(GL_FOG_COORD_SRC, GL_FOG_COORDINATE);

    // or enable fog fragment depth
    }else if(!m_enableFogCoordinate){

        glFogi(GL_FOG_COORD_SRC, GL_FRAGMENT_DEPTH);


    }


}

void ofxFog::setfogColor(ofFloatColor fogColor){

     GLfloat fogCol[4] = { fogColor.r, fogColor.g, fogColor.b, 1.0f };
     glFogfv(GL_FOG_COLOR, fogCol);

}

void ofxFog::setFogMode(int fogMode){

    m_fogMode = fogMode;

    glFogi(GL_FOG_MODE, fogMode );

}

void ofxFog::setDensity(float density){

    m_density = density;

    glFogf(GL_FOG_DENSITY, density);

}

void ofxFog::setFogStartEnd( float fog_start, float fog_end ){

    m_fog_start = fog_start;
    m_fog_end = fog_end;

    glFogf(GL_FOG_START, fog_start);
    glFogf(GL_FOG_END, fog_end);

}


bool ofxFog::enableCoordinate(bool enable){

    if(enable){

        m_enableFogCoordinate = true;

        return true;

    }else if(!enable){

        m_enableFogCoordinate = false;

        return false;
    }


    //return true;

}

bool ofxFog::enable(){

    glEnable(GL_FOG);

    return true;

}

bool ofxFog::disable(){

    glDisable(GL_FOG);

    return true;

}

ofFloatColor ofxFog::getfogColor(){

    return m_fogColor;

}

int ofxFog::getFogMode(){

    return m_fogMode;


}

float ofxFog::getDensity(){

    return m_density;


}

float ofxFog::getFogStart(){

    return m_fog_start;

}

float ofxFog::getFogEnd(){

    return m_fog_end;

}


