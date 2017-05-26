/***************************
4103056039 鍾孟儒 第4次作業5/15
***************************/
//please use 'esc' to terminate this program
#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")
#include "GL\glew.h"
#include "GL\glut.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "array.h"
#include <thread>
using namespace std;

bool backflag = true, jumping = false, firing = false, swinging = false;
bool engb = false, logob = false, wordb1 = false, wordb2 = false, wordb3 = false, wordb4 = false, wordb5 = false, wordb6 = false;
static GLfloat spin = 0.0;
static int shoulder = 0, elbow = 0, finger = 0, year = 0;
float fireballx, firebally, fireballz;
float eyex = 0.0, eyey = 0.2, eyez = 5.0, towx = 0.0, towy = 0.0, towz = -5.0, upx = 0.0, upy = 1.0, upz = 0.0;
float gravity = 9.8;
float v = 500;
int blood = 8;
GLfloat mat_shininess[] = { 50.0 };
GLfloat light_position[] = { 1.0, 1.0, 1.0, 0.0 };
GLfloat white_light[] = { 1.0, 1.0, 1.0, 1.0 };
GLfloat lmodel_ambient[] = { 0.1, 0.1, 0.1, 1.0 };

GLfloat no_mat[] = { 0.0, 0.0, 0.0, 1.0 };
GLfloat mat_ambient[] = { 0.7, 0.7, 0.7, 1.0 };
GLfloat mat_ambient_color[] = { 0.8, 0.8, 0.2, 1.0 };
GLfloat mat_diffuse[] = { 0.1, 0.5, 0.8, 1.0 };
GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
GLfloat no_shininess[] = { 0.0 };
GLfloat low_shininess[] = { 5.0 };
GLfloat high_shininess[] = { 100.0 };
GLfloat mat_emission[] = { 0.3, 0.2, 0.2, 0.0 };

