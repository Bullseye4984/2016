// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef ROBOTMAP_H
#define ROBOTMAP_H
#include "WPILib.h"


/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
class RobotMap {
public:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	static std::shared_ptr<SpeedController> driveTrainRightMotor;
	static std::shared_ptr<SpeedController> driveTrainLeftMotor;
	static std::shared_ptr<RobotDrive> driveTrainDriveMotors;
	static std::shared_ptr<Encoder> driveTrainLeftMotorEncoder;
	static std::shared_ptr<Encoder> driveTrainRightMotorEncoder;
	static std::shared_ptr<SpeedController> launcherLeftWheelMotor;
	static std::shared_ptr<SpeedController> launcherRightWheelMotor;
	static std::shared_ptr<SpeedController> launcherArmMotor;
	static std::shared_ptr<SpeedController> launcherLaunchMotor;
	static std::shared_ptr<DigitalInput> launcherLimitSwitchTop;
	static std::shared_ptr<DigitalInput> launcherLimitSwitchBottom;
	static std::shared_ptr<AnalogPotentiometer> launcherAnalogPotentiometer1;
	static std::shared_ptr<DigitalInput> launcherKickerTop;
	static std::shared_ptr<DigitalInput> launcherKickerBottom;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS

	static void init();
};
#endif
