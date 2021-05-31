#pragma once
#ifndef __STAR_SHIP__
#define __STAR_SHIP__
#include "Agent.h"

class StarShip : public Agent
{
public:
	// Constructor(s)
	StarShip();
	
	// Destructor
	~StarShip();
	
	// Display Object Life-Cycle Functions
	void draw() override;
	void update() override;
	void clean() override;

	// getters and setters
	float getMaxSpeed() const;
	float getTurRate() const;
	glm::vec2 getDesiredVelocity() const;

	void setMaxSpeed(float speed);
	void setTurnRate(float angle);
	void setDesiredVelocity(glm::vec2 target_position);

private:
	// private movement variables
	float m_maxSpeed;
	float m_turnRate;

	glm::vec2 m_desiredVelocity;
	// private member functions
	void m_move();
};

#endif /* defined (__STAR_SHIP__) */