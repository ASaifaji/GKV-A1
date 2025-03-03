#include <gl/glut.h> 

void garis(void){
	//membersihkan layar dan men-set dalam format warna
	glClear(GL_COLOR_BUFFER_BIT);
		
	//membuat garis
	glLineWidth(2.0f);
	glBegin(GL_LINES);
	glColor3f(1.0f,1.0f,1.0f);
	glVertex3f(0.00,0.20,0.0);
	glVertex3f(0.00,-0.20,0.0);
	glEnd();
	//memastikan seluruh perintah tereksekusi 
	glFlush();
}

int main(int argc,char* argv[]){
	glutInit(&argc,argv);
	glutInitWindowSize(640,480);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGBA);
	glutCreateWindow("Membuat Garis");
	glutDisplayFunc(garis);
	glClearColor(0.0f,0.0f,1.0f,1.0f);
	glutMainLoop();
	return 0;
}
