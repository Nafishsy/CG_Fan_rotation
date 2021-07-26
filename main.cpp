#include<cstdio>
#include <windows.h>
#include <GL/glut.h>
#include <bits/stdc++.h>
GLfloat i = 0.0f;
int isMoving= 0;
int WantToShowA= 0;
int WantToShowB= 0;
int WantToShowC= 0;
int WantToShowD= 0;
void MainFan();

void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}


void display()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();

    glRotatef(i,0.0,0.0,0.1);

    MainFan();

    glPopMatrix();

    if(isMoving==1)
    {
        i+=0.1;
    }
    if(isMoving==0)
    {
        i=0;
    }

    if(WantToShowA == 1)
    {
        glTranslatef(-0.8,0.8,0);
        glScalef(0.3,0.3,0);
        MainFan();
        glLoadIdentity();
    }
    if(WantToShowB == 1)
    {
        glTranslatef(0.8,0.8,0);
        glScalef(0.3,0.3,0);
        MainFan();
        glLoadIdentity();
    }
    if(WantToShowC == 1)
    {
        glTranslatef(0.8,-0.8,0);
        glScalef(0.3,0.3,0);
        MainFan();
        glLoadIdentity();
    }
    if(WantToShowD == 1)
    {
        glTranslatef(-0.8,-0.8,0);
        glScalef(0.3,0.3,0);
        MainFan();
        glLoadIdentity();
    }

    glFlush();
}

void MainFan()
{
    glLineWidth(5);

//********************
//UP-RIGHT

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);

    glVertex2f(0.0f,0.0f);
    glVertex2f(0.05f,0.03f);

    glVertex2f(0.05f,0.03f);
    glVertex2f(0.04f,0.05f);

    glVertex2f(0.04f,0.05f);
    glVertex2f(0.05f,0.12f);

    glVertex2f(0.05f,0.12f);
    glVertex2f(0.02f,0.12f);

    glVertex2f(0.02f,0.12f);
    glVertex2f(0.04f,0.2f);

    glVertex2f(0.04f,0.2f);
    glVertex2f(0.06f,0.2f);

    glVertex2f(0.06f,0.2f);
    glVertex2f(0.08f,0.27f);

    glVertex2f(0.08f,0.27f);
    glVertex2f(0.03f,0.27f);

    glVertex2f(0.03f,0.27f);
    glVertex2f(0.05f,0.32f);

    glVertex2f(0.05f,0.32f);
    glVertex2f(0.08f,0.32f);

    glVertex2f(0.08f,0.32f);
    glVertex2f(0.1f,0.36f);

    glVertex2f(0.1f,0.36f);
    glVertex2f(0.06f,0.36f);

    glVertex2f(0.06f,0.36f);
    glVertex2f(0.08f,0.4);

    glVertex2f(0.08f,0.4);
    glVertex2f(0.0f,0.4);

    glEnd();

//--------------------
//UP-LEFT

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);

    glVertex2f(0.0f,0.0f);
    glVertex2f(-0.05f,0.03f);

    glVertex2f(-0.05f,0.03f);
    glVertex2f(-0.04f,0.05f);

    glVertex2f(-0.04f,0.05f);
    glVertex2f(-0.05f,0.12f);

    glVertex2f(-0.05f,0.12f);
    glVertex2f(-0.02f,0.12f);

    glVertex2f(-0.02f,0.12f);
    glVertex2f(-0.04f,0.2f);

    glVertex2f(-0.04f,0.2f);
    glVertex2f(-0.06f,0.2f);

    glVertex2f(-0.06f,0.2f);
    glVertex2f(-0.08f,0.27f);

    glVertex2f(-0.08f,0.27f);
    glVertex2f(-0.03f,0.27f);

    glVertex2f(-0.03f,0.27f);
    glVertex2f(-0.05f,0.32f);

    glVertex2f(-0.05f,0.32f);
    glVertex2f(-0.08f,0.32f);

    glVertex2f(-0.08f,0.32f);
    glVertex2f(-0.1f,0.36f);

    glVertex2f(-0.1f,0.36f);
    glVertex2f(-0.06f,0.36f);

    glVertex2f(-0.06f,0.36f);
    glVertex2f(-0.08f,0.4);

    glVertex2f(-0.08f,0.4);
    glVertex2f(0.0f,0.4);

    glEnd();

