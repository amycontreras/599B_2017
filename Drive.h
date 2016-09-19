int driveY = vexRT[Ch1]; //fwd
int driveX = vexRT[Ch3]; //turn
int strafe = vexRT[Ch2]; //strafe
int DEADZONE = 15;


void updateDriveMotors(int left, int right)
{
	motor[front_right_drive] = right;
	motor[front_left_drive] = left;
	motor[back_left_drive] = left;
	motor[back_right_drive] = right;
}

void drive()
{
	if(abs(driveY) > DEADZONE)
	{
		updateDriveMotors(driveY, driveY);
	}
	else if(abs(driveX) > DEADZONE)
	{
		updateDriveMotors(driveX, driveX);
	}
	else if(abs(strafe) > DEADZONE)
	{
		motor[front_right_drive] = strafe;
		motor[front_left_drive] = -strafe;
		motor[back_left_drive] = strafe;
		motor[back_right_drive] = -strafe;
	}
	else
	{vmdf dkbmkdf
		updateDriveMotors(0, 0);
	}
}
