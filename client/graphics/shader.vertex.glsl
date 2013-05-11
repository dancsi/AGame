#version 400

layout(location=0) in vec4 in_Position;
layout(location=1) in vec4 in_Color;
out vec4 ex_Color;

uniform int width;
uniform int height;

void main()
{
	gl_Position = in_Position;
	gl_Position.x = (in_Position.x - width/2)/(width/2);
	gl_Position.y = (in_Position.y - height/2)/(height/2);
	ex_Color = in_Color;
}