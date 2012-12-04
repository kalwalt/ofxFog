ofxFog
======

openFrameworks addon to add openGL fog to a scene.

Tested in OF 0072. This addon could be added to the OF core lib.

How to use
==========


in testApp.h:

#include "ofxFog.h"

ofxFog fog;
ofFloatColor fogColor;


in testApp.cpp:

in void setup():

fog.setup();

fogColor.set(0.5f, 0.6f, 0.65f);

///add your setters here 


fog.setfogColor(fogColor);

///.....and so on...


in void draw():

fog.enable(true);

ofBox(10);

fog.disable(true);

ofDrawBitmapString("I'm a string not coloured by the fog!", 10,720);








