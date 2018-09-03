/*
 * openGL PROJECTS
 *
 * Written by Eric Ndirangu 2018
 *SCT211-2068/2015
 *COMPUTER GRAPHICS
 */


#include <windows.h>
#include <stdlib.h>
#include <GL/glut.h>

void displayMe(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
//compound floor
glBegin(GL_POLYGON);

glColor3f(0.137255,0.556863,0.137255);
glVertex3f(-0.6,0.2,-1);
glVertex3f(0.9,0.2,-1);
glVertex3f(0.6,-0.9,-0.25);
glVertex3f(-1,-0.9,-0.25);

glEnd();



//perimeter wall
glBegin(GL_POLYGON);
glColor3f(0.52,0.37,0.26);
glVertex3f(-0.6,0.5,-1);
glVertex3f(0.9,0.5,-1);
glVertex3f(0.9,0.2,-1);
glVertex3f(-0.6,0.2,-1);
glEnd();





//right perimeter
glBegin(GL_POLYGON);
glColor3f(0.52,0.37,0.26);
glVertex3f(0.9,0.5,-1);
glVertex3f(0.6,-0.6,0.25);
glVertex3f(0.6,-0.9,0.25);
glVertex3f(0.9,0.2,-1);
glEnd();
//left perimeter
glBegin(GL_POLYGON);
glColor3f(0.52,0.37,0.26);
glVertex3f(-0.6,0.5,-1);
glVertex3f(-1,-0.6,0.25);
glVertex3f(-1,-0.9,0.25);
glVertex3f(-0.6,0.2,-1);
glEnd();

//back home
glBegin(GL_POLYGON);
glColor3f(0.6,1.3,0.8);
glVertex3f(0.4,0.8,-1);
glVertex3f(0.75,1,-1);
glVertex3f(0.75,0.2,-1);
glVertex3f(0.15,0.2,-1);
glVertex3f(0.15,0.3,-1);
glVertex3f(0.4,0.7,-1);

glEnd();

//Left home
glBegin(GL_POLYGON);
glColor3f(0.6,1.3,0.8);
glVertex3f(0.3,0.6,0.0);
glVertex3f(0.4,0.8,-1);
glVertex3f(0.4,0.2,-1);
glVertex3f(0.3,0.0,0.0);
glEnd();

//garage to gate path
glBegin(GL_QUAD_STRIP);
glColor3f(0.81,0.71,0.23);
glVertex3f(0.25,0,0);
glVertex3f(0.1,0,0);
glVertex3f(0,-0.9,0.25);
glVertex3f(-0.25,-0.9,0.25);
glEnd();


//half front perimeter
glBegin(GL_POLYGON);
glColor3f(0.52,0.37,0.26);
glVertex3f(-1,-0.6,0.25);
glVertex3f(-1,-0.9,0.25);
glVertex3f(-0.25,-0.9,0.25);
glVertex3f(-0.25,-0.6,0.25);
glEnd();

//secend half front perimeter
glBegin(GL_POLYGON);
glColor3f(0.52,0.37,0.26);
glVertex3f(0,-0.6,0.25);
glVertex3f(0,-0.9,0.25);
glVertex3f(0.6,-0.9,0.25);
glVertex3f(0.6,-0.6,0.25);
glEnd();

//half gate1
glBegin(GL_POLYGON);
glColor3f(0.04,0.04,0.04);
glVertex3f(-0.25,-0.6,0.25);
glVertex3f(-0.125,-0.55,0.25);
glVertex3f(-0.125,-0.9,0.25);
glVertex3f(-0.25,-0.9,0.25);
glEnd();

//half gate2
glBegin(GL_POLYGON);
glColor3f(0.04,0.04,0.04);
glVertex3f(-0.125,-0.55,0.25);
glVertex3f(0,-0.6,0.25);
glVertex3f(0,-0.9,0.25);
glVertex3f(-0.125,-0.9,0.25);
glEnd();

//half gate2
glBegin(GL_LINE_STRIP);
glColor3f(1,1,1);
glVertex3f(-0.125,-0.55,0.25);
glVertex3f(-0.125,-0.9,0.25);

glEnd();




//body

//garage roof
glBegin(GL_POLYGON);
glColor3f(0.184314,0.309804,0.309804);
glVertex3f(0.05,0.3,0);
glVertex3f(0.3,0.5,0);
glVertex3f(0.4,0.7,-1);
glVertex3f(0.15,0.3,-1);
glEnd();

//face garage body
glBegin(GL_POLYGON);
glColor3f(0.6,1.3,0.8);
glVertex3f(0.05,0.3,0.0);
glVertex3f(0.3,0.5,0);
glVertex3f(0.3,0.0,0.0);
glVertex3f(0.05,0.0,0.0);
glEnd();





//garage door
glBegin(GL_POLYGON);
glColor3f(0.04,0.04,0.04);
glVertex3f(0.1,0.2,0);
glVertex3f(0.25,0.2,0);
glVertex3f(0.25,0,0);
glVertex3f(0.1,0,0);
glEnd();



//face home body
glBegin(GL_POLYGON);
glColor3f(0.6,1.3,0.8);
glVertex3f(0.3,0.6,0.0);
glVertex3f(0.65,0.8,0.0);
glVertex3f(0.65,0.0,0.0);
glVertex3f(0.3,0.0,0.0);
glEnd();


//home roof
glBegin(GL_POLYGON);
glColor3f(0.184314,0.309804,0.309804);
glVertex3f(0.29,0.59,0);
glVertex3f(0.65,0.8,0);
glVertex3f(0.75,1,-1);
glVertex3f(0.39,0.795,-1);
glEnd();

//door
glBegin(GL_POLYGON);
glColor3f(0.04,0.04,0.04);
glVertex3f(0.45,0,0);
glVertex3f(0.55,0,0);
glVertex3f(0.55,0.25,0);
glVertex3f(0.45,0.25,0);
glEnd();

//window
glBegin(GL_POLYGON);
glColor3f(0.04,0.04,0.04);
glVertex3f(0.35,0.3,0);
glVertex3f(0.43,0.3,0);
glVertex3f(0.43,0.45,0);
glVertex3f(0.35,0.45,0);
glEnd();

//right home
glBegin(GL_POLYGON);
glColor3f(0.6,1.3,0.8);
glVertex3f(0.65,0.6,0.0);
glVertex3f(0.75,0.8,-1);
glVertex3f(0.75,0.2,-1);
glVertex3f(0.65,0.0,0.0);
glEnd();

//Perimeter borders
glBegin(GL_LINE_STRIP);
glColor3f(0,0,0);
glVertex3f(-0.6,0.2,-1);
glVertex3f(-0.6,0.5,-1);

glEnd();
glBegin(GL_LINE_STRIP);
glColor3f(0,0,0);
glVertex3f(0.9,0.5,-1);
glVertex3f(0.9,0.2,-1);

glEnd();
glBegin(GL_LINE_STRIP);
glColor3f(0,0,0);
glVertex3f(0.6,-0.6,-0.25);
glVertex3f(0.6,-0.9,-0.25);

glEnd();

glBegin(GL_LINE_STRIP);
glColor3f(0,0,0);
glVertex3f(0,-0.6,-0.25);
glVertex3f(0,-0.9,-0.25);

glEnd();

glBegin(GL_LINE_STRIP);
glColor3f(0,0,0);
glVertex3f(-0.25,-0.6,-0.25);
glVertex3f(-0.25,-0.9,-0.25);

glEnd();

//gate hole
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex3f(-0.105,-0.8,-0.25);
glVertex3f(-0.105,-0.83,-0.25);
glVertex3f(-0.085,-0.83,-0.25);
glVertex3f(-0.085,-0.8,-0.25);
glEnd();


//door hole
glBegin(GL_POLYGON);
glColor3f(1,1,1);
glVertex3f(0.53,0.145,0);
glVertex3f(0.53,0.12,0);
glVertex3f(0.545,0.12,0);
glVertex3f(0.545,0.145,0);
glEnd();

//HOUSE BORDERS

glBegin(GL_LINE_STRIP);
glColor3f(0,0,0);
glVertex3f(0.65,0.8,0);
glVertex3f(0.65,0,0);

glEnd();


//door lines
glBegin(GL_LINE_STRIP);
glColor3f(1,1,1);
glVertex3f(0.105,0.04,0);
glVertex3f(0.245,0.04,0);

glEnd();

glBegin(GL_LINE_STRIP);
glColor3f(1,1,1);
glVertex3f(0.105,0.08,0);
glVertex3f(0.245,0.08,0);

glEnd();

glBegin(GL_LINE_STRIP);
glColor3f(1,1,1);
glVertex3f(0.105,0.12,0);
glVertex3f(0.245,0.12,0);

glEnd();

glBegin(GL_LINE_STRIP);
glColor3f(1,1,1);
glVertex3f(0.105,0.16,0);
glVertex3f(0.245,0.16,0);

glEnd();

//windowstrip

glBegin(GL_LINE_STRIP);
glColor3f(1,1,1);
glVertex3f(0.35,0.375,0);
glVertex3f(0.43,0.375,0);

glEnd();

glBegin(GL_LINE_STRIP);
glColor3f(1,1,1);
glVertex3f(0.39,0.45,0);
glVertex3f(0.39,0.3,0);

glEnd();


glBegin(GL_POLYGON);
glColor3f(0.1,0.498039,0);
glVertex3f(0.35,0.375,0);
glVertex3f(0.35,0.45,0);
glVertex3f(0.39,0.45,0);

glEnd();
glBegin(GL_POLYGON);
glColor3f(0.1,0.498039,0);
glVertex3f(0.35,0.375,0);
glVertex3f(0.35,0.3,0);
glVertex3f(0.39,0.3,0);

glEnd();

glBegin(GL_POLYGON);
glColor3f(0.1,0.498039,0);
glVertex3f(0.43,0.375,0);
glVertex3f(0.43,0.45,0);
glVertex3f(0.39,0.45,0);

glEnd();

glBegin(GL_POLYGON);
glColor3f(0.1,0.498039,0);
glVertex3f(0.43,0.375,0);
glVertex3f(0.43,0.3,0);
glVertex3f(0.39,0.3,0);

glEnd();





    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB|GLUT_DEPTH);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("SCT211-2068/2015");
    glutDisplayFunc(displayMe);
    glutMainLoop();
    return 0;
}
