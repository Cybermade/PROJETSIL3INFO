#include "Prototypes.h"
//Fonctions Affichage et initialisation cou du corps cette partie est composé de seulement des cylindres 3 en tout
//Seulement des cylindres a partir de leurs representation mathématique (aucun objet glut ici)
void corpsTop()
{
    for(int c=0; c<C4; c++)
    {
        for(int i = 0; i<(n*2); i++)
        {
            pCorpsTop[i][c].x = r*cos((2*i*M_PI)/n);
            pCorpsTop[i][c].y = r*sin((2*i*M_PI)/n);
            if(i<n)
                pCorpsTop[i][c].z = h/2;
            else
                pCorpsTop[i][c].z = -h/2;
        }
        pCorpsTop[n*2][c].x = 0;
        pCorpsTop[n*2][c].y = 0;
        pCorpsTop[n*2][c].z = -h/2;

        pCorpsTop[n*2+1][c].x = 0;
        pCorpsTop[n*2+1][c].y = 0;
        pCorpsTop[n*2+1][c].z = h/2;
    }
    for(int c=0; c<C4; c++)
    {
        for(int i = 0; i<n; i++)
        {
            fCorpsTop[i][0][c] = i;
            fCorpsTop[i][1][c] = (i+1)%n;
            fCorpsTop[i][2][c] = (i+1)%n+n;
            fCorpsTop[i][3][c] = (i%n)+n;
        }
    }


}
void afficherCorpsTop()
{
    glPushMatrix();
    glTranslatef(-27.8,0,0);
    glRotatef(90,0,1,0);
    glRotatef(45,1,0,0);
    glBindTexture(GL_TEXTURE_2D,texObject[0]);
    for (int i=0; i<n; i++)
    {
        glBegin(GL_POLYGON);
        glTexCoord2f(0,0);
        glVertex3f(pCorpsTop[fCorpsTop[i][0][0]][0].x,pCorpsTop[fCorpsTop[i][0][0]][0].y,pCorpsTop[fCorpsTop[i][0][0]][0].z);
        glTexCoord2f(0,1);
        glVertex3f(pCorpsTop[fCorpsTop[i][1][0]][0].x,pCorpsTop[fCorpsTop[i][1][0]][0].y,pCorpsTop[fCorpsTop[i][1][0]][0].z);
        glTexCoord2f(1,1);
        glVertex3f(pCorpsTop[fCorpsTop[i][2][0]][0].x,pCorpsTop[fCorpsTop[i][2][0]][0].y,pCorpsTop[fCorpsTop[i][2][0]][0].z);
        glTexCoord2f(1,0);
        glVertex3f(pCorpsTop[fCorpsTop[i][3][0]][0].x,pCorpsTop[fCorpsTop[i][3][0]][0].y,pCorpsTop[fCorpsTop[i][3][0]][0].z);
        glEnd();
    }
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-29,1,0);
    glRotatef(270,0,1,0);
    glRotatef(-25,1,0,0);
    glScalef(1,1,0.5);
    glBindTexture(GL_TEXTURE_2D,texObject[2]);
    for (int i=0; i<n; i++)
    {
        glBegin(GL_POLYGON);
        glTexCoord2f(0,0);
        glVertex3f(pCorpsTop[fCorpsTop[i][0][1]][1].x,pCorpsTop[fCorpsTop[i][0][1]][1].y,pCorpsTop[fCorpsTop[i][0][1]][1].z);
        glTexCoord2f(0,1);
        glVertex3f(pCorpsTop[fCorpsTop[i][1][1]][1].x,pCorpsTop[fCorpsTop[i][1][1]][1].y,pCorpsTop[fCorpsTop[i][1][1]][1].z);
        glTexCoord2f(1,1);
        glVertex3f(pCorpsTop[fCorpsTop[i][2][1]][1].x,pCorpsTop[fCorpsTop[i][2][1]][1].y,pCorpsTop[fCorpsTop[i][2][1]][1].z);
        glTexCoord2f(1,0);
        glVertex3f(pCorpsTop[fCorpsTop[i][3][1]][1].x,pCorpsTop[fCorpsTop[i][3][1]][1].y,pCorpsTop[fCorpsTop[i][3][1]][1].z);
        glEnd();
    }
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-30.8,1.2,0);
    glRotatef(90,0,1,0);
    glBindTexture(GL_TEXTURE_2D,texObject[0]);
    for (int i=0; i<n; i++)
    {
        glBegin(GL_POLYGON);
        glTexCoord2f(0,0);
        glVertex3f(pCorpsTop[fCorpsTop[i][0][2]][2].x,pCorpsTop[fCorpsTop[i][0][2]][2].y,pCorpsTop[fCorpsTop[i][0][2]][2].z);
        glTexCoord2f(0,1);
        glVertex3f(pCorpsTop[fCorpsTop[i][1][2]][2].x,pCorpsTop[fCorpsTop[i][1][2]][2].y,pCorpsTop[fCorpsTop[i][1][2]][2].z);
        glTexCoord2f(1,1);
        glVertex3f(pCorpsTop[fCorpsTop[i][2][2]][2].x,pCorpsTop[fCorpsTop[i][2][2]][2].y,pCorpsTop[fCorpsTop[i][2][2]][2].z);
        glTexCoord2f(1,0);
        glVertex3f(pCorpsTop[fCorpsTop[i][3][2]][2].x,pCorpsTop[fCorpsTop[i][3][2]][2].y,pCorpsTop[fCorpsTop[i][3][2]][2].z);
        glEnd();
    }
    glPopMatrix();




}
