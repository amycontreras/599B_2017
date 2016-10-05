// CATAPULT VARIABLES
int cocksBack;
int shootFwd;

// UPDATE CATAPULT VARIABLES
void catVariables()
{
	shootFwd = vexRT[Btn5U];
	cocksBack = vexRT[Btn6U];
}

// This function is essentially a shortcut for our catapult code.
// It sets the motors all to the same speed, so once the function
// is used elsewhere, all motors move at the same directed speed.
void updateCatMotors(int speed)
{
	motor[top_left_cat] = -speed;
	motor[top_right_cat] = speed;
	motor[bot_left_cat] = -speed;
	motor[bot_right_cat] = -speed;
}


// This is the actual code for the catapult. It checks if a button
// is pressed (cocksBack or shootFwd), then acts accordingly. If
// it cocks back, then the motors all move at a speed of 100; if
// it shoots forward, all motors move at a speed of -100. If
// nothing is pressed, the catapult motors do not move.
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
