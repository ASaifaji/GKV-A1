#include <GL/glut.h>

static int shoulder = 0, elbow = 0, wrist = 0, pinky = 0, ring = 0, middle = 0, index = 0, thumb = 0, thumb2 = 0, thumb_angle = 0;
static float thumb_rad = 0.0;


void init(void) {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glShadeModel(GL_FLAT);
}

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();

    glTranslatef(-3.0, 0.0, 0.0);
    glRotatef((GLfloat)shoulder, 0.0, 1.0, 0.0);
    glTranslatef(1.0, 0.0, 0.0);
    glPushMatrix();
    
    glScalef(2.0, 0.6, 0.4);
    glutWireCube(1.0);
    glPopMatrix();

    glTranslatef(1.0, 0.0, 0.0);
    glRotatef((GLfloat)elbow, 0.0, 1.0, 0.0);
    glTranslatef(1.0, 0.0, 0.0);
    glPushMatrix();
    
    glScalef(2.0, 0.6, 0.4);
    glutWireCube(1.0);
    glPopMatrix();
    
    glTranslatef(1.0,0.0,0.0);
    glRotatef((GLfloat)wrist, 0.0, 1.0, 0.0);
    glTranslatef(0.4,0.0,0.0);
    glPushMatrix();
    
    glScalef(0.8, 1.1, 0.4);
    glutWireCube(1.0);
    glPopMatrix();
    
    glTranslatef(0.4,-0.45,0.0);
    glRotatef(pinky, 0.0, 1.0, 0.0);
    glTranslatef(0.3,0.0,0.0);
    glPushMatrix();
    
    glScalef(0.6, 0.2, 0.2);
    glutWireCube(1.0);
    glPopMatrix();
    
    glTranslatef(-0.3,0.3,0.0);
    glRotatef((GLfloat)ring, 0.0, 1.0, 0.0);
    glTranslatef(0.3,0.0,0.0);
    glPushMatrix();
    
    glScalef(0.6, 0.2, 0.2);
    glutWireCube(1.0);
    glPopMatrix();
    
    glTranslatef(-0.3,0.3,0.0);
    glRotatef((GLfloat)middle, 0.0, 1.0, 0.0);
    glTranslatef(0.3,0.0,0.0);
    glPushMatrix();
    
    glScalef(0.6, 0.2, 0.2);
    glutWireCube(1.0);
    glPopMatrix();
    
    glTranslatef(-0.3,0.3,0.0);
    glRotatef((GLfloat)index, 0.0, 1.0, 0.0);
    glTranslatef(0.3,0.0,0.0);
    glPushMatrix();
    
    glScalef(0.6, 0.2, 0.2);
    glutWireCube(1.0);
    glPopMatrix();
    
    // 
    glTranslatef(-0.3,0.0,0.0);
    glRotatef((GLfloat)thumb_angle, 0.0,1.0,0.0);
    glTranslatef(-0.4,0.1,0.0);
    glRotatef(45, 0.0, 0.0, 1.0);
    glRotatef((GLfloat)thumb, 0.0, 1.0, 0.0);
    glRotatef((GLfloat)thumb2, 0.0, 0.0, 1.0);
    glTranslatef(0.3,0.0,0.0);
    glPushMatrix();
    
    glScalef(0.5, 0.2, 0.2);
    glutWireCube(1.0);
    glPopMatrix();
    
    glPopMatrix();
    glutSwapBuffers();
}

void reshape(int w, int h) {
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(65.0, (GLfloat)w / (GLfloat)h, 1.0, 20.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0.0, 0.0, -5.0);
}

void keyboard(unsigned char key, int x, int y) {
    switch (key) {
        case 119: // w
        	if(shoulder >= 55){
        		break;
        	}
            shoulder = (shoulder + 5) % 360;
            break;
        case 115: // s
        	if(shoulder <= -55){
        		break;
        	}
            shoulder = (shoulder - 5) % 360;
            break;
        case 101: // e
        	if(elbow >= 0){
        		break;
        	}
            elbow = (elbow + 5) % 360;
            break;
        case 100: // d
        	if(elbow <= -140){
        		break;
        	}
            elbow = (elbow - 5) % 360;
            break;
        case 114: // r
        	if(wrist >= 90){
        		break;
        	}
        	wrist = (wrist + 5) % 360;
        	break;
        case 102: // f
        	if(wrist <= -90){
        		break;
        	}
        	wrist = (wrist - 5) % 360;
        	break;
        case 116: // t
        	if(thumb >= 5){
        		break;
        	}
        	else{
        		if(thumb < -90){
        			thumb = (thumb + 5) % 360;
        			thumb2 = (thumb2 + 5) % 360;
        			break;
        		}
        		thumb = (thumb + 5) % 360;
        		break;
        	}
        case 103: // g
        	if(thumb <= -90){
        		if(thumb <= -150){
        			break;
        		}
        		thumb = (thumb - 5 ) % 360;
        		thumb2 = (thumb2 - 5 ) % 360;
        		break;
        	}
        	else{
        		thumb = (thumb - 5) % 360;
	        	break;
        	}
        case 121: // y
        	if(index >= 10){
        		break;
        	}
        	index = (index + 5) % 360;
        	thumb_angle = (thumb_angle - 5) % 360;
         	break;
        case 104: // h
        	if(index <= -150){
        		break;
        	}
        	index = (index - 5) % 360;
        	thumb_angle = (thumb_angle + 5) % 360;
        	break;
        case 117: // u
        	if(middle >= 10){
        		break;
        	}
        	middle = (middle + 5) % 360;
        	index = (index - 5) % 360;
        	break;
        case 106: // j
        	if(middle <= -150){
        		break;
        	}
        	middle = (middle - 5) % 360;
        	index = (index + 5) % 360;
        	break;
        case 105: // i
        	if(ring >= 10){
        		break;
        	}
        	ring = (ring + 5) % 360;
        	middle = (middle - 5) % 360;
        	break;
        case 107: // k
        	if(ring <= -150){
        		break;
        	}
        	ring = (ring - 5) % 360;
        	middle = (middle + 5) % 360;
        	break;
        case 111: // o
        	if(pinky >= 10){
        		break;
        	}
        	pinky = (pinky + 5) % 360;
        	ring = (ring - 5) % 360;
        	break;
        case 108: // l
        	if(pinky <= -150){
        		break;
        	}
        	pinky = (pinky - 5) % 360;
        	ring = (ring + 5) % 360;
        	break;
        case 27: // Escape key
            exit(0);
            break;
        default:
            break;
    }
    glutPostRedisplay();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1360, 720);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Robot Arm");
    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutKeyboardFunc(keyboard);
    glutMainLoop();
    return 0;
}

