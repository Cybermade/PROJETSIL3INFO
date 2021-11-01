#include "Prototypes.h"
//Fonctions Affichage et initialisation dos du corps cette partie est composé seulement de cylindres 5 en tout
//Seulement des cylindres a partir de leurs representation mathématique (aucun objet glut ici)
void corpsBack()
{
    for(int c=0; c<C; c++)
    {
        for(int i = 0; i<(n*2); i++)
        {
            pCorpsBack[i][c].x = r*cos((2*i*M_PI)/n);
            pCorpsBack[i][c].y = r*sin((2*i*M_PI)/n);
            if(i<n)
                pCorpsBack[i][c].z = h/2;
            else
                pCorpsBack[i][c].z = -h/2;
        }
        pCorpsBack[n*2][c].x = 0;
        pCorpsBack[n*2][c].y = 0;
        pCorpsBack[n*2][c].z = -h/2;

        pCorpsBack[n*2+1][c].x = 0;
        pCorpsBack[n*2+1][c].y = 0;
        pCorpsBack[n*2+1][c].z = h/2;
    }
    for(int c=0; c<C; c++)
    {
        for(int i = 0; i<n; i++)
        {
            fCorpsBack[i][0][c] = i;
            fCorpsBack[i][1][c] = (i+1)%n;
            fCorpsBack[i][2][c] = (i+1)%n+n;
            fCorpsBack[i][3][c] = (i%n)+n;
        }
    }



}
void afficherCorpsBack()
{
    glPushMatrix();
    glRotatef(90,0,1,0);
    glRotatef(45,1,0,0);

    glBindTexture(GL_TEXTURE_2D,texObject[0]);
    for (int i=0; i<n; i++)
    {
        glBegin(GL_POLYGON);
        glTexCoord2f(0,0);
        glVertex3f(pCorpsBack[fCorpsBack[i][0][0]][0].x,pCorpsBack[fCorpsBack[i][0][0]][0].y,pCorpsBack[fCorpsBack[i][0][0]][0].z);
        glTexCoord2f(0,1);
        glVertex3f(pCorpsBack[fCorpsBack[i][1][0]][0].x,pCorpsBack[fCorpsBack[i][1][0]][0].y,pCorpsBack[fCorpsBack[i][1][0]][0].z);
        glTexCoord2f(1,1);
        glVertex3f(pCorpsBack[fCorpsBack[i][2][0]][0].x,pCorpsBack[fCorpsBack[i][2][0]][0].y,pCorpsBack[fCorpsBack[i][2][0]][0].z);
        glTexCoord2f(1,0);
        glVertex3f(pCorpsBack[fCorpsBack[i][3][0]][0].x,pCorpsBack[fCorpsBack[i][3][0]][0].y,pCorpsBack[fCorpsBack[i][3][0]][0].z);


        glEnd();
    }


    glPopMatrix();

    glPushMatrix();
    glTranslatef(-3.2,1.5,0);
    glRotatef(90,0,1,0);
    glBindTexture(GL_TEXTURE_2D,texObject[0]);
    for (int i=0; i<n; i++)
    {
        glBegin(GL_POLYGON);
        glTexCoord2f(0,0);
        glVertex3f(pCorpsBack[fCorpsBack[i][0][1]][1].x,pCorpsBack[fCorpsBack[i][0][1]][1].y,pCorpsBack[fCorpsBack[i][0][1]][1].z);
        glTexCoord2f(0,1);
        glVertex3f(pCorpsBack[fCorpsBack[i][1][1]][1].x,pCorpsBack[fCorpsBack[i][1][1]][1].y,pCorpsBack[fCorpsBack[i][1][1]][1].z);
        glTexCoord2f(1,1);
        glVertex3f(pCorpsBack[fCorpsBack[i][2][1]][1].x,pCorpsBack[fCorpsBack[i][2][1]][1].y,pCorpsBack[fCorpsBack[i][2][1]][1].z);
        glTexCoord2f(1,0);
        glVertex3f(pCorpsBack[fCorpsBack[i][3][1]][1].x,pCorpsBack[fCorpsBack[i][3][1]][1].y,pCorpsBack[fCorpsBack[i][3][1]][1].z);
        glEnd();
    }
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-6.2,0,0);
    glRotatef(90,0,1,0);
    glRotatef(-45,1,0,0);
    glBindTexture(GL_TEXTURE_2D,texObject[0]);
    for (int i=0; i<n; i++)
    {
        glBegin(GL_POLYGON);
        glTexCoord2f(0,0);
        glVertex3f(pCorpsBack[fCorpsBack[i][0][2]][2].x,pCorpsBack[fCorpsBack[i][0][2]][2].y,pCorpsBack[fCorpsBack[i][0][2]][2].z);
        glTexCoord2f(0,1);
        glVertex3f(pCorpsBack[fCorpsBack[i][1][2]][2].x,pCorpsBack[fCorpsBack[i][1][2]][2].y,pCorpsBack[fCorpsBack[i][1][2]][2].z);
        glTexCoord2f(1,1);
        glVertex3f(pCorpsBack[fCorpsBack[i][2][2]][2].x,pCorpsBack[fCorpsBack[i][2][2]][2].y,pCorpsBack[fCorpsBack[i][2][2]][2].z);
        glTexCoord2f(1,0);
        glVertex3f(pCorpsBack[fCorpsBack[i][3][2]][2].x,pCorpsBack[fCorpsBack[i][3][2]][2].y,pCorpsBack[fCorpsBack[i][3][2]][2].z);
        glEnd();
    }
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-4.8,1.25,0);
    glRotatef(90,0,1,0);
    glRotatef(-35,1,0,0);
    glScalef(1,1,0.5);
    glBindTexture(GL_TEXTURE_2D,texObject[2]);
    for (int i=0; i<n; i++)
    {
        glBegin(GL_POLYGON);
        glTexCoord2f(0,0);
        glVertex3f(pCorpsBack[fCorpsBack[i][0][3]][3].x,pCorpsBack[fCorpsBack[i][0][3]][3].y,pCorpsBack[fCorpsBack[i][0][3]][3].z);
        glTexCoord2f(0,1);
        glVertex3f(pCorpsBack[fCorpsBack[i][1][3]][3].x,pCorpsBack[fCorpsBack[i][1][3]][3].y,pCorpsBack[fCorpsBack[i][1][3]][3].z);
        glTexCoord2f(1,1);
        glVertex3f(pCorpsBack[fCorpsBack[i][2][3]][3].x,pCorpsBack[fCorpsBack[i][2][3]][3].y,pCorpsBack[fCorpsBack[i][2][3]][3].z);
        glTexCoord2f(1,0);
        glVertex3f(pCorpsBack[fCorpsBack[i][3][3]][3].x,pCorpsBack[fCorpsBack[i][3][3]][3].y,pCorpsBack[fCorpsBack[i][3][3]][3].z);
        glEnd();
    }
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-1.55,1.25,0);

    glRotatef(90,0,1,0);
    glRotatef(30,1,0,0);
    glScalef(1,1,0.5);

    for (int i=0; i<n; i++)
    {
        glBegin(GL_POLYGON);
        glTexCoord2f(0,0);
        glVertex3f(pCorpsBack[fCorpsBack[i][0][4]][4].x,pCorpsBack[fCorpsBack[i][0][4]][4].y,pCorpsBack[fCorpsBack[i][0][4]][4].z);
        glTexCoord2f(0,1);
        glVertex3f(pCorpsBack[fCorpsBack[i][1][4]][4].x,pCorpsBack[fCorpsBack[i][1][4]][4].y,pCorpsBack[fCorpsBack[i][1][4]][4].z);
        glTexCoord2f(1,1);
        glVertex3f(pCorpsBack[fCorpsBack[i][2][4]][4].x,pCorpsBack[fCorpsBack[i][2][4]][4].y,pCorpsBack[fCorpsBack[i][2][4]][4].z);
        glTexCoord2f(1,0);
        glVertex3f(pCorpsBack[fCorpsBack[i][3][4]][4].x,pCorpsBack[fCorpsBack[i][3][4]][4].y,pCorpsBack[fCorpsBack[i][3][4]][4].z);
        glEnd();
    }
    glPopMatrix();



}