void reshape(int w, int h);
void fireball();
void display(void)
{
	glEnable(GL_CULL_FACE);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();

	gluLookAt(eyex, eyey, eyez, eyex + towx, eyey + towy, eyez + towz, upx, upy, upz);

	//floor
	glPushMatrix();
	glColor3f(0.5, 0.5, 1.0);
	glBegin(GL_POLYGON);
	glVertex3f(-1000, -10.0, 1000);
	glVertex3f(1000, -10.0, 1000);
	glVertex3f(1000, -10.0, -1000);
	glVertex3f(-1000, -10.0, -1000);
	glEnd();
	glPopMatrix();
	//end floor

	glEnableClientState(GL_VERTEX_ARRAY);
	glEnableClientState(GL_COLOR_ARRAY);
	glVertexPointer(3, GL_FLOAT, 0, triarr);
	glColorPointer(3, GL_FLOAT, 0, tricolor);


	glPushMatrix();
	if (engb)glCullFace(GL_FRONT_AND_BACK);
	glDrawArrays(GL_TRIANGLES, 0, 897);
	glPopMatrix();
	glCullFace(GL_BACK);

	glPushMatrix();
	if (wordb2)glCullFace(GL_FRONT_AND_BACK);
	glDrawArrays(GL_POLYGON, 897, 6);
	glDrawArrays(GL_POLYGON, 903, 12);
	glDrawArrays(GL_POLYGON, 915, 7);
	glDrawArrays(GL_POLYGON, 922, 6);
	glDrawArrays(GL_POLYGON, 928, 6);
	glDrawArrays(GL_POLYGON, 934, 8);
	glPopMatrix();
	glCullFace(GL_BACK);

	glPushMatrix();
	if (wordb3)glCullFace(GL_FRONT_AND_BACK);
	glDrawArrays(GL_POLYGON, 942, 5);
	glDrawArrays(GL_POLYGON, 947, 13);
	glDrawArrays(GL_POLYGON, 960, 11);
	glDrawArrays(GL_POLYGON, 971, 9);
	glDrawArrays(GL_POLYGON, 980, 11);
	glDrawArrays(GL_POLYGON, 991, 6);
	glPopMatrix();
	glCullFace(GL_BACK);

	glPushMatrix();
	if (wordb5)glCullFace(GL_FRONT_AND_BACK);
	glDrawArrays(GL_POLYGON, 997, 13);
	glDrawArrays(GL_POLYGON, 1010, 9);
	glDrawArrays(GL_POLYGON, 1019, 5);
	glDrawArrays(GL_POLYGON, 1024, 5);
	glDrawArrays(GL_POLYGON, 1029, 8);
	glDrawArrays(GL_POLYGON, 1037, 9);
	glDrawArrays(GL_POLYGON, 1046, 6);
	glPopMatrix();
	glCullFace(GL_BACK);

	//logo15
	glPushMatrix();
	if (logob)glCullFace(GL_FRONT_AND_BACK);
	glDrawArrays(GL_POLYGON, 1052, 4);
	glDrawArrays(GL_POLYGON, 1056, 6);
	glDrawArrays(GL_POLYGON, 1062, 7);
	glDrawArrays(GL_POLYGON, 1069, 8);
	glDrawArrays(GL_POLYGON, 1077, 7);
	glDrawArrays(GL_POLYGON, 1084, 98);
	glDrawArrays(GL_POLYGON, 1182, 4);
	glDrawArrays(GL_POLYGON, 1186, 4);
	glDrawArrays(GL_POLYGON, 1190, 4);
	glDrawArrays(GL_POLYGON, 1194, 4);
	glDrawArrays(GL_POLYGON, 1198, 4);
	glDrawArrays(GL_POLYGON, 1202, 4);
	glDrawArrays(GL_POLYGON, 1206, 4);
	glDrawArrays(GL_POLYGON, 1210, 4);
	glDrawArrays(GL_POLYGON, 1214, 4);
	glPopMatrix();
	glCullFace(GL_BACK);

	glPushMatrix();
	if (wordb1)glCullFace(GL_FRONT_AND_BACK);
	glDrawArrays(GL_POLYGON, 1218, 11);
	glDrawArrays(GL_POLYGON, 1229, 7);
	glDrawArrays(GL_POLYGON, 1236, 3);
	glDrawArrays(GL_POLYGON, 1239, 5);
	glDrawArrays(GL_POLYGON, 1244, 6);
	glDrawArrays(GL_POLYGON, 1250, 5);
	glDrawArrays(GL_POLYGON, 1255, 3);
	glDrawArrays(GL_POLYGON, 1258, 10);
	glDrawArrays(GL_POLYGON, 1268, 4);
	glDrawArrays(GL_POLYGON, 1272, 6);
	glDrawArrays(GL_POLYGON, 1278, 5);
	glDrawArrays(GL_POLYGON, 1283, 3);
	glDrawArrays(GL_POLYGON, 1286, 4);
	glDrawArrays(GL_POLYGON, 1290, 4);
	glDrawArrays(GL_POLYGON, 1294, 5);
	glDrawArrays(GL_POLYGON, 1299, 4);
	glDrawArrays(GL_POLYGON, 1303, 7);
	glDrawArrays(GL_POLYGON, 1310, 4);
	glDrawArrays(GL_POLYGON, 1314, 5);
	glDrawArrays(GL_POLYGON, 1319, 5);
	glDrawArrays(GL_POLYGON, 1324, 4);
	glDrawArrays(GL_POLYGON, 1328, 6);
	glDrawArrays(GL_POLYGON, 1334, 8);
	glPopMatrix();
	glCullFace(GL_BACK);

	glPushMatrix();
	if (wordb4)glCullFace(GL_FRONT_AND_BACK);
	glDrawArrays(GL_POLYGON, 1342, 5);
	glDrawArrays(GL_POLYGON, 1347, 4);
	glDrawArrays(GL_POLYGON, 1351, 4);
	glDrawArrays(GL_POLYGON, 1355, 4);
	glDrawArrays(GL_POLYGON, 1359, 4);
	glDrawArrays(GL_POLYGON, 1363, 7);
	glDrawArrays(GL_POLYGON, 1370, 4);
	glDrawArrays(GL_POLYGON, 1374, 7);
	glDrawArrays(GL_POLYGON, 1381, 9);
	glDrawArrays(GL_POLYGON, 1390, 4);
	glDrawArrays(GL_POLYGON, 1394, 5);
	glDrawArrays(GL_POLYGON, 1399, 8);
	glDrawArrays(GL_POLYGON, 1407, 8);
	glDrawArrays(GL_POLYGON, 1415, 4);
	glDrawArrays(GL_POLYGON, 1419, 3);
	glDrawArrays(GL_POLYGON, 1422, 3);
	glDrawArrays(GL_POLYGON, 1425, 6);
	glDrawArrays(GL_POLYGON, 1431, 4);
	glDrawArrays(GL_POLYGON, 1435, 5);
	glDrawArrays(GL_POLYGON, 1440, 4);
	glDrawArrays(GL_POLYGON, 1444, 5);
	glDrawArrays(GL_POLYGON, 1449, 4);
	glDrawArrays(GL_POLYGON, 1453, 5);
	glDrawArrays(GL_POLYGON, 1458, 3);
	glDrawArrays(GL_POLYGON, 1461, 4);
	glDrawArrays(GL_POLYGON, 1465, 4);
	glDrawArrays(GL_POLYGON, 1469, 4);
	glDrawArrays(GL_POLYGON, 1473, 4);
	glDrawArrays(GL_POLYGON, 1477, 5);
	glDrawArrays(GL_POLYGON, 1482, 7);
	glDrawArrays(GL_POLYGON, 1489, 5);
	glDrawArrays(GL_POLYGON, 1494, 5);
	glPopMatrix();
	glCullFace(GL_BACK);

	glPushMatrix();
	if (wordb6)glCullFace(GL_FRONT_AND_BACK);
	glDrawArrays(GL_POLYGON, 1499, 6);
	glDrawArrays(GL_POLYGON, 1505, 8);
	glDrawArrays(GL_POLYGON, 1513, 6);
	glDrawArrays(GL_POLYGON, 1519, 4);
	glDrawArrays(GL_POLYGON, 1523, 3);
	glDrawArrays(GL_POLYGON, 1526, 7);
	glDrawArrays(GL_POLYGON, 1533, 4);
	glDrawArrays(GL_POLYGON, 1537, 4);
	glDrawArrays(GL_POLYGON, 1541, 6);
	glDrawArrays(GL_POLYGON, 1547, 4);
	glDrawArrays(GL_POLYGON, 1551, 6);
	glDrawArrays(GL_POLYGON, 1557, 6);
	glDrawArrays(GL_POLYGON, 1563, 5);
	glDrawArrays(GL_POLYGON, 1568, 7);
	glDrawArrays(GL_POLYGON, 1575, 4);
	glDrawArrays(GL_POLYGON, 1579, 7);
	glDrawArrays(GL_POLYGON, 1586, 6);
	glDrawArrays(GL_POLYGON, 1592, 4);
	glDrawArrays(GL_POLYGON, 1596, 9);
	glDrawArrays(GL_POLYGON, 1605, 4);
	glDrawArrays(GL_POLYGON, 1609, 5);
	glDrawArrays(GL_POLYGON, 1614, 7);
	glDrawArrays(GL_POLYGON, 1621, 4);
	glDrawArrays(GL_POLYGON, 1625, 6);
	glDrawArrays(GL_POLYGON, 1631, 5);
	glDrawArrays(GL_POLYGON, 1636, 4);
	glDrawArrays(GL_POLYGON, 1640, 3);
	glDrawArrays(GL_POLYGON, 1643, 7);
	glDrawArrays(GL_POLYGON, 1650, 6);
	glDrawArrays(GL_POLYGON, 1656, 4);
	glDrawArrays(GL_POLYGON, 1660, 7);
	glDrawArrays(GL_POLYGON, 1667, 7);
	glDrawArrays(GL_POLYGON, 1674, 5);
	glDrawArrays(GL_POLYGON, 1679, 3);
	glDrawArrays(GL_POLYGON, 1682, 11);
	glDrawArrays(GL_POLYGON, 1693, 6);
	glDrawArrays(GL_POLYGON, 1699, 3);
	glDrawArrays(GL_POLYGON, 1702, 12);
	glDrawArrays(GL_POLYGON, 1714, 3);
	glDrawArrays(GL_POLYGON, 1717, 3);
	glDrawArrays(GL_POLYGON, 1720, 3);
	glPopMatrix();
	glCullFace(GL_BACK);

	//life bar
	glPushMatrix();
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_POLYGON);
	glVertex3f(eyex - 5, eyey + 3.2, eyez - 6);
	glVertex3f(eyex - 5, eyey + 2.9, eyez - 6);
	glVertex3f(eyex - 1 - ((8 - blood)*0.5), eyey + 2.9, eyez - 6);
	glVertex3f(eyex - 1 - ((8 - blood)*0.5), eyey + 3.2, eyez - 6);
	glEnd();
	glPopMatrix();

	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	//glEnable(GL_DEPTH_TEST);

	glColor3b(0, 0, 0);
	//left arm
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_specular);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_specular);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
	glMaterialfv(GL_FRONT, GL_EMISSION, mat_specular);
	glTranslatef(eyex - 1.0, eyey - 0.7, eyez - 1);
	glPushMatrix();
	glScalef(0.4, 0.4, 2.0);
	glutWireCube(1.0);
	glPopMatrix();

	glRotatef(30.0, 1.0, 0.0, 0.0);
	glTranslatef(0.0, -0.4, -1.0);
	glPushMatrix();
	glScalef(0.4, 0.4, 1.0);
	glutWireCube(1.0);
	glPopMatrix();

	glRotatef(30.0, -1.0, 0.0, 0.0);
	glTranslatef(0.05, 0.4, 0.0);
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_ambient);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_ambient);
	glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
	glMaterialfv(GL_FRONT, GL_EMISSION, mat_ambient);
	glScalef(0.1, 0.1, 0.3);
	glutWireCube(1.0);
	glPopMatrix();

	glTranslatef(0.15, 0.0, 0.0);
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient_color);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_ambient_color);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_ambient_color);
	glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
	glMaterialfv(GL_FRONT, GL_EMISSION, mat_ambient_color);
	glScalef(0.1, 0.1, 0.3);
	glutWireCube(1.0);
	glPopMatrix();

	glTranslatef(0.15, 0.0, 0.0);
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_emission);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_emission);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_emission);
	glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
	glMaterialfv(GL_FRONT, GL_EMISSION, mat_emission);
	glScalef(0.1, 0.1, 0.3);
	glutWireCube(1.0);
	glPopMatrix();

	glPopMatrix();
	//end left arm

	//right arm
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_specular);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_specular);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
	glMaterialfv(GL_FRONT, GL_EMISSION, mat_specular);
	glTranslatef(eyex + 1.0, eyey - 0.7, eyez - 1);
	glRotatef((GLfloat)elbow, 1.0, 0.0, 0.0);
	glPushMatrix();
	glScalef(0.4, 0.4, 2.0);
	glutWireCube(1.0);
	glPopMatrix();
	glRotatef((GLfloat)elbow, -1.0, 0.0, 0.0);

	glRotatef((GLfloat)elbow, 1.0, 0.0, 0.0);
	glRotatef(30.0, 1.0, 0.0, 0.0);
	glTranslatef(0.0, -0.4, -1.0);
	glPushMatrix();
	glScalef(0.4, 0.4, 1.0);
	glutWireCube(1.0);
	glPopMatrix();
	glRotatef((GLfloat)elbow, -1.0, 0.0, 0.0);

	glRotatef(30.0, -1.0, 0.0, 0.0);
	glRotatef((GLfloat)elbow, 1.0, 0.0, 0.0);
	glTranslatef(-0.05, 0.4, -0.3);
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_ambient);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_ambient);
	glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
	glMaterialfv(GL_FRONT, GL_EMISSION, mat_ambient);
	glScalef(0.1, 0.1, 0.3);
	glutWireCube(1.0);
	glPopMatrix();

	glRotatef((GLfloat)elbow, 1.0, 0.0, 0.0);
	glTranslatef(-0.15, 0.0, 0.0);
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient_color);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_ambient_color);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_ambient_color);
	glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
	glMaterialfv(GL_FRONT, GL_EMISSION, mat_ambient_color);
	glScalef(0.1, 0.1, 0.3);
	glutWireCube(1.0);
	glPopMatrix();

	glRotatef((GLfloat)elbow, 1.0, 0.0, 0.0);
	glTranslatef(-0.15, 0.0, 0.0);
	glPushMatrix();
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_emission);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_emission);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_emission);
	glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
	glMaterialfv(GL_FRONT, GL_EMISSION, mat_emission);
	glScalef(0.1, 0.1, 0.3);
	glutWireCube(1.0);
	glPopMatrix();

	glPopMatrix();
	//damn,I'm good
	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_specular);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_specular);
	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, high_shininess);
	glMaterialfv(GL_FRONT, GL_EMISSION, mat_specular);
	fireball();

	if (jumping)
	{
		if (v>-500)
		{
			eyey += (v*0.00004);
			v -= (gravity);
		}
		else
		{
			v = 500;
			eyey = 0.2;
			jumping = false;
		}
	}


	glDisable(GL_LIGHTING);
	glDisable(GL_LIGHT0);
	//glDisable(GL_DEPTH_TEST);

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

	glShadeModel(GL_SMOOTH);

	//glMaterialfv(GL_BACK, GL_SPECULAR, mat_specular);
	//glMaterialfv(GL_BACK, GL_SHININESS, mat_shininess);
	glLightfv(GL_LIGHT0, GL_POSITION, light_position);
	glLightfv(GL_LIGHT0, GL_DIFFUSE, white_light);
	glLightfv(GL_LIGHT0, GL_SPECULAR, white_light);
	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, lmodel_ambient);

}

