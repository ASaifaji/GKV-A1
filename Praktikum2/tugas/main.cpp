#include <gl/glut.h>
#include <gl/gl.h>
#include <math.h>

float x,y,i;
float PI = 3.14159265;

void lingkaran(GLfloat x, GLfloat y, GLfloat radius, int circle_points) {
    glBegin(GL_TRIANGLE_FAN);
    
    glVertex2f(x, y);
    for (int i = 0; i <= circle_points; i++) {
        float angle = 2.0f * PI * i / circle_points;
        glVertex2f(x + radius * cos(angle), y + radius * sin(angle));
    }
    
    glEnd();
}

void mobil(float x, float y, float r, float g, float b) {
    glTranslatef(x, y, 0);
    
    // body depan
    glBegin(GL_POLYGON);
	    glColor3f(1.0, 0.831372549, 0.0);
	    glVertex2f(-0.6463055556, -0.6974166667); // 127.33, 407.38
	    glVertex2f(-0.4981388889, -0.6974166667); // 180.67, 407.38
	    glVertex2f(-0.4981388889, -0.7083333333); // 180.67, 410
	    glVertex2f(-0.2777777778, -0.7083333333); // 260, 410
	    glVertex2f(-0.2777777778, -0.4413333333); // 260, 345.92
	    glVertex2f(-0.3, -0.44); // 252, 345.6
	    glVertex2f(-0.3208333333, -0.43125); // 244.5, 343.5
	    glVertex2f(-0.3430555556, -0.4229166667); // 236.5, 341.5
	    glVertex2f(-0.3569444444, -0.4229166667); // 231.5, 341.5 
	    glVertex2f(-0.4430555556, -0.45); // 200.5, 348
	    glVertex2f(-0.5055555556, -0.4729166667); // 178, 353.5
	    glVertex2f(-0.5648055556, -0.5012916667); // 156.67, 360.31
	    glVertex2f(-0.5958333333, -0.5166666667); // 145.5, 364
	    glVertex2f(-0.6259166667, -0.5394166667); // 134.67, 369.46
	    glVertex2f(-0.6463055556, -0.55575); // 127.33, 373.38
	    glVertex2f(-0.6611111111, -0.5729166667); // 122, 377.5
	    glVertex2f(-0.6611111111, -0.61025); // 122, 386.46
	    glVertex2f(-0.6536944444, -0.6157083333); // 124.67, 387.77
	    glVertex2f(-0.6388888889, -0.6810833333); // 130, 403.46
	    glVertex2f(-0.6463055556, -0.6974166667); // 127.33,407.38
    glEnd();
    
    // body tengah
    glBegin(GL_POLYGON);
	    glColor3f(1.0, 0.831372549, 0.0);
	    glVertex2f(0.0, 0.0); // 259.33, 345.89
	    glVertex2f(0.0, 0.0); // 359.33, 344.58
	    glVertex2f(0.0, 0.0); // 391.33, 342.61
	    glVertex2f(0.0, 0.0); // 406, 341.29
	    glVertex2f(0.0, 0.0); // 434.67, 338.33
	    glVertex2f(0.0, 0.0); // 454, 338
	    glVertex2f(0.0, 0.0); // 454, 410.37
	    glVertex2f(0.0, 0.0); // 451.33, 413
	    glVertex2f(0.0, 0.0); // 259, 413
	    glVertex2f(0.0, 0.0); // 259.33, 345.89
    glEnd();
    
    // body belakang
    glBegin(GL_POLYGON);
	    glColor3f(1.0, 0.831372549, 0.0);
	    glVertex2f(0.0, 0.0); // 454, 
	    glVertex2f(0.0, 0.0); // 478.11, 
	    glVertex2f(0.0, 0.0); // 498.2, 
	    glVertex2f(0.0, 0.0); // 513.27, 
	    glVertex2f(0.0, 0.0); // 526.5, 
	    glVertex2f(0.0, 0.0); // 543.5, 
	    glVertex2f(0.0, 0.0); // 568, 
	    glVertex2f(0.0, 0.0); // 590, 
	    glVertex2f(0.0, 0.0); // 590, 
	    glVertex2f(0.0, 0.0); // 588.5, 
	    glVertex2f(0.0, 0.0); // 587, 
	    glVertex2f(0.0, 0.0); // 589, 
	    glVertex2f(0.0, 0.0); // 588.5, 
	    glVertex2f(0.0, 0.0); // 586, 
	    glVertex2f(0.0, 0.0); // 586, 
	    glVertex2f(0.0, 0.0); // 602, 
	    glVertex2f(0.0, 0.0); // 602, 
	    glVertex2f(0.0, 0.0); // 584.5, 
	    glVertex2f(0.0, 0.0); // 576, 
	    glVertex2f(0.0, 0.0); // 568.5, 
	    glVertex2f(0.0, 0.0); // 565, 
	    glVertex2f(0.0, 0.0); // 554, 
	    glVertex2f(0.0, 0.0); // 551.5, 
	    glVertex2f(0.0, 0.0); // 544, 
	    glVertex2f(0.0, 0.0); // 538, 
	    glVertex2f(0.0, 0.0); // 538, 
	    glVertex2f(0.0, 0.0); // 527.5, 
	    glVertex2f(0.0, 0.0); // 464.5, 
	    glVertex2f(0.0, 0.0); // 454, 
	    glVertex2f(0.0, 0.0); // 454, 
    glEnd();
    
    // Kaca mobil
    glBegin(GL_POLYGON);
    	glColor3f(0.1f, 0.1f, 0.1f);
    	glVertex2f(-0.31, -0.02);
    	glVertex2f(-0.05, 0.13);
    	glVertex2f(0.20, 0.04);
    	glVertex2f(0.20, 0.00);
    glEnd();
    
    // Roda kiri
    glColor3f(0.0f, 0.0f, 0.0f);
    lingkaran(-0.3916666667, -0.6541666667, 0.09166666667, 100);
    glColor3f(1.0f, 1.0f, 1.0f);
    lingkaran(-0.3916666667, -0.6541666667, 0.06759722222, 100);

    // Roda kanan
    glColor3f(0.0f, 0.0f, 0.0f);
    lingkaran(0.375, -0.6541666667, 0.09166666667, 100);
    glColor3f(1.0f, 1.0f, 1.0f);
    lingkaran(0.375, -0.6541666667, 0.06759722222, 100);
}

void renderObjects() {
	glClear(GL_COLOR_BUFFER_BIT);
	
	// Matahari
    glColor3f(0.9f, 0.8f, 0.1f);
    lingkaran(0.0, 0.0, 0.3, 100);

	
	// Jalan
    glColor3f(0.4f, 0.4f, 0.4f);
    glRectf(-1.0, -0.3, 1.0, -1.0);
    
    // Mobil
    mobil(0.0f, 0.0f, 0.6f, 0.6f, 0.6f);
	
	glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(720, 480);
    glutInitWindowPosition(600, 0);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("mobil");

    glutDisplayFunc(renderObjects);
    glClearColor(0.8f, 0.6f, 0.1f, 1.0f);  // Langit senja
    glutMainLoop();

    return 0;
}

