/***************************
4103056039 鍾孟儒 第2次作業 4/11
***************************/
//#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")
#include "GL\glew.h"
#include "GL\glut.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "array.h"
int drawway = 1;
int spinway = 1;
int vertiCount;
static GLfloat spin = 0.0;

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	if (spinway == 1) glRotatef(spin, 1.0, 0.0, 0.0);
	else if (spinway == 2) glRotatef(spin, 0.0, 1.0, 0.0);
	else if (spinway == 3) glRotatef(spin, 0.0, 0.0, 1.0);
	glEnableClientState(GL_VERTEX_ARRAY);
	glEnableClientState(GL_COLOR_ARRAY);
	/*glVertexPointer(3, GL_FLOAT, 0, triarr);
	glColorPointer(3, GL_FLOAT, 0, tricolor);*/
	glInterleavedArrays(GL_C3F_V3F,0,intertwinded);
	if (drawway == 1)
	{
		glDrawArrays(GL_TRIANGLES, 0, 897);
		glDrawArrays(GL_POLYGON,897,6);
		glDrawArrays(GL_POLYGON,903,12);
		glDrawArrays(GL_POLYGON,915,7);
		glDrawArrays(GL_POLYGON,922,6);
		glDrawArrays(GL_POLYGON,928,6);
		glDrawArrays(GL_POLYGON,934,8);
		glDrawArrays(GL_POLYGON,942,5);
		glDrawArrays(GL_POLYGON,947,13);
		glDrawArrays(GL_POLYGON,960,11);
		glDrawArrays(GL_POLYGON,971,9);
		glDrawArrays(GL_POLYGON,980,11);
		glDrawArrays(GL_POLYGON,991,6);
		glDrawArrays(GL_POLYGON,997,13);
		glDrawArrays(GL_POLYGON,1010,9);
		glDrawArrays(GL_POLYGON,1019,5);
		glDrawArrays(GL_POLYGON,1024,5);
		glDrawArrays(GL_POLYGON,1029,8);
		glDrawArrays(GL_POLYGON,1037,9);
		glDrawArrays(GL_POLYGON,1046,6);
		glDrawArrays(GL_POLYGON,1052,4);
		glDrawArrays(GL_POLYGON,1056,6);
		glDrawArrays(GL_POLYGON,1062,7);
		glDrawArrays(GL_POLYGON,1069,8);
		glDrawArrays(GL_POLYGON,1077,7);
		glDrawArrays(GL_POLYGON,1084,98);
		glDrawArrays(GL_POLYGON,1182,4);
		glDrawArrays(GL_POLYGON,1186,4);
		glDrawArrays(GL_POLYGON,1190,4);
		glDrawArrays(GL_POLYGON,1194,4);
		glDrawArrays(GL_POLYGON,1198,4);
		glDrawArrays(GL_POLYGON,1202,4);
		glDrawArrays(GL_POLYGON,1206,4);
		glDrawArrays(GL_POLYGON,1210,4);
		glDrawArrays(GL_POLYGON,1214,4);
		glDrawArrays(GL_POLYGON,1218,11);
		glDrawArrays(GL_POLYGON,1229,7);
		glDrawArrays(GL_POLYGON,1236,3);
		glDrawArrays(GL_POLYGON,1239,5);
		glDrawArrays(GL_POLYGON,1244,6);
		glDrawArrays(GL_POLYGON,1250,5);
		glDrawArrays(GL_POLYGON,1255,3);
		glDrawArrays(GL_POLYGON,1258,10);
		glDrawArrays(GL_POLYGON,1268,4);
		glDrawArrays(GL_POLYGON,1272,6);
		glDrawArrays(GL_POLYGON,1278,5);
		glDrawArrays(GL_POLYGON,1283,3);
		glDrawArrays(GL_POLYGON,1286,4);
		glDrawArrays(GL_POLYGON,1290,4);
		glDrawArrays(GL_POLYGON,1294,5);
		glDrawArrays(GL_POLYGON,1299,4);
		glDrawArrays(GL_POLYGON,1303,7);
		glDrawArrays(GL_POLYGON,1310,4);
		glDrawArrays(GL_POLYGON,1314,5);
		glDrawArrays(GL_POLYGON,1319,5);
		glDrawArrays(GL_POLYGON,1324,4);
		glDrawArrays(GL_POLYGON,1328,6);
		glDrawArrays(GL_POLYGON,1334,8);
		glDrawArrays(GL_POLYGON,1342,5);
		glDrawArrays(GL_POLYGON,1347,4);
		glDrawArrays(GL_POLYGON,1351,4);
		glDrawArrays(GL_POLYGON,1355,4);
		glDrawArrays(GL_POLYGON,1359,4);
		glDrawArrays(GL_POLYGON,1363,7);
		glDrawArrays(GL_POLYGON,1370,4);
		glDrawArrays(GL_POLYGON,1374,7);
		glDrawArrays(GL_POLYGON,1381,9);
		glDrawArrays(GL_POLYGON,1390,4);
		glDrawArrays(GL_POLYGON,1394,5);
		glDrawArrays(GL_POLYGON,1399,8);
		glDrawArrays(GL_POLYGON,1407,8);
		glDrawArrays(GL_POLYGON,1415,4);
		glDrawArrays(GL_POLYGON,1419,3);
		glDrawArrays(GL_POLYGON,1422,3);
		glDrawArrays(GL_POLYGON,1425,6);
		glDrawArrays(GL_POLYGON,1431,4);
		glDrawArrays(GL_POLYGON,1435,5);
		glDrawArrays(GL_POLYGON,1440,4);
		glDrawArrays(GL_POLYGON,1444,5);
		glDrawArrays(GL_POLYGON,1449,4);
		glDrawArrays(GL_POLYGON,1453,5);
		glDrawArrays(GL_POLYGON,1458,3);
		glDrawArrays(GL_POLYGON,1461,4);
		glDrawArrays(GL_POLYGON,1465,4);
		glDrawArrays(GL_POLYGON,1469,4);
		glDrawArrays(GL_POLYGON,1473,4);
		glDrawArrays(GL_POLYGON,1477,5);
		glDrawArrays(GL_POLYGON,1482,7);
		glDrawArrays(GL_POLYGON,1489,5);
		glDrawArrays(GL_POLYGON,1494,5);
		glDrawArrays(GL_POLYGON,1499,6);
		glDrawArrays(GL_POLYGON,1505,8);
		glDrawArrays(GL_POLYGON,1513,6);
		glDrawArrays(GL_POLYGON,1519,4);
		glDrawArrays(GL_POLYGON,1523,3);
		glDrawArrays(GL_POLYGON,1526,7);
		glDrawArrays(GL_POLYGON,1533,4);
		glDrawArrays(GL_POLYGON,1537,4);
		glDrawArrays(GL_POLYGON,1541,6);
		glDrawArrays(GL_POLYGON,1547,4);
		glDrawArrays(GL_POLYGON,1551,6);
		glDrawArrays(GL_POLYGON,1557,6);
		glDrawArrays(GL_POLYGON,1563,5);
		glDrawArrays(GL_POLYGON,1568,7);
		glDrawArrays(GL_POLYGON,1575,4);
		glDrawArrays(GL_POLYGON,1579,7);
		glDrawArrays(GL_POLYGON,1586,6);
		glDrawArrays(GL_POLYGON,1592,4);
		glDrawArrays(GL_POLYGON,1596,9);
		glDrawArrays(GL_POLYGON,1605,4);
		glDrawArrays(GL_POLYGON,1609,5);
		glDrawArrays(GL_POLYGON,1614,7);
		glDrawArrays(GL_POLYGON,1621,4);
		glDrawArrays(GL_POLYGON,1625,6);
		glDrawArrays(GL_POLYGON,1631,5);
		glDrawArrays(GL_POLYGON,1636,4);
		glDrawArrays(GL_POLYGON,1640,3);
		glDrawArrays(GL_POLYGON,1643,7);
		glDrawArrays(GL_POLYGON,1650,6);
		glDrawArrays(GL_POLYGON,1656,4);
		glDrawArrays(GL_POLYGON,1660,7);
		glDrawArrays(GL_POLYGON,1667,7);
		glDrawArrays(GL_POLYGON,1674,5);
		glDrawArrays(GL_POLYGON,1679,3);
		glDrawArrays(GL_POLYGON,1682,11);
		glDrawArrays(GL_POLYGON,1693,6);
		glDrawArrays(GL_POLYGON,1699,3);
		glDrawArrays(GL_POLYGON,1702,12);
		glDrawArrays(GL_POLYGON,1714,3);
		glDrawArrays(GL_POLYGON,1717,3);
		glDrawArrays(GL_POLYGON,1720,3);
	}
	else if (drawway == 2)
	{
		glDrawElements(GL_TRIANGLES,897,GL_UNSIGNED_INT,indices0);
		glDrawElements(GL_POLYGON,6,GL_UNSIGNED_INT,indices1);
		glDrawElements(GL_POLYGON,12,GL_UNSIGNED_INT,indices2);
		glDrawElements(GL_POLYGON,7,GL_UNSIGNED_INT,indices3);
		glDrawElements(GL_POLYGON,6,GL_UNSIGNED_INT,indices4);
		glDrawElements(GL_POLYGON,6,GL_UNSIGNED_INT,indices5);
		glDrawElements(GL_POLYGON,8,GL_UNSIGNED_INT,indices6);
		glDrawElements(GL_POLYGON,5,GL_UNSIGNED_INT,indices7);
		glDrawElements(GL_POLYGON,13,GL_UNSIGNED_INT,indices8);
		glDrawElements(GL_POLYGON,11,GL_UNSIGNED_INT,indices9);
		glDrawElements(GL_POLYGON,9,GL_UNSIGNED_INT,indices10);
		glDrawElements(GL_POLYGON,11,GL_UNSIGNED_INT,indices11);
		glDrawElements(GL_POLYGON,6,GL_UNSIGNED_INT,indices12);
		glDrawElements(GL_POLYGON,13,GL_UNSIGNED_INT,indices13);
		glDrawElements(GL_POLYGON,9,GL_UNSIGNED_INT,indices14);
		glDrawElements(GL_POLYGON,5,GL_UNSIGNED_INT,indices15);
		glDrawElements(GL_POLYGON,5,GL_UNSIGNED_INT,indices16);
		glDrawElements(GL_POLYGON,8,GL_UNSIGNED_INT,indices17);
		glDrawElements(GL_POLYGON,9,GL_UNSIGNED_INT,indices18);
		glDrawElements(GL_POLYGON,6,GL_UNSIGNED_INT,indices19);
		glDrawElements(GL_POLYGON,4,GL_UNSIGNED_INT,indices20);
		glDrawElements(GL_POLYGON,6,GL_UNSIGNED_INT,indices21);
		glDrawElements(GL_POLYGON,7,GL_UNSIGNED_INT,indices22);
		glDrawElements(GL_POLYGON,8,GL_UNSIGNED_INT,indices23);
		glDrawElements(GL_POLYGON,7,GL_UNSIGNED_INT,indices24);
		glDrawElements(GL_POLYGON,98,GL_UNSIGNED_INT,indices25);
		glDrawElements(GL_POLYGON,4,GL_UNSIGNED_INT,indices26);
		glDrawElements(GL_POLYGON,4,GL_UNSIGNED_INT,indices27);
		glDrawElements(GL_POLYGON,4,GL_UNSIGNED_INT,indices28);
		glDrawElements(GL_POLYGON,4,GL_UNSIGNED_INT,indices29);
		glDrawElements(GL_POLYGON,4,GL_UNSIGNED_INT,indices30);
		glDrawElements(GL_POLYGON,4,GL_UNSIGNED_INT,indices31);
		glDrawElements(GL_POLYGON,4,GL_UNSIGNED_INT,indices32);
		glDrawElements(GL_POLYGON,4,GL_UNSIGNED_INT,indices33);
		glDrawElements(GL_POLYGON,4,GL_UNSIGNED_INT,indices34);
		glDrawElements(GL_POLYGON,11,GL_UNSIGNED_INT,indices35);
		glDrawElements(GL_POLYGON,7,GL_UNSIGNED_INT,indices36);
		glDrawElements(GL_POLYGON,3,GL_UNSIGNED_INT,indices37);
		glDrawElements(GL_POLYGON,5,GL_UNSIGNED_INT,indices38);
		glDrawElements(GL_POLYGON,6,GL_UNSIGNED_INT,indices39);
		glDrawElements(GL_POLYGON,5,GL_UNSIGNED_INT,indices40);
		glDrawElements(GL_POLYGON,3,GL_UNSIGNED_INT,indices41);
		glDrawElements(GL_POLYGON,10,GL_UNSIGNED_INT,indices42);
		glDrawElements(GL_POLYGON,4,GL_UNSIGNED_INT,indices43);
		glDrawElements(GL_POLYGON,6,GL_UNSIGNED_INT,indices44);
		glDrawElements(GL_POLYGON,5,GL_UNSIGNED_INT,indices45);
		glDrawElements(GL_POLYGON,3,GL_UNSIGNED_INT,indices46);
		glDrawElements(GL_POLYGON,4,GL_UNSIGNED_INT,indices47);
		glDrawElements(GL_POLYGON,4,GL_UNSIGNED_INT,indices48);
		glDrawElements(GL_POLYGON,5,GL_UNSIGNED_INT,indices49);
		glDrawElements(GL_POLYGON,4,GL_UNSIGNED_INT,indices50);
		glDrawElements(GL_POLYGON,7,GL_UNSIGNED_INT,indices51);
		glDrawElements(GL_POLYGON,4,GL_UNSIGNED_INT,indices52);
		glDrawElements(GL_POLYGON,5,GL_UNSIGNED_INT,indices53);
		glDrawElements(GL_POLYGON,5,GL_UNSIGNED_INT,indices54);
		glDrawElements(GL_POLYGON,4,GL_UNSIGNED_INT,indices55);
		glDrawElements(GL_POLYGON,6,GL_UNSIGNED_INT,indices56);
		glDrawElements(GL_POLYGON,8,GL_UNSIGNED_INT,indices57);
		glDrawElements(GL_POLYGON,5,GL_UNSIGNED_INT,indices58);
		glDrawElements(GL_POLYGON,4,GL_UNSIGNED_INT,indices59);
		glDrawElements(GL_POLYGON,4,GL_UNSIGNED_INT,indices60);
		glDrawElements(GL_POLYGON,4,GL_UNSIGNED_INT,indices61);
		glDrawElements(GL_POLYGON,4,GL_UNSIGNED_INT,indices62);
		glDrawElements(GL_POLYGON,7,GL_UNSIGNED_INT,indices63);
		glDrawElements(GL_POLYGON,4,GL_UNSIGNED_INT,indices64);
		glDrawElements(GL_POLYGON,7,GL_UNSIGNED_INT,indices65);
		glDrawElements(GL_POLYGON,9,GL_UNSIGNED_INT,indices66);
		glDrawElements(GL_POLYGON,4,GL_UNSIGNED_INT,indices67);
		glDrawElements(GL_POLYGON,5,GL_UNSIGNED_INT,indices68);
		glDrawElements(GL_POLYGON,8,GL_UNSIGNED_INT,indices69);
		glDrawElements(GL_POLYGON,8,GL_UNSIGNED_INT,indices70);
		glDrawElements(GL_POLYGON,4,GL_UNSIGNED_INT,indices71);
		glDrawElements(GL_POLYGON,3,GL_UNSIGNED_INT,indices72);
		glDrawElements(GL_POLYGON,3,GL_UNSIGNED_INT,indices73);
		glDrawElements(GL_POLYGON,6,GL_UNSIGNED_INT,indices74);
		glDrawElements(GL_POLYGON,4,GL_UNSIGNED_INT,indices75);
		glDrawElements(GL_POLYGON,5,GL_UNSIGNED_INT,indices76);
		glDrawElements(GL_POLYGON,4,GL_UNSIGNED_INT,indices77);
		glDrawElements(GL_POLYGON,5,GL_UNSIGNED_INT,indices78);
		glDrawElements(GL_POLYGON,4,GL_UNSIGNED_INT,indices79);
		glDrawElements(GL_POLYGON,5,GL_UNSIGNED_INT,indices80);
		glDrawElements(GL_POLYGON,3,GL_UNSIGNED_INT,indices81);
		glDrawElements(GL_POLYGON,4,GL_UNSIGNED_INT,indices82);
		glDrawElements(GL_POLYGON,4,GL_UNSIGNED_INT,indices83);
		glDrawElements(GL_POLYGON,4,GL_UNSIGNED_INT,indices84);
		glDrawElements(GL_POLYGON,4,GL_UNSIGNED_INT,indices85);
		glDrawElements(GL_POLYGON,5,GL_UNSIGNED_INT,indices86);
		glDrawElements(GL_POLYGON,7,GL_UNSIGNED_INT,indices87);
		glDrawElements(GL_POLYGON,5,GL_UNSIGNED_INT,indices88);
		glDrawElements(GL_POLYGON,5,GL_UNSIGNED_INT,indices89);
		glDrawElements(GL_POLYGON,6,GL_UNSIGNED_INT,indices90);
		glDrawElements(GL_POLYGON,8,GL_UNSIGNED_INT,indices91);
		glDrawElements(GL_POLYGON,6,GL_UNSIGNED_INT,indices92);
		glDrawElements(GL_POLYGON,4,GL_UNSIGNED_INT,indices93);
		glDrawElements(GL_POLYGON,3,GL_UNSIGNED_INT,indices94);
		glDrawElements(GL_POLYGON,7,GL_UNSIGNED_INT,indices95);
		glDrawElements(GL_POLYGON,4,GL_UNSIGNED_INT,indices96);
		glDrawElements(GL_POLYGON,4,GL_UNSIGNED_INT,indices97);
		glDrawElements(GL_POLYGON,6,GL_UNSIGNED_INT,indices98);
		glDrawElements(GL_POLYGON,4,GL_UNSIGNED_INT,indices99);
		glDrawElements(GL_POLYGON,6,GL_UNSIGNED_INT,indices100);
		glDrawElements(GL_POLYGON,6,GL_UNSIGNED_INT,indices101);
		glDrawElements(GL_POLYGON,5,GL_UNSIGNED_INT,indices102);
		glDrawElements(GL_POLYGON,7,GL_UNSIGNED_INT,indices103);
		glDrawElements(GL_POLYGON,4,GL_UNSIGNED_INT,indices104);
		glDrawElements(GL_POLYGON,7,GL_UNSIGNED_INT,indices105);
		glDrawElements(GL_POLYGON,6,GL_UNSIGNED_INT,indices106);
		glDrawElements(GL_POLYGON,4,GL_UNSIGNED_INT,indices107);
		glDrawElements(GL_POLYGON,9,GL_UNSIGNED_INT,indices108);
		glDrawElements(GL_POLYGON,4,GL_UNSIGNED_INT,indices109);
		glDrawElements(GL_POLYGON,5,GL_UNSIGNED_INT,indices110);
		glDrawElements(GL_POLYGON,7,GL_UNSIGNED_INT,indices111);
		glDrawElements(GL_POLYGON,4,GL_UNSIGNED_INT,indices112);
		glDrawElements(GL_POLYGON,6,GL_UNSIGNED_INT,indices113);
		glDrawElements(GL_POLYGON,5,GL_UNSIGNED_INT,indices114);
		glDrawElements(GL_POLYGON,4,GL_UNSIGNED_INT,indices115);
		glDrawElements(GL_POLYGON,3,GL_UNSIGNED_INT,indices116);
		glDrawElements(GL_POLYGON,7,GL_UNSIGNED_INT,indices117);
		glDrawElements(GL_POLYGON,6,GL_UNSIGNED_INT,indices118);
		glDrawElements(GL_POLYGON,4,GL_UNSIGNED_INT,indices119);
		glDrawElements(GL_POLYGON,7,GL_UNSIGNED_INT,indices120);
		glDrawElements(GL_POLYGON,7,GL_UNSIGNED_INT,indices121);
		glDrawElements(GL_POLYGON,5,GL_UNSIGNED_INT,indices122);
		glDrawElements(GL_POLYGON,3,GL_UNSIGNED_INT,indices123);
		glDrawElements(GL_POLYGON,11,GL_UNSIGNED_INT,indices124);
		glDrawElements(GL_POLYGON,6,GL_UNSIGNED_INT,indices125);
		glDrawElements(GL_POLYGON,3,GL_UNSIGNED_INT,indices126);
		glDrawElements(GL_POLYGON,12,GL_UNSIGNED_INT,indices127);
		glDrawElements(GL_POLYGON,3,GL_UNSIGNED_INT,indices128);
		glDrawElements(GL_POLYGON,3,GL_UNSIGNED_INT,indices129);
		glDrawElements(GL_POLYGON,3,GL_UNSIGNED_INT,indices130);
	}
	else if (drawway == 3)
	{
		glMultiDrawArrays(GL_TRIANGLES,firstValuestri,countValuestri,1);
		glMultiDrawArrays(GL_POLYGON, firstValues, countValues, 130);
	}
	else if (drawway == 4)
	{
		glMultiDrawElements(GL_TRIANGLES, countValuestri, GL_UNSIGNED_INT, indicestri, 1);
		glMultiDrawElements(GL_POLYGON, countValues, GL_UNSIGNED_INT, indices, 130);

	}
	glPopMatrix();
	glutSwapBuffers();
	glFlush();
}
void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}
void keyboard(unsigned char key, int x, int y)
{
	switch (key) {
	case 27:
		exit(0);
		break;
	case 49:
		drawway = 1;
		display();
		break;
	case 50:
		drawway = 2;
		display();
		break;
	case 51:
		drawway = 3;
		display();
		break;
	case 52:
		drawway = 4;
		display();
		break;
	}
}

void spinDisplay(void)
{
	spin = spin + 2.0;
	if (spin > 360.0)
		spin = spin - 360.0;
	glutPostRedisplay();
}

void mouse(int button, int state, int x, int y)
{
	glutIdleFunc(spinDisplay);
	switch (button) {
	case GLUT_LEFT_BUTTON:
		if (state == GLUT_DOWN)
			spinway = 1;
		break;
	case GLUT_MIDDLE_BUTTON:
		if (state == GLUT_DOWN)
			spinway = 2;
		break;
	case GLUT_RIGHT_BUTTON:
		if (state == GLUT_DOWN)
			spinway = 3;
		break;
	default:
		break;
	}
}

int main(int argc, char** argv)
{
	/*printf("%d", sizeof(triarr) / sizeof(triarr[0]));
	system("PAUSE");*/
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(1000, 250);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("hello");
	init();
	glewInit();
	vertiCount = (sizeof(triarr) / sizeof(triarr[0])) / 3;
	//printf("%d", vertiCount);
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);
	glutMouseFunc(mouse);
	glutMainLoop();
	//system("PAUSE");
	return 0;
}
