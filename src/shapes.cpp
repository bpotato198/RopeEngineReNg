#include <GL/gl.h>


#include "../include/shapes.h"




void rectangle()
{
    glBegin(GL_QUADS);

    glColor3f(1.0f, 1.0f, 1.0f); 
    glVertex3f(-0.5f, -0.5f, 0.5f);
    glVertex3f(0.5f, -0.5f, 0.5f);
    glVertex3f(0.5f, 0.5f, 0.5f);
    glVertex3f(-0.5f, 0.5f, 0.5f);
    

    glEnd();
}

void rectangleblue()
{
    glBegin(GL_QUADS);

    glColor3f(0.0f, 0.0f, 1.0f); 
    glVertex3f(-0.5f, -0.5f, 0.5f);
    glVertex3f(0.5f, -0.5f, 0.5f);
    glVertex3f(0.5f, 0.5f, 0.5f);
    glVertex3f(-0.5f, 0.5f, 0.5f);
    

    glEnd();

    
}

void rectanglegreen() {
    glBegin(GL_QUADS);

    glColor3f(0.0f, 1.0f, 0.0f); 
    glVertex3f(-0.5f, -0.5f, 0.5f);
    glVertex3f(0.5f, -0.5f, 0.5f);
    glVertex3f(0.5f, 0.5f, 0.5f);
    glVertex3f(-0.5f, 0.5f, 0.5f);
    

    glEnd();
}

void rectanglered() {
    glBegin(GL_QUADS);

    glColor3f(1.0f, 0.0f, 0.0f); 
    glVertex3f(-0.5f, -0.5f, 0.5f);
    glVertex3f(0.5f, -0.5f, 0.5f);
    glVertex3f(0.5f, 0.5f, 0.5f);
    glVertex3f(-0.5f, 0.5f, 0.5f);
    

    glEnd();
}

void clearbg() {
    glBegin(GL_QUADS);

    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex3f(-1.0f, -1.0f, 1.5f);
    glVertex3f(1.5f, -1.5f, 1.5f);
    glVertex3f(1.5f, 1.5f, 1.5f);
    glVertex3f(-1.5f, 1.5f, 1.5f);

    glEnd();
}

void triangle() {
    glBegin(GL_TRIANGLES);

    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex3f(0.125f, 0.125f, 0.125f);
    glVertex3f(0.125f, 0.125f, 0.125f);
    glVertex3f(0.125f, 0.125f, 0.125f);

    glEnd();



}