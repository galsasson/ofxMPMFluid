//
//  ofxMPMForce.h
//  innovid_liquidvideo
//
//  Created by Gal Sasson on 1/26/14.
//
//

#ifndef __innovid_liquidvideo__ofxMPMForce__
#define __innovid_liquidvideo__ofxMPMForce__

#include <iostream>

#include "ofMain.h"

class ofxMPMForce
{
public:
    
    ofxMPMForce(int life=3);
    ofxMPMForce(ofVec2f origin, ofVec2f force, int life=3, float decay=1);
    void update();
    bool alive();
    
    ofVec2f origin, force;
    
private:
    int life;
    int maxLife;
    float decay;
};

#endif /* defined(__innovid_liquidvideo__ofxMPMForce__) */
