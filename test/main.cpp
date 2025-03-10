#include <gl/glut.h>
#include <gl/gl.h>
#include <math.h>

void RenderScene(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix();
    glLineWidth(2.0f);
    glBegin(GL_LINES);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex3f(0.00, 0.20, 0.0);
        glVertex3f(0.00, -0.20, 0.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glPointSize(5.0f);
    glTranslatef(0.35, 0.35, 0.0);
    glBegin(GL_POINTS);
        glColor3f(1.0f, 1.0f, 1.0f);
        glVertex3f(0.25, 0.25, 0.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.50, 0.50, 0.00);
    glBegin(GL_TRIANGLE_STRIP);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex3f(-0.05, -0.05, 0.00);
        glColor3f(0.0f, 1.0f, 0.0f);
        glVertex3f(0.15, -0.05, 0.00);
        glColor3f(0.0f, 0.0f, 1.0f);
        glVertex3f(-0.05, 0.05, 0.00);
        glColor3f(1.0f, 1.0f, 0.0f);
        glVertex3f(0.15, 0.05, 0.00);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    #define PI 3.1415926535898
    glBegin(GL_LINE_LOOP);
        GLint circle_points = 100;
        int i;
        float angle;
        for (i = 0; i < circle_points; i++) {
            angle = 2 * PI * i / circle_points;
            glVertex2f(cos(angle), sin(angle));
        }
    glEnd();
    glPopMatrix();
    
    glPushMatrix();
    glBegin(GL_POLYGON);
    	glColor3f(255.0,212.0,0.0);
	    glVertex3f(16.0,425.0,0.0);
	    glVertex3f(20.0,425.0,0.0);
	    glVertex3f(20.0,400.0,0.0);
	    glVertex3f(16.0,400.0,0.0);
    glEnd();
    glPopMatrix();

    glFlush();
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(720, 720);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("Simple");
    glutDisplayFunc(RenderScene);
    glClearColor(0.0f, 0.0f, 1.0f, 1.0f);
    glutMainLoop();
    return 0;
}

