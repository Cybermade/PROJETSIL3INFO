#include "Prototypes.h"
//Fonctions Affichage et initialisation queue du corps cette partie est composé de seulement des cylindres 8 en tout
//Seulement des cylindres a partir de leurs representation mathématique,1 object glutsolidCone pour le bout de queue
void corpsQueue()
{
    for(int c=0; c<C2; c++)
    {
        for(int i = 0; i<(n*2); i++)
        {
            pCorpsQueue[i][c].x = r*cos((2*i*M_PI)/n);
            pCorpsQueue[i][c].y = r*sin((2*i*M_PI)/n);
            if(i<n)
                pCorpsQueue[i][c].z = h/2;
            else
                pCorpsQueue[i][c].z = -h/2;
        }
        pCorpsQueue[n*2][c].x = 0;
        pCorpsQueue[n*2][c].y = 0;
        pCorpsQueue[n*2][c].z = -h/2;

        pCorpsQueue[n*2+1][c].x = 0;
        pCorpsQueue[n*2+1][c].y = 0;
        pCorpsQueue[n*2+1][c].z = h/2;
    }
    for(int c=0; c<C2; c++)
    {
        for(int i = 0; i<n; i++)
        {
            fCorpsQueue[i][0][c] = i;
            fCorpsQueue[i][1][c] = (i+1)%n;
            fCorpsQueue[i][2][c] = (i+1)%n+n;
            fCorpsQueue[i][3][c] = (i%n)+n;
        }
    }




}
void afficherCorpsQueue()
{

    glPushMatrix();
    glTranslatef(3.3,-1.45,0);
    glRotatef(270,0,1,0);

    glBindTexture(GL_TEXTURE_2D,texObject[0]);

    for (int i=0; i<n; i++)
    {
        glBegin(GL_POLYGON);
        glTexCoord2f(0,0);
        glVertex3f(pCorpsQueue[fCorpsQueue[i][0][0]][0].x,pCorpsQueue[fCorpsQueue[i][0][0]][0].y,pCorpsQueue[fCorpsQueue[i][0][0]][0].z);
        glTexCoord2f(0,1);
        glVertex3f(pCorpsQueue[fCorpsQueue[i][1][0]][0].x,pCorpsQueue[fCorpsQueue[i][1][0]][0].y,pCorpsQueue[fCorpsQueue[i][1][0]][0].z);
        glTexCoord2f(1,1);
        glVertex3f(pCorpsQueue[fCorpsQueue[i][2][0]][0].x,pCorpsQueue[fCorpsQueue[i][2][0]][0].y,pCorpsQueue[fCorpsQueue[i][2][0]][0].z);
        glTexCoord2f(1,0);
        glVertex3f(pCorpsQueue[fCorpsQueue[i][3][0]][0].x,pCorpsQueue[fCorpsQueue[i][3][0]][0].y,pCorpsQueue[fCorpsQueue[i][3][0]][0].z);
        glEnd();
    }
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.5,-1.25,0);
    glRotatef(270,0,1,0);
    glRotatef(-25,1,0,0);
    glScalef(1,1,0.5);
    glBindTexture(GL_TEXTURE_2D,texObject[2]);
    for (int i=0; i<n; i++)
    {
        glBegin(GL_POLYGON);
        glTexCoord2f(0,0);
        glVertex3f(pCorpsQueue[fCorpsQueue[i][0][1]][1].x,pCorpsQueue[fCorpsQueue[i][0][1]][1].y,pCorpsQueue[fCorpsQueue[i][0][1]][1].z);
        glTexCoord2f(0,1);
        glVertex3f(pCorpsQueue[fCorpsQueue[i][1][1]][1].x,pCorpsQueue[fCorpsQueue[i][1][1]][1].y,pCorpsQueue[fCorpsQueue[i][1][1]][1].z);
        glTexCoord2f(1,1);
        glVertex3f(pCorpsQueue[fCorpsQueue[i][2][1]][1].x,pCorpsQueue[fCorpsQueue[i][2][1]][1].y,pCorpsQueue[fCorpsQueue[i][2][1]][1].z);
        glTexCoord2f(1,0);
        glVertex3f(pCorpsQueue[fCorpsQueue[i][3][1]][1].x,pCorpsQueue[fCorpsQueue[i][3][1]][1].y,pCorpsQueue[fCorpsQueue[i][3][1]][1].z);
        glEnd();
    }
    glPopMatrix();
    glPushMatrix();

    glTranslatef(5,-1.45,0);
    glRotatef(270,0,1,0);
    glScaled(0.95,0.95,0.95);
    glBindTexture(GL_TEXTURE_2D,texObject[2]);
    for (int i=0; i<n; i++)
    {
        glBegin(GL_POLYGON);
        glTexCoord2f(0,0);
        glVertex3f(pCorpsQueue[fCorpsQueue[i][0][2]][2].x,pCorpsQueue[fCorpsQueue[i][0][2]][2].y,pCorpsQueue[fCorpsQueue[i][0][2]][2].z);
        glTexCoord2f(0,1);
        glVertex3f(pCorpsQueue[fCorpsQueue[i][1][2]][2].x,pCorpsQueue[fCorpsQueue[i][1][2]][2].y,pCorpsQueue[fCorpsQueue[i][1][2]][2].z);
        glTexCoord2f(1,1);
        glVertex3f(pCorpsQueue[fCorpsQueue[i][2][2]][2].x,pCorpsQueue[fCorpsQueue[i][2][2]][2].y,pCorpsQueue[fCorpsQueue[i][2][2]][2].z);
        glTexCoord2f(1,0);
        glVertex3f(pCorpsQueue[fCorpsQueue[i][3][2]][2].x,pCorpsQueue[fCorpsQueue[i][3][2]][2].y,pCorpsQueue[fCorpsQueue[i][3][2]][2].z);
        glEnd();
    }
    glPopMatrix();


    glPushMatrix();

    glTranslatef(6.5,-1.45,0);
    glRotatef(270,0,1,0);
    glScaled(0.85,0.85,0.85);
    glBindTexture(GL_TEXTURE_2D,texObject[0]);
    for (int i=0; i<n; i++)
    {
        glBegin(GL_POLYGON);
        glTexCoord2f(0,0);
        glVertex3f(pCorpsQueue[fCorpsQueue[i][0][3]][3].x,pCorpsQueue[fCorpsQueue[i][0][3]][3].y,pCorpsQueue[fCorpsQueue[i][0][3]][3].z);
        glTexCoord2f(0,1);
        glVertex3f(pCorpsQueue[fCorpsQueue[i][1][3]][3].x,pCorpsQueue[fCorpsQueue[i][1][3]][3].y,pCorpsQueue[fCorpsQueue[i][1][3]][3].z);
        glTexCoord2f(1,1);
        glVertex3f(pCorpsQueue[fCorpsQueue[i][2][3]][3].x,pCorpsQueue[fCorpsQueue[i][2][3]][3].y,pCorpsQueue[fCorpsQueue[i][2][3]][3].z);
        glTexCoord2f(1,0);
        glVertex3f(pCorpsQueue[fCorpsQueue[i][3][3]][3].x,pCorpsQueue[fCorpsQueue[i][3][3]][3].y,pCorpsQueue[fCorpsQueue[i][3][3]][3].z);
        glEnd();
    }
    glPopMatrix();
    glPushMatrix();

    glTranslatef(8,-1.45,0);
    glRotatef(270,0,1,0);
    glScaled(0.65,0.65,0.65);
    glBindTexture(GL_TEXTURE_2D,texObject[2]);
    for (int i=0; i<n; i++)
    {
        glBegin(GL_POLYGON);
        glTexCoord2f(0,0);
        glVertex3f(pCorpsQueue[fCorpsQueue[i][0][4]][4].x,pCorpsQueue[fCorpsQueue[i][0][4]][4].y,pCorpsQueue[fCorpsQueue[i][0][4]][4].z);
        glTexCoord2f(0,1);
        glVertex3f(pCorpsQueue[fCorpsQueue[i][1][4]][4].x,pCorpsQueue[fCorpsQueue[i][1][4]][4].y,pCorpsQueue[fCorpsQueue[i][1][4]][4].z);
        glTexCoord2f(1,1);
        glVertex3f(pCorpsQueue[fCorpsQueue[i][2][4]][4].x,pCorpsQueue[fCorpsQueue[i][2][4]][4].y,pCorpsQueue[fCorpsQueue[i][2][4]][4].z);
        glTexCoord2f(1,0);
        glVertex3f(pCorpsQueue[fCorpsQueue[i][3][4]][4].x,pCorpsQueue[fCorpsQueue[i][3][4]][4].y,pCorpsQueue[fCorpsQueue[i][3][4]][4].z);
        glEnd();
    }
    glPopMatrix();
    glPushMatrix();

    glTranslatef(8,-1.45,0);
    glRotatef(270,0,1,0);
    glScaled(0.5,0.5,0.5);
    glBindTexture(GL_TEXTURE_2D,texObject[0]);
    for (int i=0; i<n; i++)
    {
        glBegin(GL_POLYGON);
        glBegin(GL_POLYGON);
        glTexCoord2f(0,0);
        glVertex3f(pCorpsQueue[fCorpsQueue[i][0][5]][5].x,pCorpsQueue[fCorpsQueue[i][0][5]][5].y,pCorpsQueue[fCorpsQueue[i][0][5]][5].z);
        glTexCoord2f(0,1);
        glVertex3f(pCorpsQueue[fCorpsQueue[i][1][5]][5].x,pCorpsQueue[fCorpsQueue[i][1][5]][5].y,pCorpsQueue[fCorpsQueue[i][1][5]][5].z);
        glTexCoord2f(1,1);
        glVertex3f(pCorpsQueue[fCorpsQueue[i][2][5]][5].x,pCorpsQueue[fCorpsQueue[i][2][5]][5].y,pCorpsQueue[fCorpsQueue[i][2][5]][5].z);
        glTexCoord2f(1,0);
        glVertex3f(pCorpsQueue[fCorpsQueue[i][3][5]][5].x,pCorpsQueue[fCorpsQueue[i][3][5]][5].y,pCorpsQueue[fCorpsQueue[i][3][5]][5].z);
        glEnd();
    }
    glPopMatrix();

    glPushMatrix();

    glTranslatef(9,-1.45,0);
    glRotatef(270,0,1,0);
    glScaled(0.4,0.4,0.4);
    glBindTexture(GL_TEXTURE_2D,texObject[0]);
    for (int i=0; i<n; i++)
    {
        glBegin(GL_POLYGON);
        glTexCoord2f(0,0);
        glVertex3f(pCorpsQueue[fCorpsQueue[i][0][6]][6].x,pCorpsQueue[fCorpsQueue[i][0][6]][6].y,pCorpsQueue[fCorpsQueue[i][0][6]][6].z);
        glTexCoord2f(0,1);
        glVertex3f(pCorpsQueue[fCorpsQueue[i][1][6]][6].x,pCorpsQueue[fCorpsQueue[i][1][6]][6].y,pCorpsQueue[fCorpsQueue[i][1][6]][6].z);
        glTexCoord2f(1,1);
        glVertex3f(pCorpsQueue[fCorpsQueue[i][2][6]][6].x,pCorpsQueue[fCorpsQueue[i][2][6]][6].y,pCorpsQueue[fCorpsQueue[i][2][6]][6].z);
        glTexCoord2f(1,0);
        glVertex3f(pCorpsQueue[fCorpsQueue[i][3][6]][6].x,pCorpsQueue[fCorpsQueue[i][3][6]][6].y,pCorpsQueue[fCorpsQueue[i][3][6]][6].z);
        glEnd();
    }
    glPopMatrix();

    glPushMatrix();

    glTranslatef(10,-1.45,0);
    glRotatef(270,0,1,0);
    glScaled(0.25,0.25,0.25);
    glBindTexture(GL_TEXTURE_2D,texObject[2]);
    for (int i=0; i<n; i++)
    {
        glBegin(GL_POLYGON);
        glTexCoord2f(0,0);
        glVertex3f(pCorpsQueue[fCorpsQueue[i][0][7]][7].x,pCorpsQueue[fCorpsQueue[i][0][7]][7].y,pCorpsQueue[fCorpsQueue[i][0][7]][7].z);
        glTexCoord2f(0,1);
        glVertex3f(pCorpsQueue[fCorpsQueue[i][1][7]][7].x,pCorpsQueue[fCorpsQueue[i][1][7]][7].y,pCorpsQueue[fCorpsQueue[i][1][7]][7].z);
        glTexCoord2f(1,1);
        glVertex3f(pCorpsQueue[fCorpsQueue[i][2][7]][7].x,pCorpsQueue[fCorpsQueue[i][2][7]][7].y,pCorpsQueue[fCorpsQueue[i][2][7]][7].z);
        glTexCoord2f(1,0);
        glVertex3f(pCorpsQueue[fCorpsQueue[i][3][7]][7].x,pCorpsQueue[fCorpsQueue[i][3][7]][7].y,pCorpsQueue[fCorpsQueue[i][3][7]][7].z);
        glEnd();
    }

    glDisable(GL_TEXTURE_2D);
    glPushMatrix();
    glRotatef(180,0,1,0);
    glColor3f(1.f,0.2f,0.2f);
    glTranslatef(0,0,1.5);
    glutSolidCone(1,5,20,15);
    glColor3f(1,1,1);
    glPopMatrix();

    glPopMatrix();
    glEnable(GL_TEXTURE_2D);



}
