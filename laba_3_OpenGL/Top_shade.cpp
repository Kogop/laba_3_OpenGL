#version 330 core

layout(Location = 0) in vec2 vertexPosition;
layout(Location = 1) in ver2 vertexColor;


out vec3 Color;


void main() {
	Color = vertexColor;
	gl_Position = vec4(vertexPosition, 0.0, 1.0);
}
