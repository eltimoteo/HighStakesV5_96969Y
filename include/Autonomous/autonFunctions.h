#pragma once

#include "Autonomous/autonValues.h"

using namespace autonvals;

namespace auton {
    void setRotation(double rotation);
    void turnToAngle(double rotation, double rotateCenterOffsetIn = 0, double errorRange = defaultTurnAngleErrorRange, double runTimeout = 3);
    void turnToAngleVelocity(double rotation, double maxVelocityPct = 100.0, double rotateCenterOffsetIn = 0, double errorRange = defaultTurnAngleErrorRange, double runTimeout = 3);
    
    void driveDistanceTiles(double distanceTiles, double maxVelocityPct = 100, double errorRange = defaultMoveTilesErrorRange, double runTimeout = 3);
    void driveAndTurnDistanceTiles(double distanceTiles, double targetRotation, double maxVelocityPct = 100, double maxTurnVelocityPct = 100, double errorRange = defaultMoveTilesErrorRange, double runTimeout = 3);
    void driveAndTurnDistanceTilesMotionProfile(double distanceTiles, double targetRotation, double maxVelocityPct = 100, double maxTurnVelocityPct = 100, double errorRange = defaultMoveTilesErrorRange, double runTimeout = 3);
    void driveAndTurnDistanceWithInches(double distanceInches, double targetRotation, double maxVelocityPct = 100, double maxTurnVelocityPct = 100, double errorRange = defaultMoveWithInchesErrorRange, double runTimeout = 3);
    void driveAndTurnDistanceWithInchesMotionProfile(double distanceInches, double targetRotation, double maxVelocityPct = 100, double maxTurnVelocityPct = 100, double errorRange = defaultMoveWithInchesErrorRange, double runTimeout = 3);

    void setIntakeState(int state, double = 0);

    void setFrontWingsState(bool state, double delaySec = 0);
    void setLeftWingState(bool state, double delaySec = 0);
    void setRightWingState(bool state, double delaySec = 0);
    void setBackWingsState(bool state, double delaySec = 0);

    void setIntakeLiftState(bool state);
}