//********************
//DOWN-RIGHT

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);

    glVertex2f(0.0f,0.0f);
    glVertex2f(0.05f,-0.03f);

    glVertex2f(0.05f,-0.03f);
    glVertex2f(0.04f,-0.05f);

    glVertex2f(0.04f,-0.05f);
    glVertex2f(0.05f,-0.12f);

    glVertex2f(0.05f,-0.12f);
    glVertex2f(0.02f,-0.12f);

    glVertex2f(0.02f,-0.12f);
    glVertex2f(0.04f,-0.2f);

    glVertex2f(0.04f,-0.2f);
    glVertex2f(0.06f,-0.2f);

    glVertex2f(0.06f,-0.2f);
    glVertex2f(0.08f,-0.27f);

    glVertex2f(0.08f,-0.27f);
    glVertex2f(0.03f,-0.27f);

    glVertex2f(0.03f,-0.27f);
    glVertex2f(0.05f,-0.32f);

    glVertex2f(0.05f,-0.32f);
    glVertex2f(0.08f,-0.32f);

    glVertex2f(0.08f,-0.32f);
    glVertex2f(0.1f,-0.36f);

    glVertex2f(0.1f,-0.36f);
    glVertex2f(0.06f,-0.36f);

    glVertex2f(0.06f,-0.36f);
    glVertex2f(0.08f,-0.4);

    glVertex2f(0.08f,-0.4);
    glVertex2f(0.0f,-0.4);

    glEnd();

//--------------------
//DOWN-LEFT

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);

    glVertex2f(0.0f,0.0f);
    glVertex2f(-0.05f,-0.03f);

    glVertex2f(-0.05f,-0.03f);
    glVertex2f(-0.04f,-0.05f);

    glVertex2f(-0.04f,-0.05f);
    glVertex2f(-0.05f,-0.12f);

    glVertex2f(-0.05f,-0.12f);
    glVertex2f(-0.02f,-0.12f);

    glVertex2f(-0.02f,-0.12f);
    glVertex2f(-0.04f,-0.2f);

    glVertex2f(-0.04f,-0.2f);
    glVertex2f(-0.06f,-0.2f);

    glVertex2f(-0.06f,-0.2f);
    glVertex2f(-0.08f,-0.27f);

    glVertex2f(-0.08f,-0.27f);
    glVertex2f(-0.03f,-0.27f);

    glVertex2f(-0.03f,-0.27f);
    glVertex2f(-0.05f,-0.32f);

    glVertex2f(-0.05f,-0.32f);
    glVertex2f(-0.08f,-0.32f);

    glVertex2f(-0.08f,-0.32f);
    glVertex2f(-0.1f,-0.36f);

    glVertex2f(-0.1f,-0.36f);
    glVertex2f(-0.06f,-0.36f);

    glVertex2f(-0.06f,-0.36f);
    glVertex2f(-0.08f,-0.4);

    glVertex2f(-0.08f,-0.4);
    glVertex2f(0.0f,-0.4);

    glEnd();

//********************
//LEFT-DOWN

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);

    glVertex2f(0.0f,0.0f);
    glVertex2f(-0.03f,-0.05f);

    glVertex2f(-0.03f,-0.05f);
    glVertex2f(-0.05f,-0.04f);

    glVertex2f(-0.05f,-0.04f);
    glVertex2f(-0.12f,-0.05f);

    glVertex2f(-0.12f,-0.05f);
    glVertex2f(-0.12f,-0.02f);

    glVertex2f(-0.12f,-0.02f);
    glVertex2f(-0.2f,-0.04f);

    glVertex2f(-0.2f,-0.04f);
    glVertex2f(-0.2f,-0.06f);

    glVertex2f(-0.2f,-0.06f);
    glVertex2f(-0.27f,-0.08f);

    glVertex2f(-0.27f,-0.08f);
    glVertex2f(-0.27f,-0.03f);

    glVertex2f(-0.27f,-0.03f);
    glVertex2f(-0.32f,-0.05f);

    glVertex2f(-0.32f,-0.05f);
    glVertex2f(-0.32f,-0.08f);

    glVertex2f(-0.32f,-0.08f);
    glVertex2f(-0.36f,-0.1f);

    glVertex2f(-0.36f,-0.1f);
    glVertex2f(-0.36f,-0.06f);

    glVertex2f(-0.36f,-0.06f);
    glVertex2f(-0.4f,-0.08);

    glVertex2f(-0.4f,-0.08);
    glVertex2f(-0.4f,0.0);

    glEnd();

//--------------------
//LEFT-UP

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);

    glVertex2f(0.0f,0.0f);
    glVertex2f(-0.03f,0.05f);

    glVertex2f(-0.03f,0.05f);
    glVertex2f(-0.05f,0.04f);

    glVertex2f(-0.05f,0.04f);
    glVertex2f(-0.12f,0.05f);

    glVertex2f(-0.12f,0.05f);
    glVertex2f(-0.12f,0.02f);

    glVertex2f(-0.12f,0.02f);
    glVertex2f(-0.2f,0.04f);

    glVertex2f(-0.2f,0.04f);
    glVertex2f(-0.2f,0.06f);

    glVertex2f(-0.2f,0.06f);
    glVertex2f(-0.27f,0.08f);

    glVertex2f(-0.27f,0.08f);
    glVertex2f(-0.27f,0.03f);

    glVertex2f(-0.27f,0.03f);
    glVertex2f(-0.32f,0.05f);

    glVertex2f(-0.32f,0.05f);
    glVertex2f(-0.32f,0.08f);

    glVertex2f(-0.32f,0.08f);
    glVertex2f(-0.36f,0.1f);

    glVertex2f(-0.36f,0.1f);
    glVertex2f(-0.36f,0.06f);

    glVertex2f(-0.36f,0.06f);
    glVertex2f(-0.4f,0.08);

    glVertex2f(-0.4f,0.08);
    glVertex2f(-0.4f,0.0);

    glEnd();

