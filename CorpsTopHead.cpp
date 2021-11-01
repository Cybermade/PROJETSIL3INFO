#include "Prototypes.h"
//Fonctions Affichage et initialisation tete du corps cette partie est composé de seulement des cube 7 en tout
//Les cubes a partir de leurs representation mathematiques ainsi que 2 cylindres(glut) pour la "moustache"
void afficherCorpsTopHead()
{
    //Base de la tête
    glPushMatrix();
    glTranslatef(-32.5,1.5,0);
    glScalef(1.5,4,3);
    glRotatef(90,0,1,0);
    glBegin(GL_POLYGON);
    glTexCoord2f(0,0);
    glVertex3f(-0.5, 0.5, 0.5);
    glTexCoord2f(0,1);
    glVertex3f(-0.5,-0.5, 0.5);
    glTexCoord2f(1,1);
    glVertex3f( 0.5,-0.5, 0.5);
    glTexCoord2f(1,0);
    glVertex3f( 0.5, 0.5, 0.5);
    glEnd();


    glBegin(GL_POLYGON);
    glTexCoord2f(0.0,0.0);
    glVertex3f( 0.5, 0.5, 0.5);
    glTexCoord2f(0.0,0.5);
    glVertex3f( 0.5,-0.5, 0.5);
    glTexCoord2f(0.5,0.5);
    glVertex3f( 0.5,-0.5,-0.5);
    glTexCoord2f(0.5,0.0);
    glVertex3f( 0.5, 0.5,-0.5);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(1,0);
    glVertex3f( 0.5, 0.5,-0.5);
    glTexCoord2f(1,0.5);
    glVertex3f( 0.5,-0.5,-0.5);
    glTexCoord2f(0,0.5);
    glVertex3f(-0.5,-0.5,-0.5);
    glTexCoord2f(0.0,0.0);
    glVertex3f(-0.5, 0.5,-0.5);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.1,0.0);
    glVertex3f(-0.5, 0.5,-0.5);
    glTexCoord2f(0.1,0.3);
    glVertex3f(-0.5,-0.5,-0.5);
    glTexCoord2f(0.45,0.3);
    glVertex3f(-0.5,-0.5, 0.5);
    glTexCoord2f(0.45,0.0);
    glVertex3f(-0.5, 0.5, 0.5);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.0,0.0);
    glVertex3f(-0.5, 0.5,-0.5);
    glTexCoord2f(0.0,1.0);
    glVertex3f(-0.5, 0.5, 0.5);
    glTexCoord2f(0.5,1.0);
    glVertex3f( 0.5, 0.5, 0.5);
    glTexCoord2f(0.5,0.0);
    glVertex3f( 0.5, 0.5,-0.5);
    glEnd();
    glBegin(GL_POLYGON);
    glTexCoord2f(0.0,0.0);
    glVertex3f(-0.5,-0.5,-0.5);
    glTexCoord2f(0.0,1.0);
    glVertex3f(-0.5,-0.5, 0.5);
    glTexCoord2f(1.0,1.0);
    glVertex3f( 0.5,-0.5, 0.5);
    glTexCoord2f(1.0,0.0);
    glVertex3f( 0.5,-0.5,-0.5);
    glEnd();
    glPopMatrix();


    //Partie Haute de la bouche
    glPushMatrix();

    glTranslatef(-34,1,0);
    glRotatef(rotationAnimationBoucheDown,0,0,1);
    glTranslatef(34,-1,0);

    glPushMatrix();

    glTranslatef(-34,-0.5,0);
    glRotatef(30,0,0,1);
    glScalef(4,1,2.9);

    glBegin(GL_POLYGON);
    glTexCoord2f(0,0);
    glVertex3f(-0.5, 0.5, 0.5);
    glTexCoord2f(0,1);
    glVertex3f(-0.5,-0.5, 0.5);
    glTexCoord2f(1,1);
    glVertex3f( 0.5,-0.5, 0.5);
    glTexCoord2f(1,0);
    glVertex3f( 0.5, 0.5, 0.5);
    glEnd();


    glBegin(GL_POLYGON);
    glTexCoord2f(0.0,0.0);
    glVertex3f( 0.5, 0.5, 0.5);
    glTexCoord2f(0.0,0.5);
    glVertex3f( 0.5,-0.5, 0.5);
    glTexCoord2f(0.5,0.5);
    glVertex3f( 0.5,-0.5,-0.5);
    glTexCoord2f(0.5,0.0);
    glVertex3f( 0.5, 0.5,-0.5);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(1,0);
    glVertex3f( 0.5, 0.5,-0.5);
    glTexCoord2f(1,0.5);
    glVertex3f( 0.5,-0.5,-0.5);
    glTexCoord2f(0,0.5);
    glVertex3f(-0.5,-0.5,-0.5);
    glTexCoord2f(0.0,0.0);
    glVertex3f(-0.5, 0.5,-0.5);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.1,0.0);
    glVertex3f(-0.5, 0.5,-0.5);
    glTexCoord2f(0.1,0.3);
    glVertex3f(-0.5,-0.5,-0.5);
    glTexCoord2f(0.45,0.3);
    glVertex3f(-0.5,-0.5, 0.5);
    glTexCoord2f(0.45,0.0);
    glVertex3f(-0.5, 0.5, 0.5);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.0,0.0);
    glVertex3f(-0.5, 0.5,-0.5);
    glTexCoord2f(0.0,1.0);
    glVertex3f(-0.5, 0.5, 0.5);
    glTexCoord2f(0.5,1.0);
    glVertex3f( 0.5, 0.5, 0.5);
    glTexCoord2f(0.5,0.0);
    glVertex3f( 0.5, 0.5,-0.5);
    glEnd();
    glBegin(GL_POLYGON);
    glTexCoord2f(0.0,0.0);
    glVertex3f(-0.5,-0.5,-0.5);
    glTexCoord2f(0.0,1.0);
    glVertex3f(-0.5,-0.5, 0.5);
    glTexCoord2f(1.0,1.0);
    glVertex3f( 0.5,-0.5, 0.5);
    glTexCoord2f(1.0,0.0);
    glVertex3f( 0.5,-0.5,-0.5);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glDisable(GL_TEXTURE_2D);
    //DENTS HAUTS
    glColor3f(1,1,1);
    glTranslatef(-34.8,-0.4,0);
    glRotatef(30,0,0,1);
    glRotatef(-90,1,0,0);

    glutSolidCone(0.4,0.8,20,15);

    glPopMatrix();

    glPushMatrix();
    glTranslatef(-34,0.1,0);
    glRotatef(30,0,0,1);
    glRotatef(-90,1,0,0);

    glutSolidCone(0.4,0.8,20,15);

    glPopMatrix();

    glPushMatrix();
    glTranslatef(-35.6,-0.9,0);
    glRotatef(30,0,0,1);
    glRotatef(-90,1,0,0);

    glutSolidCone(0.4,0.8,20,15);

    glPopMatrix();
    glEnable(GL_TEXTURE_2D);
    glPopMatrix();



    //Partie Basse de la bouche
    glPushMatrix();

    glTranslatef(-34,1.5,0);
    glRotatef(rotationAnimationBouche,0,0,1);
    glTranslatef(34,-1.5,0);

    glPushMatrix();
    glTranslatef(-34,2,0);
    glRotatef(-30,0,0,1);
    glScalef(4,1,2.9);


    glBegin(GL_POLYGON);
    glTexCoord2f(0,0);
    glVertex3f(-0.5, 0.5, 0.5);
    glTexCoord2f(0,1);
    glVertex3f(-0.5,-0.5, 0.5);
    glTexCoord2f(1,1);
    glVertex3f( 0.5,-0.5, 0.5);
    glTexCoord2f(1,0);
    glVertex3f( 0.5, 0.5, 0.5);
    glEnd();


    glBegin(GL_POLYGON);
    glTexCoord2f(0.0,0.0);
    glVertex3f( 0.5, 0.5, 0.5);
    glTexCoord2f(0.0,0.5);
    glVertex3f( 0.5,-0.5, 0.5);
    glTexCoord2f(0.5,0.5);
    glVertex3f( 0.5,-0.5,-0.5);
    glTexCoord2f(0.5,0.0);
    glVertex3f( 0.5, 0.5,-0.5);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(1,0);
    glVertex3f( 0.5, 0.5,-0.5);
    glTexCoord2f(1,0.5);
    glVertex3f( 0.5,-0.5,-0.5);
    glTexCoord2f(0,0.5);
    glVertex3f(-0.5,-0.5,-0.5);
    glTexCoord2f(0.0,0.0);
    glVertex3f(-0.5, 0.5,-0.5);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.1,0.0);
    glVertex3f(-0.5, 0.5,-0.5);
    glTexCoord2f(0.1,0.3);
    glVertex3f(-0.5,-0.5,-0.5);
    glTexCoord2f(0.45,0.3);
    glVertex3f(-0.5,-0.5, 0.5);
    glTexCoord2f(0.45,0.0);
    glVertex3f(-0.5, 0.5, 0.5);
    glEnd();

    glBegin(GL_POLYGON);
    glTexCoord2f(0.0,0.0);
    glVertex3f(-0.5, 0.5,-0.5);
    glTexCoord2f(0.0,1.0);
    glVertex3f(-0.5, 0.5, 0.5);
    glTexCoord2f(0.5,1.0);
    glVertex3f( 0.5, 0.5, 0.5);
    glTexCoord2f(0.5,0.0);
    glVertex3f( 0.5, 0.5,-0.5);
    glEnd();
    glBegin(GL_POLYGON);
    glTexCoord2f(0.0,0.0);
    glVertex3f(-0.5,-0.5,-0.5);
    glTexCoord2f(0.0,1.0);
    glVertex3f(-0.5,-0.5, 0.5);
    glTexCoord2f(1.0,1.0);
    glVertex3f( 0.5,-0.5, 0.5);
    glTexCoord2f(1.0,0.0);
    glVertex3f( 0.5,-0.5,-0.5);
    glEnd();
    glPopMatrix();
    glPushMatrix();
    glDisable(GL_TEXTURE_2D);
    //Dents Bas
    glTranslatef(0,1.5,0);
    glRotatef(180,1,0,0);
    glPushMatrix();
    glTranslatef(-34.8,-0.4,0);
    glRotatef(30,0,0,1);
    glRotatef(-90,1,0,0);

    glutSolidCone(0.4,0.8,20,15);

    glPopMatrix();

    glPushMatrix();
    glTranslatef(-34,0.1,0);
    glRotatef(30,0,0,1);
    glRotatef(-90,1,0,0);

    glutSolidCone(0.4,0.8,20,15);

    glPopMatrix();

    glPushMatrix();
    glTranslatef(-35.6,-0.9,0);
    glRotatef(30,0,0,1);
    glRotatef(-90,1,0,0);

    glutSolidCone(0.4,0.8,20,15);

    glPopMatrix();

    glPopMatrix();

    //Petits cylindres a gauche et a droite (genre de moustache...)
    glPushMatrix();
    glColor3f(0.1f,0.1f,0.1f);

    glTranslatef(-28,0.3,-2.8);
    glRotatef(-60,1,0,0);
    glRotatef(-70,0,1,0);
    glutSolidCylinder(0.1,8,40,30);

    glPopMatrix();

    glPushMatrix();
    glColor3f(0.1f,0.1f,0.1f);

    glTranslatef(-35.5,2.5,1.4);
    glRotatef(60,1,0,0);
    glRotatef(70,0,1,0);
    glutSolidCylinder(0.1,8,40,30);
    glEnable(GL_TEXTURE_2D);
    glPopMatrix();


    glPopMatrix();
    glDisable(GL_TEXTURE_2D);

    glPushMatrix();//langue
    glColor3f(1,1,1);
    glColor3f(0.9f,0.1f,0.1f);
    glTranslatef(-34,0.7,0);
    glRotatef(10,0,0,1);
    glScalef(3.5,0.4,1.3);


    glBegin(GL_POLYGON);

    glVertex3f(-0.5, 0.5, 0.5);

    glVertex3f(-0.5,-0.5, 0.5);

    glVertex3f( 0.5,-0.5, 0.5);

    glVertex3f( 0.5, 0.5, 0.5);
    glEnd();


    glBegin(GL_POLYGON);

    glVertex3f( 0.5, 0.5, 0.5);

    glVertex3f( 0.5,-0.5, 0.5);

    glVertex3f( 0.5,-0.5,-0.5);

    glVertex3f( 0.5, 0.5,-0.5);
    glEnd();

    glBegin(GL_POLYGON);

    glVertex3f( 0.5, 0.5,-0.5);

    glVertex3f( 0.5,-0.5,-0.5);

    glVertex3f(-0.5,-0.5,-0.5);

    glVertex3f(-0.5, 0.5,-0.5);
    glEnd();

    glBegin(GL_POLYGON);

    glVertex3f(-0.5, 0.5,-0.5);

    glVertex3f(-0.5,-0.5,-0.5);

    glVertex3f(-0.5,-0.5, 0.5);

    glVertex3f(-0.5, 0.5, 0.5);
    glEnd();

    glBegin(GL_POLYGON);

    glVertex3f(-0.5, 0.5,-0.5);

    glVertex3f(-0.5, 0.5, 0.5);

    glVertex3f( 0.5, 0.5, 0.5);

    glVertex3f( 0.5, 0.5,-0.5);
    glEnd();
    glBegin(GL_POLYGON);

    glVertex3f(-0.5,-0.5,-0.5);

    glVertex3f(-0.5,-0.5, 0.5);

    glVertex3f( 0.5,-0.5, 0.5);

    glVertex3f( 0.5,-0.5,-0.5);
    glEnd();
    glColor3f(1,1,1);
    glPopMatrix();

    //oeil
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-33,2.8,0.9);

    glScalef(1,1,1);


    glBegin(GL_POLYGON);

    glVertex3f(-0.5, 0.5, 0.5);

    glVertex3f(-0.5,-0.5, 0.5);
    glVertex3f( 0.5,-0.5, 0.5);
    glVertex3f( 0.5, 0.5, 0.5);
    glEnd();


    glBegin(GL_POLYGON);

    glVertex3f( 0.5, 0.5, 0.5);

    glVertex3f( 0.5,-0.5, 0.5);

    glVertex3f( 0.5,-0.5,-0.5);

    glVertex3f( 0.5, 0.5,-0.5);
    glEnd();

    glBegin(GL_POLYGON);

    glVertex3f( 0.5, 0.5,-0.5);

    glVertex3f( 0.5,-0.5,-0.5);

    glVertex3f(-0.5,-0.5,-0.5);
    glVertex3f(-0.5, 0.5,-0.5);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(-0.5, 0.5,-0.5);
    glVertex3f(-0.5,-0.5,-0.5);
    glVertex3f(-0.5,-0.5, 0.5);
    glVertex3f(-0.5, 0.5, 0.5);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(-0.5, 0.5,-0.5);
    glVertex3f(-0.5, 0.5, 0.5);
    glVertex3f( 0.5, 0.5, 0.5);
    glVertex3f( 0.5, 0.5,-0.5);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(-0.5,-0.5,-0.5);
    glVertex3f(-0.5,-0.5, 0.5);
    glVertex3f( 0.5,-0.5, 0.5);
    glVertex3f( 0.5,-0.5,-0.5);
    glEnd();
    glColor3f(1,1,1);
    glPopMatrix();
    //Pupille
    glPushMatrix();
    glColor3f(0,0,0);
    glTranslatef(-33.3,2.8,0.9);
    glScalef(0.5,0.5,0.5);


    glBegin(GL_POLYGON);
    glVertex3f(-0.5, 0.5, 0.5);
    glVertex3f(-0.5,-0.5, 0.5);
    glVertex3f( 0.5,-0.5, 0.5);
    glVertex3f( 0.5, 0.5, 0.5);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex3f( 0.5, 0.5, 0.5);
    glVertex3f( 0.5,-0.5, 0.5);
    glVertex3f( 0.5,-0.5,-0.5);
    glVertex3f( 0.5, 0.5,-0.5);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f( 0.5, 0.5,-0.5);
    glVertex3f( 0.5,-0.5,-0.5);
    glVertex3f(-0.5,-0.5,-0.5);
    glVertex3f(-0.5, 0.5,-0.5);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(-0.5, 0.5,-0.5);
    glVertex3f(-0.5,-0.5,-0.5);
    glVertex3f(-0.5,-0.5, 0.5);
    glVertex3f(-0.5, 0.5, 0.5);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(-0.5, 0.5,-0.5);
    glVertex3f(-0.5, 0.5, 0.5);
    glVertex3f( 0.5, 0.5, 0.5);
    glVertex3f( 0.5, 0.5,-0.5);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(-0.5,-0.5,-0.5);
    glVertex3f(-0.5,-0.5, 0.5);
    glVertex3f( 0.5,-0.5, 0.5);
    glVertex3f( 0.5,-0.5,-0.5);
    glEnd();
    glColor3f(1,1,1);
    glPopMatrix();

    //Oeil 2
    glPushMatrix();
    glTranslatef(0,0,-1.5);
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-33,2.8,0.6);
    glScalef(1,1,1);

    glBegin(GL_POLYGON);
    glVertex3f(-0.5, 0.5, 0.5);
    glVertex3f(-0.5,-0.5, 0.5);
    glVertex3f( 0.5,-0.5, 0.5);
    glVertex3f( 0.5, 0.5, 0.5);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex3f( 0.5, 0.5, 0.5);
    glVertex3f( 0.5,-0.5, 0.5);
    glVertex3f( 0.5,-0.5,-0.5);
    glVertex3f( 0.5,0.5,-0.5);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f( 0.5, 0.5,-0.5);
    glVertex3f( 0.5,-0.5,-0.5);
    glVertex3f(-0.5,-0.5,-0.5);
    glVertex3f(-0.5, 0.5,-0.5);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(-0.5, 0.5,-0.5);
    glVertex3f(-0.5,-0.5,-0.5);
    glVertex3f(-0.5,-0.5, 0.5);
    glVertex3f(-0.5, 0.5, 0.5);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(-0.5, 0.5,-0.5);
    glVertex3f(-0.5, 0.5, 0.5);
    glVertex3f( 0.5, 0.5, 0.5);
    glVertex3f( 0.5, 0.5,-0.5);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(-0.5,-0.5,-0.5);
    glVertex3f(-0.5,-0.5, 0.5);
    glVertex3f( 0.5,-0.5, 0.5);
    glVertex3f( 0.5,-0.5,-0.5);
    glEnd();
    glColor3f(1,1,1);
    glPopMatrix();
    //Pupille 2
    glPushMatrix();
    glColor3f(0,0,0);
    glTranslatef(-33.3,2.8,0.6);
    glScalef(0.5,0.5,0.5);


    glBegin(GL_POLYGON);

    glVertex3f(-0.5, 0.5, 0.5);
    glVertex3f(-0.5,-0.5, 0.5);
    glVertex3f( 0.5,-0.5, 0.5);
    glVertex3f( 0.5, 0.5, 0.5);
    glEnd();


    glBegin(GL_POLYGON);

    glVertex3f( 0.5, 0.5, 0.5);
    glVertex3f( 0.5,-0.5, 0.5);
    glVertex3f( 0.5,-0.5,-0.5);
    glVertex3f( 0.5, 0.5,-0.5);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f( 0.5, 0.5,-0.5);
    glVertex3f( 0.5,-0.5,-0.5);
    glVertex3f(-0.5,-0.5,-0.5);
    glVertex3f(-0.5, 0.5,-0.5);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(-0.5, 0.5,-0.5);
    glVertex3f(-0.5,-0.5,-0.5);
    glVertex3f(-0.5,-0.5, 0.5);
    glVertex3f(-0.5, 0.5, 0.5);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex3f(-0.5, 0.5,-0.5);
    glVertex3f(-0.5, 0.5, 0.5);
    glVertex3f( 0.5, 0.5, 0.5);
    glVertex3f( 0.5, 0.5,-0.5);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex3f(-0.5,-0.5,-0.5);
    glVertex3f(-0.5,-0.5, 0.5);
    glVertex3f( 0.5,-0.5, 0.5);
    glVertex3f( 0.5,-0.5,-0.5);
    glEnd();
    glColor3f(1,1,1);
    glPopMatrix();


    glPopMatrix();


    glEnable(GL_TEXTURE_2D);







    glColor3f(1,1,1);

}
