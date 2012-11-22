#include "ofxFog.h"

ofxFog::ofxFog(){}

ofxFog::~ofxFog(){}

void ofxFog::settings( int fogMode, ofFloatColor fogColor, float density, float fog_start, float fog_end ){

    GLfloat _fogColor[4] = {fogColor.r,fogColor.g,fogColor.b,1.0f};


    glFogi(GL_FOG_MODE, fogMode );       // Fog Mode
    glFogfv(GL_FOG_COLOR, _fogColor);               // Set Fog Color
    glFogf(GL_FOG_DENSITY, density);                 // How Dense Will The Fog Be
    glHint(GL_FOG_HINT, GL_DONT_CARE);             // Fog Hint Value
    glFogf(GL_FOG_START, fog_start);                    // Fog Start Depth
    glFogf(GL_FOG_END, fog_end);                      // Fog End Depth





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