//********************
//RIGHT-DOWN

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);

    glVertex2f(0.0f,0.0f);
    glVertex2f(0.03f,-0.05f);

    glVertex2f(0.03f,-0.05f);
    glVertex2f(0.05f,-0.04f);

    glVertex2f(0.05f,-0.04f);
    glVertex2f(0.12f,-0.05f);

    glVertex2f(0.12f,-0.05f);
    glVertex2f(0.12f,-0.02f);

    glVertex2f(0.12f,-0.02f);
    glVertex2f(0.2f,-0.04f);

    glVertex2f(0.2f,-0.04f);
    glVertex2f(0.2f,-0.06f);

    glVertex2f(0.2f,-0.06f);
    glVertex2f(0.27f,-0.08f);

    glVertex2f(0.27f,-0.08f);
    glVertex2f(0.27f,-0.03f);

    glVertex2f(0.27f,-0.03f);
    glVertex2f(0.32f,-0.05f);

    glVertex2f(0.32f,-0.05f);
    glVertex2f(0.32f,-0.08f);

    glVertex2f(0.32f,-0.08f);
    glVertex2f(0.36f,-0.1f);

    glVertex2f(0.36f,-0.1f);
    glVertex2f(0.36f,-0.06f);

    glVertex2f(0.36f,-0.06f);
    glVertex2f(0.4f,-0.08);

    glVertex2f(0.4f,-0.08);
    glVertex2f(0.4f,0.0);

    glEnd();

//--------------------
//RIGHT-UP

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);

    glVertex2f(0.0f,0.0f);
    glVertex2f(0.03f,0.05f);

    glVertex2f(0.03f,0.05f);
    glVertex2f(0.05f,0.04f);

    glVertex2f(0.05f,0.04f);
    glVertex2f(0.12f,0.05f);

    glVertex2f(0.12f,0.05f);
    glVertex2f(0.12f,0.02f);

    glVertex2f(0.12f,0.02f);
    glVertex2f(0.2f,0.04f);

    glVertex2f(0.2f,0.04f);
    glVertex2f(0.2f,0.06f);

    glVertex2f(0.2f,0.06f);
    glVertex2f(0.27f,0.08f);

    glVertex2f(0.27f,0.08f);
    glVertex2f(0.27f,0.03f);

    glVertex2f(0.27f,0.03f);
    glVertex2f(0.32f,0.05f);

    glVertex2f(0.32f,0.05f);
    glVertex2f(0.32f,0.08f);

    glVertex2f(0.32f,0.08f);
    glVertex2f(0.36f,0.1f);

    glVertex2f(0.36f,0.1f);
    glVertex2f(0.36f,0.06f);

    glVertex2f(0.36f,0.06f);
    glVertex2f(0.4f,0.08);

    glVertex2f(0.4f,0.08);
    glVertex2f(0.4f,0.0);

    glEnd();
}
/*
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("Test");
    glutInitWindowSize(320, 320);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
*/
void handleMouse(int key, int state, int x, int y)
{
    switch(key)
    {
    case GLUT_RIGHT_BUTTON:
        isMoving=0;
        glutPostRedisplay();
        break;
    case GLUT_LEFT_BUTTON:
        isMoving = 1;
        glutPostRedisplay();
        break;
    }
    //glutPostRedisplay();
}


void handleKeypress(unsigned char key, int x, int y)
{

    switch (tolower(key))
    {

    case 'a':
        WantToShowA=1;
        glutPostRedisplay();
        break;

    case 'b':
        WantToShowB=1;
        glutPostRedisplay();
        break;
    case 'c':
        WantToShowC=1;
        glutPostRedisplay();
        break;
    case 'd':
        WantToShowD=1;
        glutPostRedisplay();
        break;
    }
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);          // Initialize GLUT
    glutInitWindowSize(320, 320);
    glutCreateWindow("Model Transform");
    glutDisplayFunc(display);//
    glutIdleFunc(Idle);
    glutMouseFunc(handleMouse);//glutIdleFunc sets the global idle callback to be func so a GLUT program can perform background processing tasks or continuous animation when window system events are not being received.
    glutKeyboardFunc(handleKeypress);//glutIdleFunc sets the global idle callback to be func so a GLUT program can perform background processing tasks or continuous animation when window system events are not being received.
    glutMainLoop();
    return 0;
}

