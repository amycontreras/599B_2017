int cocksBack;
int shootFwd;

void catVariables()
{
	shootFwd = vexRT[Btn5U];
	cocksBack = vexRT[Btn6U];
}

void updateCatMotors(int speed)
{
	motor[top_left_cat] = -speed;
	motor[top_right_cat] = speed;
	motor[bot_left_cat] = -speed;
	motor[bot_right_cat] = -speed;
}

void catapult()
{
	if(cocksBack == 1)
	{
		updateCatMotors(100);
	}
	else if(shootFwd == 1)
	{
		updateCatMotors(-100);
	}
	else
	{
		updateCatMotors(0);
	}
}
