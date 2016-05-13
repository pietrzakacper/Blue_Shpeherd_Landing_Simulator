#pragma once

#include "GameObject.h"
#include <iostream>
#include "ParticleSystem.h"

class Player :public GameObject
{
	float m_rocketEngineFuel;
	float m_electricity;
	const float m_TRUST = 20.f;
	const float steerForce = 20.f;
	float rotateAngleValue = 0.f;
	float gravity;
	bool horizontalInput = false;
	bool isEngineOn = false;

public:
	Player(std::string texturePath, sf::Vector2f velVec, float fuel, float elect, float grav);

	void Update(float, float);
	void CheckRealTimeEvents();
	void CheckEvents(sf::Event & event);
	ParticleSystem* partSys;
private:
	void decreaseFuel();
	void decreaseElectricity();
};