void fireball()
{
	//plant
	glColor3f(1.0, 1.0, 1.0);

	glPushMatrix();
	if (!firing)
	{
		glTranslatef(eyex - 1.3, eyey, eyez - 3);
	}
	else
	{
		fireballz -= 0.2;
		glTranslatef(fireballx, firebally, fireballz);
		if (fireballz < -15)
		{
			if ((fireballx + 1 >0 && fireballx + 1 < 0.9) && (firebally >0 && firebally < 0.333))
			{
				if (blood > 0 && !engb)
				{
					blood -= 1;
				}
				engb = true;
			}
			else if ((fireballx + 1 >0.01 && fireballx + 1 < 0.11) && (firebally >0.54 && firebally < 0.93))
			{
				if (blood > 0 && !wordb1)
				{
					blood -= 1;
				}
				wordb1 = true;
			}
			else if ((fireballx + 1 >0.15 && fireballx + 1 < 0.25) && (firebally >0.57 && firebally < 0.9))
			{
				if (blood > 0 && !wordb2)
				{
					blood -= 1;
				}
				wordb2 = true;
			}
			else if ((fireballx + 1 >0.26 && fireballx + 1 < 0.36) && (firebally >0.4 && firebally < 0.93))
			{
				if (blood > 0 && !wordb3)
				{
					blood -= 1;
				}
				wordb3 = true;
			}
			else if ((fireballx + 1 >0.36 && fireballx + 1 < 0.51) && (firebally >0.54 && firebally < 0.93))
			{
				if (blood > 0 && !wordb4)
				{
					blood -= 1;
				}
				wordb4 = true;
			}
			else if ((fireballx + 1 >0.54 && fireballx + 1 < 0.63) && (firebally >0.6 && firebally < 0.92))
			{
				if (blood > 0 && !wordb5)
				{
					blood -= 1;
				}
				wordb5 = true;
			}
			else if ((fireballx + 1 >0.64 && fireballx + 1 < 0.75) && (firebally >0.42 && firebally < 0.94))
			{
				if (blood > 0 && !wordb6)
				{
					blood -= 1;
				}
				wordb6 = true;
			}
			else if ((fireballx + 1 >0.83 && fireballx + 1 < 0.99) && (firebally >0.48 && firebally < 0.99))
			{
				if (blood > 0 && !logob)
				{
					blood -= 1;
				}
				logob = true;
			}
			firing = false;
		}
	}
	glutWireSphere(0.3, 10, 8);   /* draw sun */
	glRotatef((GLfloat)year, 0.0, 1.0, 0.0);
	glTranslatef(0.5, 0.0, 0.0);
	glRotatef((GLfloat)year, 0.0, 1.0, 0.0);
	glutWireSphere(0.1, 5, 4);    /* draw smaller planet */
	year = (year + 5) % 360;
	glPopMatrix();
}

