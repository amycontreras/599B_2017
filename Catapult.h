void updateCatMotors(int speed)
{
	motor[top_left_cat] = speed;
	motor[top_right_cat] = speed;
	motor[bot_left_cat] = speed;
	motor[bot_right_cat] = speed;
}

void catapult()
{
	if(vexRT[Btn6U] == 1)
	{
		updateCatMotors(100);
	}
	else if(vexRT[Btn5U == 1)
	{
		updateCatMotors(100);
	}
	else
	{
		updateCatMotors(0);
	}
}
