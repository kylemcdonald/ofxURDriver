#pragma once
#include "ofMain.h"
#include "ur_kin.h"
#include "UR5KinematicModel.h"
#include "ofxIKArm.h"
// Copyright (c) 2016, Daniel Moore, Madeline Gannon, and The Frank-Ratchye STUDIO for Creative Inquiry All rights reserved.
//
class URIKFast{
public:
    URIKFast();
    ~URIKFast();
    
    int selectSolution(vector<vector<double> > & inversePosition);
    ofMatrix4x4 forwardKinematics(vector<double> pose);
    double* forwardKinematics(double o, double t, double th, double f, double fi, double s);
    vector<vector<double> > inverseKinematics(Joint pose);
    vector<vector<double> > inverseKinematics(ofMatrix4x4 pose);
    vector<vector<double> > inverseKinematics(vector<double> input);
    vector<vector<double> >  inverseKinematics(double o, double t, double th, double f, double fi, double s);
    
    
    
    URKinematics kinematics;
    vector<vector<double> > preInversePosition;
};