void swing()
{
	for (int i = 0; i < 5; i++)
	{
		elbow = (elbow + 5) % 360;
		display();
		Sleep(50);
	}
	for (int i = 0; i < 5; i++)
	{
		elbow = (elbow - 5) % 360;
		display();
		Sleep(50);
	}
	display();
	swinging = false;
}

void keyboard(unsigned char key, int x, int y)
{
	switch (key) {
	case 27:
		exit(0);
		break;

	case 87://w
	case 119:
		eyez -= 0.01;
		towz -= 0.01;
		break;
	case 65://a
	case 97:
		eyex -= 0.01;
		break;
	case 83://s
	case 115:
		eyez += 0.01;
		towz += 0.01;
		break;
	case 68://d
	case 100:
		eyex += 0.01;
		break;
	case 32://space
		if (!jumping)
		{
			jumping = true;
		}
		break;
	case 'z':
	case 'Z':
		if (!firing)
		{
			fireballx = eyex - 1.3;
			firebally = eyey;
			fireballz = eyez - 3;
			firing = true;
		}
		break;
	case 'x':
	case 'X':
		if (!swinging)
		{
			swinging = true;
			swing();
		}
		break;
	case 66://b
	case 98:
		if (backflag == true){
			backflag = false;
			glCullFace(GL_FRONT_AND_BACK);
		}
		else{
			backflag = true;
			glCullFace(GL_BACK);
		}
		break;
	case 'r':
	case 'R':
		blood = 8;
		engb = false, logob = false, wordb1 = false, wordb2 = false, wordb3 = false, wordb4 = false, wordb5 = false, wordb6 = false;
		glutPostRedisplay();
		break;
	}
	glutPostRedisplay();
}

