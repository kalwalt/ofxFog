#pragma once

#include "ofMain.h"
#include "ofxFog.h"
#include "ofxGui.h"


class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed  (int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);


		ofShader fogShader;
		ofLight light;
		ofFloatColor lightAmbient;
		ofFloatColor lightDiffuse;
		ofVec3f lightPosition;

		ofImage color;

		ofxFog fog;
		ofFloatColor fogColor;


		ofEasyCam cam;

		bool bHide;

		ofxFloatSlider density;
        ofxFloatSlider fog_start;
        ofxFloatSlider fog_end;
        ofxFloatSlider r, g, b;
        ofxIntSlider fogFilter;

        ofxPanel gui;



};
