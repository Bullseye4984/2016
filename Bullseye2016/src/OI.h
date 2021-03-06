// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI {
private:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	std::shared_ptr<Joystick> robotOperator;
	std::shared_ptr<JoystickButton> stopWheelsButton;

	std::shared_ptr<JoystickButton> startWheelsOutwardButton;
	std::shared_ptr<Joystick> driver;
	std::shared_ptr<JoystickButton> TrimUpButton;
	std::shared_ptr<JoystickButton> TrimDownButton;
	std::shared_ptr<JoystickButton> WheelsOutButton;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
public:
	OI();

	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PROTOTYPES

	std::shared_ptr<Joystick> getDriver();
	std::shared_ptr<Joystick> getRobotOperator();
	std::shared_ptr<JoystickButton> LaunchButton;
	std::shared_ptr<JoystickButton> startWheelsInwardButton;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PROTOTYPES
};

#endif