void mouse(int button, int state, int x, int y)
{
	switch (button) {
	case GLUT_LEFT_BUTTON:
		if (state == GLUT_DOWN)//x
			if (towz <= 0)
			{
				if (towy>0)
				{
					towz -= 0.05;
				}
				else
				{
					towz += 0.05;
				}
				towy -= 0.05;
			}
			else
			{
				if (towy>0)
				{
					towz += 0.05;
				}
				else
				{
					towz -= 0.05;
				}
				towy += 0.05;
			}
		glutPostRedisplay();
		break;
	case GLUT_MIDDLE_BUTTON:
		if (state == GLUT_DOWN)
			if (upx <= 0)
			{
				if (upy>0)
				{
					upx -= 0.01;
				}
				else
				{
					upx += 0.01;
				}
				upy -= 0.01;
			}
			else
			{
				if (upy>0)
				{
					upx += 0.01;
				}
				else
				{
					upx -= 0.01;
				}
				upy += 0.01;
			}
		glutPostRedisplay();
		break;
	case GLUT_RIGHT_BUTTON:
		if (state == GLUT_DOWN)//y
			if (towz <= 0)
			{
				if (towx>0)
				{
					towz -= 0.05;
				}
				else
				{
					towz += 0.05;
				}
				towx -= 0.05;
			}
			else
			{
				if (towx>0)
				{
					towz += 0.05;
				}
				else
				{
					towz -= 0.05;
				}
				towx += 0.05;
			}
		glutPostRedisplay();
		break;
	default:
		break;
	}
}

void fireballturn()
{
	while (true)
	{
		glutPostRedisplay();
	}
	return;
}

void reshape(int w, int h){

	glViewport(0.5, 0.5, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(60.0, (GLfloat)w / (GLfloat)h, 1.0, 1000.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}
int main(int argc, char** argv)
{
	printf("please use 'esc' to terminate this program");
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(750, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("hello");
	init();
	glewInit();
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);
	glutReshapeFunc(reshape);
	glutMouseFunc(mouse);
	thread t1(fireballturn);
	glutMainLoop();
	return 0;
}