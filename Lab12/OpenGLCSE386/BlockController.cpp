#include "BlockController.h"


BlockController::BlockController(void)
{

}


BlockController::~BlockController(void)
{

}

vec3 BlockController::getPosition(){

}

vec3 BlockController::getVelocity(){

}

void BlockController::update(float elapsedTimeSeconds){
	position = position + velocity;
}

void BlockController::rotateRight()
{
	BlockController::target->modelMatrix = rotate(mat4(1.0f), -90.0f, vec3(0.0f,1.0f,0.0f));
}

void BlockController::rotateLeft()
{
	BlockController::target->modelMatrix = rotate(mat4(1.0f), 90.0f, vec3(0.0f,1.0f,0.0f));
}

void BlockController::rotateUp()
{
	BlockController::target->modelMatrix = rotate(mat4(1.0), -90.0f, vec3(0.0f,0.0f,1.0f));
}

void BlockController::rotateDown()
{
	BlockController::target->modelMatrix = rotate(mat4(1.0f), 90.0f, vec3(0.0f,0.0f,1.0f));
}
void BlockController::tiltRight()
{	
	BlockController::target->modelMatrix = rotate(mat4(1.0f), -90.0f, vec3(1.0f,0.0f,0.0f));
}

void BlockController::tiltLeft()
{
	BlockController::target->modelMatrix = rotate(mat4(1.0f), 90.0f, vec3(1.0f,0.0f,0.0f));
}