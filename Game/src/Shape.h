#pragma once

#include <GameObject.h>

struct Vertex;

class Shape : public GameObject {

public:
	void Initialize(Graphics *graphics);
  
	void Update(float dt);
	void Draw(Graphics *graphics, float dt);


protected:
	Vertex *vertices;

};