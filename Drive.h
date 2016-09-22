/*int driveY = vexRT[Ch3]; //fwd
int strafe = vexRT[Ch3]; //strafe
int driveX = vexRT[Ch2]; //driveX */
//int DEADZONE = 15;


void updateDriveMotors(int left, int right)
{
	motor[front_right_drive] = right;
	motor[front_left_drive] = left;
	motor[back_left_drive] = left;
	motor[back_right_drive] = right;
}

void drive()
{
	if(abs(vexRT[Ch3]) > 15 && abs(vexRT[Ch3]) > abs(vexRT[Ch4]))				// FWD REV
	{
		updateDriveMotors(vexRT[Ch3], vexRT[Ch3]);
	}
	else if(abs(vexRT[Ch4]) > 15 && abs(vexRT[Ch4]) > abs(vexRT[Ch2])) //STRAFING
	{
		motor[front_right_drive] = -vexRT[Ch4];
		motor[front_left_drive] = vexRT[Ch4];
		motor[back_left_drive] = -vexRT[Ch4];
		motor[back_right_drive] = vexRT[Ch4];
	}
	else if(abs(vexRT[Ch1]) > 15 && abs(vexRT[Ch1]) > abs(vexRT[Ch2]))
	{
		updateDriveMotors(vexRT[Ch1], -vexRT[Ch1]);
	}
	else
	{
		updateDriveMotors(0, 0);
	}
}
