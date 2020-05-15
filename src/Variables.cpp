#include "main.h"
#include "Headers/Variables.hpp"

pros::Controller master(CONTROLLER_MASTER);

int Lpow = 0, Rpow = 0, intakePow = 0;

bool Y_Settled = true, X_Settled = true, A_Settled = true;

double kP_X = 0, kD_X = 0, P_X = 0, D_X = 0, pwr_X = 0, error_X = 0, lastError_X = 0;
double kP_Y = 10, kD_Y = 0, P_Y = 0, D_Y = 0, pwr_Y = 0, error_Y = 0, lastError_Y = 0;
double kP_A = 85, kD_A = 40, P_A = 0, D_A = 0, pwr_A = 0, error_A = 0, lastError_A = 0;

double wheelSize = 2.75, distance_LR = 8.0511811, distance_B = -0.590551, xcoord = 0, ycoord = 0, global_angle = 0;
