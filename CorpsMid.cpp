#include "Prototypes.h"
//Fonctions Affichage et initialisation milieu du corps cette partie est composé de seulement des cylindres 15 en tout
//Seulement des cylindres a partir de leurs representation mathématique (aucun objet glut ici)
void corpsMid()
{
    for(int c=0; c<C3; c++)
    {
        for(int i = 0; i<(n*2); i++)
        {
            pCorpsMid[i][c].x = r*cos((2*i*M_PI)/n);
            pCorpsMid[i][c].y = r*sin((2*i*M_PI)/n);
            if(i<n)
                pCorpsMid[i][c].z = h/2;
            else
                pCorpsMid[i][c].z = -h/2;
        }
        pCorpsMid[n*2][c].x = 0;
        pCorpsMid[n*2][c].y = 0;
        pCorpsMid[n*2][c].z = -h/2;

        pCorpsMid[n*2+1][c].x = 0;
        pCorpsMid[n*2+1][c].y = 0;
        pCorpsMid[n*2+1][c].z = h/2;
    }
    for(int c=0; c<C3; c++)
    {
        for(int i = 0; i<n; i++)
        {
            fCorpsMid[i][0][c] = i;
            fCorpsMid[i][1][c] = (i+1)%n;
            fCorpsMid[i][2][c] = (i+1)%n+n;
            fCorpsMid[i][3][c] = (i%n)+n;
        }
    }


}
//Affichage
void afficherCorpsMid()
{
    glPushMatrix();
    glTranslatef(-8.3,-2.7,0);
    glRotatef(90,0,1,0);
    glRotatef(-60,1,0,0);
    glColor3f(1,1,1);
    glBindTexture(GL_TEXTURE_2D,texObject[0]);
    for (int i=0; i<n; i++)
    {
        glBegin(GL_POLYGON);
        glTexCoord2f(0,0);
        glVertex3f(pCorpsMid[fCorpsMid[i][0][0]][0].x,pCorpsMid[fCorpsMid[i][0][0]][0].y,pCorpsMid[fCorpsMid[i][0][0]][0].z);
        glTexCoord2f(0,1);
        glVertex3f(pCorpsMid[fCorpsMid[i][1][0]][0].x,pCorpsMid[fCorpsMid[i][1][0]][0].y,pCorpsMid[fCorpsMid[i][1][0]][0].z);
        glTexCoord2f(1,1);
        glVertex3f(pCorpsMid[fCorpsMid[i][2][0]][0].x,pCorpsMid[fCorpsMid[i][2][0]][0].y,pCorpsMid[fCorpsMid[i][2][0]][0].z);
        glTexCoord2f(1,0);
        glVertex3f(pCorpsMid[fCorpsMid[i][3][0]][0].x,pCorpsMid[fCorpsMid[i][3][0]][0].y,pCorpsMid[fCorpsMid[i][3][0]][0].z);
        glEnd();
    }
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-10.5,-5.5,0);
    glRotatef(90,0,1,0);
    glRotatef(-45,1,0,0);
    glBindTexture(GL_TEXTURE_2D,texObject[0]);
    for (int i=0; i<n; i++)
    {
        glBegin(GL_POLYGON);
        glTexCoord2f(0,0);
        glVertex3f(pCorpsMid[fCorpsMid[i][0][1]][1].x,pCorpsMid[fCorpsMid[i][0][1]][1].y,pCorpsMid[fCorpsMid[i][0][1]][1].z);
        glTexCoord2f(0,1);
        glVertex3f(pCorpsMid[fCorpsMid[i][1][1]][1].x,pCorpsMid[fCorpsMid[i][1][1]][1].y,pCorpsMid[fCorpsMid[i][1][1]][1].z);
        glTexCoord2f(1,1);
        glVertex3f(pCorpsMid[fCorpsMid[i][2][1]][1].x,pCorpsMid[fCorpsMid[i][2][1]][1].y,pCorpsMid[fCorpsMid[i][2][1]][1].z);
        glTexCoord2f(1,0);
        glVertex3f(pCorpsMid[fCorpsMid[i][3][1]][1].x,pCorpsMid[fCorpsMid[i][3][1]][1].y,pCorpsMid[fCorpsMid[i][3][1]][1].z);
        glEnd();
    }
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-13.5,-7.4,0);
    glRotatef(90,0,1,0);
    glRotatef(-20,1,0,0);
    glBindTexture(GL_TEXTURE_2D,texObject[0]);
    for (int i=0; i<n; i++)
    {
        glBegin(GL_POLYGON);
        glTexCoord2f(0,0);
        glVertex3f(pCorpsMid[fCorpsMid[i][0][2]][2].x,pCorpsMid[fCorpsMid[i][0][2]][2].y,pCorpsMid[fCorpsMid[i][0][2]][2].z);
        glTexCoord2f(0,1);
        glVertex3f(pCorpsMid[fCorpsMid[i][1][2]][2].x,pCorpsMid[fCorpsMid[i][1][2]][2].y,pCorpsMid[fCorpsMid[i][1][2]][2].z);
        glTexCoord2f(1,1);
        glVertex3f(pCorpsMid[fCorpsMid[i][2][2]][2].x,pCorpsMid[fCorpsMid[i][2][2]][2].y,pCorpsMid[fCorpsMid[i][2][2]][2].z);
        glTexCoord2f(1,0);
        glVertex3f(pCorpsMid[fCorpsMid[i][3][2]][2].x,pCorpsMid[fCorpsMid[i][3][2]][2].y,pCorpsMid[fCorpsMid[i][3][2]][2].z);
        glEnd();
    }
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-17,-8,0);
    glRotatef(90,0,1,0);
    glBindTexture(GL_TEXTURE_2D,texObject[0]);
    for (int i=0; i<n; i++)
    {
        glBegin(GL_POLYGON);
        glTexCoord2f(0,0);
        glVertex3f(pCorpsMid[fCorpsMid[i][0][3]][3].x,pCorpsMid[fCorpsMid[i][0][3]][3].y,pCorpsMid[fCorpsMid[i][0][3]][3].z);
        glTexCoord2f(0,1);
        glVertex3f(pCorpsMid[fCorpsMid[i][1][3]][3].x,pCorpsMid[fCorpsMid[i][1][3]][3].y,pCorpsMid[fCorpsMid[i][1][3]][3].z);
        glTexCoord2f(1,1);
        glVertex3f(pCorpsMid[fCorpsMid[i][2][3]][3].x,pCorpsMid[fCorpsMid[i][2][3]][3].y,pCorpsMid[fCorpsMid[i][2][3]][3].z);
        glTexCoord2f(1,0);
        glVertex3f(pCorpsMid[fCorpsMid[i][3][3]][3].x,pCorpsMid[fCorpsMid[i][3][3]][3].y,pCorpsMid[fCorpsMid[i][3][3]][3].z);
        glEnd();
    }
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-7.5,-1.43,0);
    glRotatef(90,0,1,0);
    glRotatef(-53,1,0,0);
    glScalef(1,1,0.5);
    glBindTexture(GL_TEXTURE_2D,texObject[2]);
    for (int i=0; i<n; i++)
    {
        glBegin(GL_POLYGON);
        glTexCoord2f(0,0);
        glVertex3f(pCorpsMid[fCorpsMid[i][0][4]][4].x,pCorpsMid[fCorpsMid[i][0][4]][4].y,pCorpsMid[fCorpsMid[i][0][4]][4].z);
        glTexCoord2f(0,1);
        glVertex3f(pCorpsMid[fCorpsMid[i][1][4]][4].x,pCorpsMid[fCorpsMid[i][1][4]][4].y,pCorpsMid[fCorpsMid[i][1][4]][4].z);
        glTexCoord2f(1,1);
        glVertex3f(pCorpsMid[fCorpsMid[i][2][4]][4].x,pCorpsMid[fCorpsMid[i][2][4]][4].y,pCorpsMid[fCorpsMid[i][2][4]][4].z);
        glTexCoord2f(1,0);
        glVertex3f(pCorpsMid[fCorpsMid[i][3][4]][4].x,pCorpsMid[fCorpsMid[i][3][4]][4].y,pCorpsMid[fCorpsMid[i][3][4]][4].z);
        glEnd();
    }
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-9.4,-4.35,0);
    glRotatef(90,0,1,0);
    glRotatef(-50,1,0,0);
    glScalef(1,1,0.5);
    glBindTexture(GL_TEXTURE_2D,texObject[2]);
    for (int i=0; i<n; i++)
    {
        glBegin(GL_POLYGON);
        glTexCoord2f(0,0);
        glVertex3f(pCorpsMid[fCorpsMid[i][0][5]][5].x,pCorpsMid[fCorpsMid[i][0][5]][5].y,pCorpsMid[fCorpsMid[i][0][5]][5].z);
        glTexCoord2f(0,1);
        glVertex3f(pCorpsMid[fCorpsMid[i][1][5]][5].x,pCorpsMid[fCorpsMid[i][1][5]][5].y,pCorpsMid[fCorpsMid[i][1][5]][5].z);
        glTexCoord2f(1,1);
        glVertex3f(pCorpsMid[fCorpsMid[i][2][5]][5].x,pCorpsMid[fCorpsMid[i][2][5]][5].y,pCorpsMid[fCorpsMid[i][2][5]][5].z);
        glTexCoord2f(1,0);
        glVertex3f(pCorpsMid[fCorpsMid[i][3][5]][5].x,pCorpsMid[fCorpsMid[i][3][5]][5].y,pCorpsMid[fCorpsMid[i][3][5]][5].z);
        glEnd();
    }
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-12,-6.76,0);
    glRotatef(90,0,1,0);
    glRotatef(-30,1,0,0);
    glScalef(1,1,0.5);
    glBindTexture(GL_TEXTURE_2D,texObject[2]);
    for (int i=0; i<n; i++)
    {
        glBegin(GL_POLYGON);
        glTexCoord2f(0,0);
        glVertex3f(pCorpsMid[fCorpsMid[i][0][6]][6].x,pCorpsMid[fCorpsMid[i][0][6]][6].y,pCorpsMid[fCorpsMid[i][0][6]][6].z);
        glTexCoord2f(0,1);
        glVertex3f(pCorpsMid[fCorpsMid[i][1][6]][6].x,pCorpsMid[fCorpsMid[i][1][6]][6].y,pCorpsMid[fCorpsMid[i][1][6]][6].z);
        glTexCoord2f(1,1);
        glVertex3f(pCorpsMid[fCorpsMid[i][2][6]][6].x,pCorpsMid[fCorpsMid[i][2][6]][6].y,pCorpsMid[fCorpsMid[i][2][6]][6].z);
        glTexCoord2f(1,0);
        glVertex3f(pCorpsMid[fCorpsMid[i][3][6]][6].x,pCorpsMid[fCorpsMid[i][3][6]][6].y,pCorpsMid[fCorpsMid[i][3][6]][6].z);
        glEnd();
    }
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-15.3,-7.95,0);
    glRotatef(90,0,1,0);
    glRotatef(-10,1,0,0);
    glScalef(1,1,0.5);
    glBindTexture(GL_TEXTURE_2D,texObject[2]);
    for (int i=0; i<n; i++)
    {
        glBegin(GL_POLYGON);
        glTexCoord2f(0,0);
        glVertex3f(pCorpsMid[fCorpsMid[i][0][7]][7].x,pCorpsMid[fCorpsMid[i][0][7]][7].y,pCorpsMid[fCorpsMid[i][0][7]][7].z);
        glTexCoord2f(0,1);
        glVertex3f(pCorpsMid[fCorpsMid[i][1][7]][7].x,pCorpsMid[fCorpsMid[i][1][7]][7].y,pCorpsMid[fCorpsMid[i][1][7]][7].z);
        glTexCoord2f(1,1);
        glVertex3f(pCorpsMid[fCorpsMid[i][2][7]][7].x,pCorpsMid[fCorpsMid[i][2][7]][7].y,pCorpsMid[fCorpsMid[i][2][7]][7].z);
        glTexCoord2f(1,0);
        glVertex3f(pCorpsMid[fCorpsMid[i][3][7]][7].x,pCorpsMid[fCorpsMid[i][3][7]][7].y,pCorpsMid[fCorpsMid[i][3][7]][7].z);
        glEnd();
    }
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-20.5,-7.4,0);
    glRotatef(90,0,1,0);
    glRotatef(20,1,0,0);
    glBindTexture(GL_TEXTURE_2D,texObject[0]);
    for (int i=0; i<n; i++)
    {
        glBegin(GL_POLYGON);
        glTexCoord2f(0,0);
        glVertex3f(pCorpsMid[fCorpsMid[i][0][8]][8].x,pCorpsMid[fCorpsMid[i][0][8]][8].y,pCorpsMid[fCorpsMid[i][0][8]][8].z);
        glTexCoord2f(0,1);
        glVertex3f(pCorpsMid[fCorpsMid[i][1][8]][8].x,pCorpsMid[fCorpsMid[i][1][8]][8].y,pCorpsMid[fCorpsMid[i][1][8]][8].z);
        glTexCoord2f(1,1);
        glVertex3f(pCorpsMid[fCorpsMid[i][2][8]][8].x,pCorpsMid[fCorpsMid[i][2][8]][8].y,pCorpsMid[fCorpsMid[i][2][8]][8].z);
        glTexCoord2f(1,0);
        glVertex3f(pCorpsMid[fCorpsMid[i][3][8]][8].x,pCorpsMid[fCorpsMid[i][3][8]][8].y,pCorpsMid[fCorpsMid[i][3][8]][8].z);
        glEnd();
    }
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-23.5,-5.5,0);
    glRotatef(90,0,1,0);
    glRotatef(45,1,0,0);
    glBindTexture(GL_TEXTURE_2D,texObject[0]);
    for (int i=0; i<n; i++)
    {
        glBegin(GL_POLYGON);
        glTexCoord2f(0,0);
        glVertex3f(pCorpsMid[fCorpsMid[i][0][9]][9].x,pCorpsMid[fCorpsMid[i][0][9]][9].y,pCorpsMid[fCorpsMid[i][0][9]][9].z);
        glTexCoord2f(0,1);
        glVertex3f(pCorpsMid[fCorpsMid[i][1][9]][9].x,pCorpsMid[fCorpsMid[i][1][9]][9].y,pCorpsMid[fCorpsMid[i][1][9]][9].z);
        glTexCoord2f(1,1);
        glVertex3f(pCorpsMid[fCorpsMid[i][2][9]][9].x,pCorpsMid[fCorpsMid[i][2][9]][9].y,pCorpsMid[fCorpsMid[i][2][9]][9].z);
        glTexCoord2f(1,0);
        glVertex3f(pCorpsMid[fCorpsMid[i][3][9]][9].x,pCorpsMid[fCorpsMid[i][3][9]][9].y,pCorpsMid[fCorpsMid[i][3][9]][9].z);
        glEnd();
    }
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-25.7,-2.7,0);
    glRotatef(90,0,1,0);
    glRotatef(60,1,0,0);
    glBindTexture(GL_TEXTURE_2D,texObject[0]);
    for (int i=0; i<n; i++)
    {
        glBegin(GL_POLYGON);
        glTexCoord2f(0,0);
        glVertex3f(pCorpsMid[fCorpsMid[i][0][10]][10].x,pCorpsMid[fCorpsMid[i][0][10]][10].y,pCorpsMid[fCorpsMid[i][0][10]][10].z);
        glTexCoord2f(0,1);
        glVertex3f(pCorpsMid[fCorpsMid[i][1][10]][10].x,pCorpsMid[fCorpsMid[i][1][10]][10].y,pCorpsMid[fCorpsMid[i][1][10]][10].z);
        glTexCoord2f(1,1);
        glVertex3f(pCorpsMid[fCorpsMid[i][2][10]][10].x,pCorpsMid[fCorpsMid[i][2][10]][10].y,pCorpsMid[fCorpsMid[i][2][10]][10].z);
        glTexCoord2f(1,0);
        glVertex3f(pCorpsMid[fCorpsMid[i][3][10]][10].x,pCorpsMid[fCorpsMid[i][3][10]][10].y,pCorpsMid[fCorpsMid[i][3][10]][10].z);
        glEnd();
    }
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-26.5,-1.43,0);
    glRotatef(90,0,1,0);
    glRotatef(53,1,0,0);
    glScalef(1,1,0.5);

    glBindTexture(GL_TEXTURE_2D,texObject[2]);
    for (int i=0; i<n; i++)
    {
        glBegin(GL_POLYGON);
        glTexCoord2f(0,0);
        glVertex3f(pCorpsMid[fCorpsMid[i][0][11]][11].x,pCorpsMid[fCorpsMid[i][0][11]][11].y,pCorpsMid[fCorpsMid[i][0][11]][11].z);
        glTexCoord2f(0,1);
        glVertex3f(pCorpsMid[fCorpsMid[i][1][11]][11].x,pCorpsMid[fCorpsMid[i][1][11]][11].y,pCorpsMid[fCorpsMid[i][1][11]][11].z);
        glTexCoord2f(1,1);
        glVertex3f(pCorpsMid[fCorpsMid[i][2][11]][11].x,pCorpsMid[fCorpsMid[i][2][11]][11].y,pCorpsMid[fCorpsMid[i][2][11]][11].z);
        glTexCoord2f(1,0);
        glVertex3f(pCorpsMid[fCorpsMid[i][3][11]][11].x,pCorpsMid[fCorpsMid[i][3][11]][11].y,pCorpsMid[fCorpsMid[i][3][11]][11].z);
        glEnd();
    }
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-24.6,-4.35,0);
    glRotatef(90,0,1,0);
    glRotatef(50,1,0,0);
    glScalef(1,1,0.5);

    glBindTexture(GL_TEXTURE_2D,texObject[2]);
    for (int i=0; i<n; i++)
    {
        glBegin(GL_POLYGON);
        glTexCoord2f(0,0);
        glVertex3f(pCorpsMid[fCorpsMid[i][0][12]][12].x,pCorpsMid[fCorpsMid[i][0][12]][12].y,pCorpsMid[fCorpsMid[i][0][12]][12].z);
        glTexCoord2f(0,1);
        glVertex3f(pCorpsMid[fCorpsMid[i][1][12]][12].x,pCorpsMid[fCorpsMid[i][1][12]][12].y,pCorpsMid[fCorpsMid[i][1][12]][12].z);
        glTexCoord2f(1,1);
        glVertex3f(pCorpsMid[fCorpsMid[i][2][12]][12].x,pCorpsMid[fCorpsMid[i][2][12]][12].y,pCorpsMid[fCorpsMid[i][2][12]][12].z);
        glTexCoord2f(1,0);
        glVertex3f(pCorpsMid[fCorpsMid[i][3][12]][12].x,pCorpsMid[fCorpsMid[i][3][12]][12].y,pCorpsMid[fCorpsMid[i][3][12]][12].z);
        glEnd();
    }
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-22,-6.76,0);
    glRotatef(90,0,1,0);
    glRotatef(30,1,0,0);
    glScalef(1,1,0.5);

    glBindTexture(GL_TEXTURE_2D,texObject[2]);
    for (int i=0; i<n; i++)
    {
        glBegin(GL_POLYGON);
        glTexCoord2f(0,0);
        glVertex3f(pCorpsMid[fCorpsMid[i][0][13]][13].x,pCorpsMid[fCorpsMid[i][0][13]][13].y,pCorpsMid[fCorpsMid[i][0][13]][13].z);
        glTexCoord2f(0,1);
        glVertex3f(pCorpsMid[fCorpsMid[i][1][13]][13].x,pCorpsMid[fCorpsMid[i][1][13]][13].y,pCorpsMid[fCorpsMid[i][1][13]][13].z);
        glTexCoord2f(1,1);
        glVertex3f(pCorpsMid[fCorpsMid[i][2][13]][13].x,pCorpsMid[fCorpsMid[i][2][13]][13].y,pCorpsMid[fCorpsMid[i][2][13]][13].z);
        glTexCoord2f(1,0);
        glVertex3f(pCorpsMid[fCorpsMid[i][3][13]][13].x,pCorpsMid[fCorpsMid[i][3][13]][13].y,pCorpsMid[fCorpsMid[i][3][13]][13].z);
        glEnd();
    }
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-18.5,-7.95,0);
    glRotatef(90,0,1,0);
    glRotatef(10,1,0,0);
    glScalef(1,1,0.5);

    glBindTexture(GL_TEXTURE_2D,texObject[2]);
    for (int i=0; i<n; i++)
    {
        glBegin(GL_POLYGON);
        glTexCoord2f(0,0);
        glVertex3f(pCorpsMid[fCorpsMid[i][0][14]][14].x,pCorpsMid[fCorpsMid[i][0][14]][14].y,pCorpsMid[fCorpsMid[i][0][14]][14].z);
        glTexCoord2f(0,1);
        glVertex3f(pCorpsMid[fCorpsMid[i][1][14]][14].x,pCorpsMid[fCorpsMid[i][1][14]][14].y,pCorpsMid[fCorpsMid[i][1][14]][14].z);
        glTexCoord2f(1,1);
        glVertex3f(pCorpsMid[fCorpsMid[i][2][14]][14].x,pCorpsMid[fCorpsMid[i][2][14]][14].y,pCorpsMid[fCorpsMid[i][2][14]][14].z);
        glTexCoord2f(1,0);
        glVertex3f(pCorpsMid[fCorpsMid[i][3][14]][14].x,pCorpsMid[fCorpsMid[i][3][14]][14].y,pCorpsMid[fCorpsMid[i][3][14]][14].z);
        glEnd();
    }
    glPopMatrix();





}
