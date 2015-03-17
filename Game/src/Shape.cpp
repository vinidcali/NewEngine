#include "Shape.h"
#include <SDL_opengl.h>


struct Vertex {
	Vector3 position;
};


void Shape::Initialize(Graphics *graphics) {
	//reset everything
	_transform.position.x = 0.0f;
	_transform.position.y = 0.0f;
	_transform.position.z = 0.0f;
	_transform.rotation.x = 0.0f;
	_transform.rotation.y = 0.0f;
	_transform.rotation.z = 0.0f;


	vertices = new Vertex[4];

	vertices[0].position.x = 0.0f;
	vertices[0].position.y = 0.0f;
	vertices[0].position.z = 0.0f;

	vertices[1].position.x = -0.5f;
	vertices[1].position.y = 0.5f;
	vertices[1].position.z = 0.0f;

	vertices[2].position.x = 0.5f;
	vertices[2].position.y = 0.5f;
	vertices[2].position.z = 0.0f;

	vertices[3].position.x = 0.0f;
	vertices[3].position.y = 1.0f;
	vertices[3].position.z = 0.0f;
}


void Shape::Update(float dt) {

}


void Shape::Draw(Graphics *graphics, float dt) {
	GLenum error = glGetError();				
	
	glBegin(GL_LINE);							//begin drawing something (a line in this case)

	glVertex3f(vertices[0].position.x, vertices[0].position.y, vertices[0].position.z);
	glVertex3f(vertices[1].position.x, vertices[1].position.y, vertices[1].position.z);
	glVertex3f(vertices[2].position.x, vertices[2].position.y, vertices[2].position.z);
	glVertex3f(vertices[3].position.x, vertices[3].position.y, vertices[3].position.z);

	glEnd();									//finish drawing
}