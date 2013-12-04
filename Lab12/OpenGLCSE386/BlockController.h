#pragma once
#include "controller.h"
class BlockController :
	public Controller
{
public:
	BlockController(void);
	~BlockController(void);
	vec3 getPosition();
	vec3 getVelocity();
	virtual void update(float elapsedTimeSeconds);
	void rotateRight();
	void rotateLeft();
	void rotateUp();
	void rotateDown();
	void tiltRight();
	void tiltLeft();
protected:

private:
	vec3 position;
	vec3 velocity;
	VisualObject* root;
	bool currPosArr [7][7][10];
	bool worldColArr [7][7][10];

};