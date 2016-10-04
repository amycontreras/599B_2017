int driveY;
int strafe;
int driveX;
int DEADZONE = 15;

void driveVariables()
{
	driveY = vexRT[Ch3];
	driveX = vexRT[Ch2];
	strafe = vexRT[Ch4];
}

void updateDriveMotors(int left, int right)
{
	motor[front_right_drive] = right;
	motor[front_left_drive] = left;
	motor[back_left_drive] = left;
	motor[back_right_drive] = right;
}

void drive()
{
	if(abs(driveY) > DEADZONE && abs(driveY) > abs(strafe))				// FWD REV
	{
		updateDriveMotors(driveY, driveY);
	}
	else if(abs(strafe) > DEADZONE && abs(strafe) > abs(driveY)) //STRAFING
	{
		motor[front_right_drive] = strafe;
		motor[front_left_drive] = -strafe;
		motor[back_left_drive] = strafe;
		motor[back_right_drive] = -strafe;
	}
	else if(abs(driveX) > DEADZONE && abs(driveX) > abs(vexRT[Ch2])) //turn
	{
		updateDriveMotors(driveX, -driveX);
	}
	else
	{
		updateDriveMotors(0, 0);
	}
}
