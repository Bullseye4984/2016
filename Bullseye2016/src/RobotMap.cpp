// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
std::shared_ptr<SpeedController> RobotMap::driveTrainRightMotor;
std::shared_ptr<SpeedController> RobotMap::driveTrainLeftMotor;
std::shared_ptr<RobotDrive> RobotMap::driveTrainDriveMotors;
std::shared_ptr<Encoder> RobotMap::driveTrainLeftMotorEncoder;
std::shared_ptr<Encoder> RobotMap::driveTrainRightMotorEncoder;
std::shared_ptr<SpeedController> RobotMap::launcherLeftWheelMotor;
std::shared_ptr<SpeedController> RobotMap::launcherRightWheelMotor;
std::shared_ptr<SpeedController> RobotMap::launcherArmMotor;
std::shared_ptr<SpeedController> RobotMap::launcherLaunchMotor;
std::shared_ptr<DigitalInput> RobotMap::launcherLimitSwitchTop;
std::shared_ptr<DigitalInput> RobotMap::launcherLimitSwitchBottom;
std::shared_ptr<AnalogPotentiometer> RobotMap::launcherAnalogPotentiometer1;
std::shared_ptr<DigitalInput> RobotMap::launcherKickerTop;
std::shared_ptr<DigitalInput> RobotMap::launcherKickerBottom;

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION

void RobotMap::init() {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    LiveWindow *lw = LiveWindow::GetInstance();

    driveTrainRightMotor.reset(new VictorSP(1));
    lw->AddActuator("DriveTrain", "RightMotor", (VictorSP&) driveTrainRightMotor);
    
    driveTrainLeftMotor.reset(new VictorSP(0));
    lw->AddActuator("DriveTrain", "LeftMotor", (VictorSP&) driveTrainLeftMotor);
    
    driveTrainDriveMotors.reset(new RobotDrive(driveTrainLeftMotor, driveTrainRightMotor));
    
    driveTrainDriveMotors->SetSafetyEnabled(false);
        driveTrainDriveMotors->SetExpiration(0.1);
        driveTrainDriveMotors->SetSensitivity(0.5);
        driveTrainDriveMotors->SetMaxOutput(1.0);

    driveTrainLeftMotorEncoder.reset(new Encoder(0, 1, false, Encoder::k4X));
    lw->AddSensor("DriveTrain", "LeftMotorEncoder", driveTrainLeftMotorEncoder);
    driveTrainLeftMotorEncoder->SetDistancePerPulse(1.0);
    driveTrainLeftMotorEncoder->SetPIDSourceType(PIDSourceType::kDisplacement);
    driveTrainRightMotorEncoder.reset(new Encoder(2, 3, false, Encoder::k4X));
    lw->AddSensor("DriveTrain", "RightMotorEncoder", driveTrainRightMotorEncoder);
    driveTrainRightMotorEncoder->SetDistancePerPulse(1.0);
    driveTrainRightMotorEncoder->SetPIDSourceType(PIDSourceType::kDisplacement);
    launcherLeftWheelMotor.reset(new VictorSP(2));
    lw->AddActuator("Launcher", "LeftWheelMotor", (VictorSP&) launcherLeftWheelMotor);
    
    launcherRightWheelMotor.reset(new VictorSP(3));
    lw->AddActuator("Launcher", "RightWheelMotor", (VictorSP&) launcherRightWheelMotor);
    
    launcherArmMotor.reset(new VictorSP(4));
    lw->AddActuator("Launcher", "ArmMotor", (VictorSP&) launcherArmMotor);
    
    launcherLaunchMotor.reset(new VictorSP(5));
    lw->AddActuator("Launcher", "LaunchMotor", (VictorSP&) launcherLaunchMotor);
    
    launcherLimitSwitchTop.reset(new DigitalInput(4));
    lw->AddSensor("Launcher", "LimitSwitchTop", launcherLimitSwitchTop);
    
    launcherLimitSwitchBottom.reset(new DigitalInput(5));
    lw->AddSensor("Launcher", "LimitSwitchBottom", launcherLimitSwitchBottom);
    
    launcherAnalogPotentiometer1.reset(new AnalogPotentiometer(0, 1.0, 0.0));
    lw->AddSensor("Launcher", "Analog Potentiometer 1", launcherAnalogPotentiometer1);
    
    launcherKickerTop.reset(new DigitalInput(6));
    lw->AddSensor("Launcher", "KickerTop", launcherKickerTop);

    launcherKickerBottom.reset(new DigitalInput(7));
        lw->AddSensor("Launcher", "KickerBottom", launcherKickerBottom);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
