#pragma once

enum Stars { one = 0, two = 256, three = 512, four = 1024, five = 2048 };

class Player
{

private:
	int id;
	unsigned short points;
	Stars stars;

	bool increaseLevel(Stars nextLevel); // adding this method just to reduce repetition of code in the levelUp() method

public:

	Player(int id);
	virtual ~Player();

	void completeMission(unsigned short missionPoints);
	virtual bool levelUp();

};

