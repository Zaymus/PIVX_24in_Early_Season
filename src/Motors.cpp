#include "main.h"
#include "Headers/Motors.hpp"

pros::Motor RFront(1, MOTOR_GEARSET_18, true);
pros::Motor RBack(4, MOTOR_GEARSET_18, true);
pros::Motor RMid(3, MOTOR_GEARSET_18, true);
pros::Motor LMid(9, MOTOR_GEARSET_18, false);
pros::Motor LFront(10, MOTOR_GEARSET_18, false);
pros::Motor LBack(8, MOTOR_GEARSET_18, false);

pros::Motor RBIntake(13, MOTOR_GEARSET_18, true);
pros::Motor RFIntake(11, MOTOR_GEARSET_18, true);
pros::Motor LBIntake(19, MOTOR_GEARSET_18, false);
pros::Motor LFIntake(17, MOTOR_GEARSET_18, false);

pros::Motor arm1(12, MOTOR_GEARSET_36, false);//right
pros::Motor arm2(20, MOTOR_GEARSET_36, true);//left

pros::Motor tilter1(16, MOTOR_GEARSET_36, true);//left
pros::Motor tilter2(14, MOTOR_GEARSET_36, false);//right
