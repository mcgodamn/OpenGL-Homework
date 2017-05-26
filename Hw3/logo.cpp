/***************************
4103056039 鍾孟儒 第3次作業4/26
***************************/
//#pragma comment(linker, "/SUBSYSTEM:windows /ENTRY:mainCRTStartup")
#include "GL\glew.h"
#include "GL\glut.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "array.h"
bool backflag = true, jumping = false;
static GLfloat spin = 0.0;
float eyex = 0.0, eyey = 0.5, eyez = 5.0, towx = 0.0, towy = 0.0, towz = -5.0, upx = 0.0, upy = 1.0, upz = 0.0;
void display(void)
{
	glEnable(GL_CULL_FACE);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	gluLookAt(eyex, eyey, eyez, eyex + towx, eyey + towy, eyez + towz, upx, upy, upz);
	glEnableClientState(GL_VERTEX_ARRAY);
	glEnableClientState(GL_COLOR_ARRAY);
	glVertexPointer(3, GL_FLOAT, 0, triarr);
	glColorPointer(3, GL_FLOAT, 0, tricolor);

	glDrawArrays(GL_TRIANGLES, 0, 897);
	glDrawArrays(GL_POLYGON, 897, 6);
	glDrawArrays(GL_POLYGON, 903, 12);
	glDrawArrays(GL_POLYGON, 915, 7);
	glDrawArrays(GL_POLYGON, 922, 6);
	glDrawArrays(GL_POLYGON, 928, 6);
	glDrawArrays(GL_POLYGON, 934, 8);
	glDrawArrays(GL_POLYGON, 942, 5);
	glDrawArrays(GL_POLYGON, 947, 13);
	glDrawArrays(GL_POLYGON, 960, 11);
	glDrawArrays(GL_POLYGON, 971, 9);
	glDrawArrays(GL_POLYGON, 980, 11);
	glDrawArrays(GL_POLYGON, 991, 6);
	glDrawArrays(GL_POLYGON, 997, 13);
	glDrawArrays(GL_POLYGON, 1010, 9);
	glDrawArrays(GL_POLYGON, 1019, 5);
	glDrawArrays(GL_POLYGON, 1024, 5);
	glDrawArrays(GL_POLYGON, 1029, 8);
	glDrawArrays(GL_POLYGON, 1037, 9);
	glDrawArrays(GL_POLYGON, 1046, 6);
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

void jump()
{
	float gravity = 9.8;
	float v = 100;
	while (v>-100)
	{
		eyey += (v*0.001);
		towy += (v*0.001);
		v -= gravity;
		display();
		Sleep(50);
	}
	eyey = 0.5;
	towy = 0.5;
	display();
	jumping = false;
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
		towx -= 0.01;
		break;
	case 83://s
	case 115:
		eyez += 0.01;
		towz += 0.01;
		break;
	case 68://d
	case 100:
		eyex += 0.01;
		towx += 0.01;
		break;
	case 32://space
		if (!jumping)
		{
			jumping = true;
			jump();
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
	} 
	display();
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
		display();
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
		display();
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
		display();
		break;
	default:
		break;
	}
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
	/*printf("%d", sizeof(triarr) / sizeof(triarr[0]));
	system("PAUSE");*/
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(1000, 250);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("hello");
	init();
	glewInit();
	glutDisplayFunc(display);
	glutKeyboardFunc(keyboard);
	glutReshapeFunc(reshape);
	glutMouseFunc(mouse);
	glutMainLoop();
	//system("PAUSE");
	return 0;
}