//
//  ofxMPMForce.cpp
//  innovid_liquidvideo
//
//  Created by Gal Sasson on 1/26/14.
//
//

#include "ofxMPMForce.h"

ofxMPMForce::ofxMPMForce(int l)
{
    maxLife = life = l;
}

ofxMPMForce::ofxMPMForce(ofVec2f org, ofVec2f frc, int l, float dec)
{
    origin = org;
    force = frc;
    
    maxLife = life = l;
    decay = dec;
}

void ofxMPMForce::update()
{
    if (life<0) {
        return;
    }
    
//    origin += force;
    force = force*decay;
    
    life--;
}

bool ofxMPMForce::alive()
{
    return (life>=0);
}
