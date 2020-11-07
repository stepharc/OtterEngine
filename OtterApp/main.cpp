/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: arcellier
 *
 * Created on 7 novembre 2020, 13:47
 */

#include <cstdlib>
#include <string>
#include <iostream>
#include <GL/glut.h>

using namespace std;

// Display a rectangle
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
        glVertex2f(-0.5, -0.5);
        glVertex2f(-0.5, 0.5);
        glVertex2f(0.5 , 0.5);
        glVertex2f(0.5 , -0.5);
    glEnd();
    glutSwapBuffers();
}

// This is the main method of this
// application
int main(int argc, char** argv) 
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
    glutCreateWindow("Hello World");
    glutDisplayFunc(display);
    glutMainLoop();
}

