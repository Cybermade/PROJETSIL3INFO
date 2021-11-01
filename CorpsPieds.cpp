#include "Prototypes.h"
//Fonctions Affichage et initialisation pieds du corps cette partie est composé de cylindres et de sphere
//Seulement des cylindres et des spheres a partir de leurs representation mathématique, des cones object glut pour les ongles
//Chaque pied est composé de 2 cylindres 1 sphere et 3 cones

void corpsPieds()
{
    for(int c=0; c<C5; c++)
    {
        for(int i = 0; i<(n*2); i++)
        {
            pCorpsPieds[i][c].x = r*cos((2*i*M_PI)/n);
            pCorpsPieds[i][c].y = r*sin((2*i*M_PI)/n);
            if(i<n)
                pCorpsPieds[i][c].z = h/2;
            else
                pCorpsPieds[i][c].z = -h/2;
        }
        pCorpsPieds[n*2][c].x = 0;
        pCorpsPieds[n*2][c].y = 0;
        pCorpsPieds[n*2][c].z = -h/2;

        pCorpsPieds[n*2+1][c].x = 0;
        pCorpsPieds[n*2+1][c].y = 0;
        pCorpsPieds[n*2+1][c].z = h/2;
    }
    for(int c=0; c<C5; c++)
    {
        for(int i = 0; i<n; i++)
        {
            fCorpsPieds[i][0][c] = i;
            fCorpsPieds[i][1][c] = (i+1)%n;
            fCorpsPieds[i][2][c] = (i+1)%n+n;
            fCorpsPieds[i][3][c] = (i%n)+n;
        }
    }
    for(int j =0; j<NP; j++)
    {
        for(int i = 0; i<NM; i++)
        {
            pCorpsPiedsSphere[i+j*NM].x = r*cos((2*M_PI*i)/NM)*cos(-1*(M_PI)/2 + j*(M_PI)/(NP-1));
            pCorpsPiedsSphere[i+j*NM].y = r*sin((2*M_PI*i)/NM)*cos(-1*(M_PI)/2 + j*(M_PI)/(NP-1));
            pCorpsPiedsSphere[i+j*NM].z = r*sin(-1*(M_PI)/2 + j*(M_PI)/(NP-1));


        }

    }

    for(int j = 0; j<NP-1; j++)
    {
        for(int i =0; i<NM; i++)
        {
            fCorpsPiedsSphere[i][j][0] = i+j*NM;
            fCorpsPiedsSphere[i][j][1] = (i+1)%NM+j*NM;
            fCorpsPiedsSphere[i][j][2] = (i+1)%NM+NM+j*NM;
            fCorpsPiedsSphere[i][j][3] = (i%NM) + NM+j*NM;


        }


    }


}
void corpsPieds1()
{
    for(int c=0; c<C5; c++)
    {
        for(int i = 0; i<(n*2); i++)
        {
            pCorpsPieds1[i][c].x = r*cos((2*i*M_PI)/n);
            pCorpsPieds1[i][c].y = r*sin((2*i*M_PI)/n);
            if(i<n)
                pCorpsPieds1[i][c].z = h/2;
            else
                pCorpsPieds1[i][c].z = -h/2;
        }
        pCorpsPieds1[n*2][c].x = 0;
        pCorpsPieds1[n*2][c].y = 0;
        pCorpsPieds1[n*2][c].z = -h/2;

        pCorpsPieds1[n*2+1][c].x = 0;
        pCorpsPieds1[n*2+1][c].y = 0;
        pCorpsPieds1[n*2+1][c].z = h/2;
    }
    for(int c=0; c<C5; c++)
    {
        for(int i = 0; i<n; i++)
        {
            fCorpsPieds1[i][0][c] = i;
            fCorpsPieds1[i][1][c] = (i+1)%n;
            fCorpsPieds1[i][2][c] = (i+1)%n+n;
            fCorpsPieds1[i][3][c] = (i%n)+n;
        }
    }
    for(int j =0; j<NP; j++)
    {
        for(int i = 0; i<NM; i++)
        {
            pCorpsPieds1Sphere[i+j*NM].x = r*cos((2*M_PI*i)/NM)*cos(-1*(M_PI)/2 + j*(M_PI)/(NP-1));
            pCorpsPieds1Sphere[i+j*NM].y = r*sin((2*M_PI*i)/NM)*cos(-1*(M_PI)/2 + j*(M_PI)/(NP-1));
            pCorpsPieds1Sphere[i+j*NM].z = r*sin(-1*(M_PI)/2 + j*(M_PI)/(NP-1));


        }

    }

    for(int j = 0; j<NP-1; j++)
    {
        for(int i =0; i<NM; i++)
        {
            fCorpsPieds1Sphere[i][j][0] = i+j*NM;
            fCorpsPieds1Sphere[i][j][1] = (i+1)%NM+j*NM;
            fCorpsPieds1Sphere[i][j][2] = (i+1)%NM+NM+j*NM;
            fCorpsPieds1Sphere[i][j][3] = (i%NM) + NM+j*NM;


        }


    }


}
void corpsPieds2()
{
    glPushMatrix();
    for(int c=0; c<C5; c++)
    {
        for(int i = 0; i<(n*2); i++)
        {
            pCorpsPieds2[i][c].x = r*cos((2*i*M_PI)/n);
            pCorpsPieds2[i][c].y = r*sin((2*i*M_PI)/n);
            if(i<n)
                pCorpsPieds2[i][c].z = h/2;
            else
                pCorpsPieds2[i][c].z = -h/2;
        }
        pCorpsPieds2[n*2][c].x = 0;
        pCorpsPieds2[n*2][c].y = 0;
        pCorpsPieds2[n*2][c].z = -h/2;

        pCorpsPieds2[n*2+1][c].x = 0;
        pCorpsPieds2[n*2+1][c].y = 0;
        pCorpsPieds2[n*2+1][c].z = h/2;
    }
    for(int c=0; c<C5; c++)
    {
        for(int i = 0; i<n; i++)
        {
            fCorpsPieds2[i][0][c] = i;
            fCorpsPieds2[i][1][c] = (i+1)%n;
            fCorpsPieds2[i][2][c] = (i+1)%n+n;
            fCorpsPieds2[i][3][c] = (i%n)+n;
        }
    }
    for(int j =0; j<NP; j++)
    {
        for(int i = 0; i<NM; i++)
        {
            pCorpsPieds2Sphere[i+j*NM].x = r*cos((2*M_PI*i)/NM)*cos(-1*(M_PI)/2 + j*(M_PI)/(NP-1));
            pCorpsPieds2Sphere[i+j*NM].y = r*sin((2*M_PI*i)/NM)*cos(-1*(M_PI)/2 + j*(M_PI)/(NP-1));
            pCorpsPieds2Sphere[i+j*NM].z = r*sin(-1*(M_PI)/2 + j*(M_PI)/(NP-1));


        }

    }

    for(int j = 0; j<NP-1; j++)
    {
        for(int i =0; i<NM; i++)
        {
            fCorpsPieds2Sphere[i][j][0] = i+j*NM;
            fCorpsPieds2Sphere[i][j][1] = (i+1)%NM+j*NM;
            fCorpsPieds2Sphere[i][j][2] = (i+1)%NM+NM+j*NM;
            fCorpsPieds2Sphere[i][j][3] = (i%NM) + NM+j*NM;


        }


    }
    glPopMatrix();
}
void corpsPieds3()
{
    for(int c=0; c<C5; c++)
    {
        for(int i = 0; i<(n*2); i++)
        {
            pCorpsPieds3[i][c].x = r*cos((2*i*M_PI)/n);
            pCorpsPieds3[i][c].y = r*sin((2*i*M_PI)/n);
            if(i<n)
                pCorpsPieds3[i][c].z = h/2;
            else
                pCorpsPieds3[i][c].z = -h/2;
        }
        pCorpsPieds3[n*2][c].x = 0;
        pCorpsPieds3[n*2][c].y = 0;
        pCorpsPieds3[n*2][c].z = -h/2;

        pCorpsPieds3[n*2+1][c].x = 0;
        pCorpsPieds3[n*2+1][c].y = 0;
        pCorpsPieds3[n*2+1][c].z = h/2;
    }
    for(int c=0; c<C5; c++)
    {
        for(int i = 0; i<n; i++)
        {
            fCorpsPieds3[i][0][c] = i;
            fCorpsPieds3[i][1][c] = (i+1)%n;
            fCorpsPieds3[i][2][c] = (i+1)%n+n;
            fCorpsPieds3[i][3][c] = (i%n)+n;
        }
    }
    for(int j =0; j<NP; j++)
    {
        for(int i = 0; i<NM; i++)
        {
            pCorpsPieds3Sphere[i+j*NM].x = r*cos((2*M_PI*i)/NM)*cos(-1*(M_PI)/2 + j*(M_PI)/(NP-1));
            pCorpsPieds3Sphere[i+j*NM].y = r*sin((2*M_PI*i)/NM)*cos(-1*(M_PI)/2 + j*(M_PI)/(NP-1));
            pCorpsPieds3Sphere[i+j*NM].z = r*sin(-1*(M_PI)/2 + j*(M_PI)/(NP-1));


        }

    }

    for(int j = 0; j<NP-1; j++)
    {
        for(int i =0; i<NM; i++)
        {
            fCorpsPieds3Sphere[i][j][0] = i+j*NM;
            fCorpsPieds3Sphere[i][j][1] = (i+1)%NM+j*NM;
            fCorpsPieds3Sphere[i][j][2] = (i+1)%NM+NM+j*NM;
            fCorpsPieds3Sphere[i][j][3] = (i%NM) + NM+j*NM;


        }


    }
}

// AFFICHAGE DES 4 PIEDS
//Texture enroulé verticalement dans la partie haute du pied et horizontalement dans la partie basse du pied
//Même code pour les 4 pieds y'a juste des translations pour mettre le tout du bon côté
void afficherCorpsPieds()
{
    glBindTexture(GL_TEXTURE_2D,texObject[1]);
    glPushMatrix();
    glTranslatef(0,1,-7);
    glRotatef(30,0,1,0);
    glTranslatef(-15.0,-10.0,0.0);
    glScalef(0.8,0.8,0.8);
    glPushMatrix();
    glRotatef(90,1,0,0);
    glScalef(0.9,0.9,0.9);
    //Cylindre 1/2 haut du pied
    for (int i=0; i<n; i++)
    {
        //                 (4)  (3)
        //                   -----------
        //                   |    '    |
        //                   |    '    |
        //                // |    '    |
        //                   -----------
        //                 (1)   (2)
        // la texture a été découpée en "morceau" pour pouvoir l'enrouler (Verticalement)
        glBegin(GL_POLYGON);
        glTexCoord2f((float)i/n,1);
        glVertex3f(pCorpsPieds[fCorpsPieds[i][0][0]][0].x,pCorpsPieds[fCorpsPieds[i][0][0]][0].y,pCorpsPieds[fCorpsPieds[i][0][0]][0].z);
        glTexCoord2f((float)(i+1)/n,1);
        glVertex3f(pCorpsPieds[fCorpsPieds[i][1][0]][0].x,pCorpsPieds[fCorpsPieds[i][1][0]][0].y,pCorpsPieds[fCorpsPieds[i][1][0]][0].z);
        glTexCoord2f((float)(i+1)/n,0);
        glVertex3f(pCorpsPieds[fCorpsPieds[i][2][0]][0].x,pCorpsPieds[fCorpsPieds[i][2][0]][0].y,pCorpsPieds[fCorpsPieds[i][2][0]][0].z);
        glTexCoord2f((float)(i)/n,0);
        glVertex3f(pCorpsPieds[fCorpsPieds[i][3][0]][0].x,pCorpsPieds[fCorpsPieds[i][3][0]][0].y,pCorpsPieds[fCorpsPieds[i][3][0]][0].z);
        glEnd();
    }
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,-2,0);
    //Sphere 1/1 Milieu du pied
    for(int j = 0; j<NP-1; j++)
    {
        for(int i =0; i<NM; i++)
        {



            glBegin(GL_POLYGON);




            glTexCoord2f(0,0);
            glVertex3f(pCorpsPiedsSphere[fCorpsPiedsSphere[i][j][0]].x,pCorpsPiedsSphere[fCorpsPiedsSphere[i][j][0]].y,pCorpsPiedsSphere[fCorpsPiedsSphere[i][j][0]].z);
            glTexCoord2f(0,1);
            glVertex3f(pCorpsPiedsSphere[fCorpsPiedsSphere[i][j][1]].x,pCorpsPiedsSphere[fCorpsPiedsSphere[i][j][1]].y,pCorpsPiedsSphere[fCorpsPiedsSphere[i][j][1]].z);
            glTexCoord2f(1,1);
            glVertex3f(pCorpsPiedsSphere[fCorpsPiedsSphere[i][j][2]].x,pCorpsPiedsSphere[fCorpsPiedsSphere[i][j][2]].y,pCorpsPiedsSphere[fCorpsPiedsSphere[i][j][2]].z);
            glTexCoord2f(1,0);
            glVertex3f(pCorpsPiedsSphere[fCorpsPiedsSphere[i][j][3]].x,pCorpsPiedsSphere[fCorpsPiedsSphere[i][j][3]].y,pCorpsPiedsSphere[fCorpsPiedsSphere[i][j][3]].z);

            glEnd();
        }



    }
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-2,-2,0);
    glRotatef(90,0,1,0);
    glScalef(0.9,0.5,0.8);
    //Cylindre 2/2 Bas du pied
    for (int i=0; i<n; i++)
    {
        //                   ----------
        //                   |        |
        //                 (1)| ------ |(4)
        //                // |       |
        //                (2)----------(3)
        // la texture a été découpée en "morceau" pour pouvoir l'enrouler(Horizontalement)
        glBegin(GL_POLYGON);
        glTexCoord2f(0,(float)i/n);
        glVertex3f(pCorpsPieds[fCorpsPieds[i][0][1]][1].x,pCorpsPieds[fCorpsPieds[i][0][1]][1].y,pCorpsPieds[fCorpsPieds[i][0][1]][1].z);
        glTexCoord2f(0,(float)(i+1)/n);
        glVertex3f(pCorpsPieds[fCorpsPieds[i][1][1]][1].x,pCorpsPieds[fCorpsPieds[i][1][1]][1].y,pCorpsPieds[fCorpsPieds[i][1][1]][1].z);
        glTexCoord2f(1,(float)(i+1)/n);
        glVertex3f(pCorpsPieds[fCorpsPieds[i][2][1]][1].x,pCorpsPieds[fCorpsPieds[i][2][1]][1].y,pCorpsPieds[fCorpsPieds[i][2][1]][1].z);
        glTexCoord2f(1,(float)(i)/n);
        glVertex3f(pCorpsPieds[fCorpsPieds[i][3][1]][1].x,pCorpsPieds[fCorpsPieds[i][3][1]][1].y,pCorpsPieds[fCorpsPieds[i][3][1]][1].z);
        glEnd();
    }
    glPopMatrix();
    glDisable(GL_TEXTURE_2D);
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-3.2,-2,0);
    glRotatef(-90,0,1,0);
    //LES CONES POUR LES ONGLES
    glutSolidCone(0.3,1,20,15);

    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,0,-0.5);

    glColor3f(1,1,1);
    glTranslatef(-3.2,-2,0);
    glRotatef(-90,0,1,0);

    glutSolidCone(0.3,1,20,15);

    glPopMatrix();

    glPushMatrix();

    glColor3f(1,1,1);

    glTranslatef(0,0,0.5);
    glTranslatef(-3.2,-2,0);
    glRotatef(-90,0,1,0);

    glutSolidCone(0.3,1,20,15);

    glPopMatrix();
    glEnable(GL_TEXTURE_2D);
    glPopMatrix();




}
void afficherCorpsPieds1()
{
    glPushMatrix();
    glTranslatef(0,1,-3);
    glRotatef(30,0,1,0);
    glTranslatef(-20.0,-10.0,-7.5);
    glScalef(0.8,0.8,0.8);
    glPushMatrix();
    glRotatef(90,1,0,0);
    glScalef(0.9,0.9,0.9);
    for (int i=0; i<n; i++)
    {

        glBegin(GL_POLYGON);
        glTexCoord2f((float)i/n,1);
        glVertex3f(pCorpsPieds1[fCorpsPieds1[i][0][0]][0].x,pCorpsPieds1[fCorpsPieds1[i][0][0]][0].y,pCorpsPieds1[fCorpsPieds1[i][0][0]][0].z);
        glTexCoord2f((float)(i+1)/n,1);
        glVertex3f(pCorpsPieds1[fCorpsPieds1[i][1][0]][0].x,pCorpsPieds1[fCorpsPieds1[i][1][0]][0].y,pCorpsPieds1[fCorpsPieds1[i][1][0]][0].z);
        glTexCoord2f((float)(i+1)/n,0);
        glVertex3f(pCorpsPieds1[fCorpsPieds1[i][2][0]][0].x,pCorpsPieds1[fCorpsPieds1[i][2][0]][0].y,pCorpsPieds1[fCorpsPieds1[i][2][0]][0].z);
        glTexCoord2f((float)(i)/n,0);
        glVertex3f(pCorpsPieds1[fCorpsPieds1[i][3][0]][0].x,pCorpsPieds1[fCorpsPieds1[i][3][0]][0].y,pCorpsPieds1[fCorpsPieds1[i][3][0]][0].z);
        glEnd();
    }
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,-2,0);

    for(int j = 0; j<NP-1; j++)
    {
        for(int i =0; i<NM; i++)
        {


            glBegin(GL_POLYGON);




            glTexCoord2f(0.0,0.0);
            glVertex3f(pCorpsPieds1Sphere[fCorpsPieds1Sphere[i][j][0]].x,pCorpsPieds1Sphere[fCorpsPieds1Sphere[i][j][0]].y,pCorpsPieds1Sphere[fCorpsPieds1Sphere[i][j][0]].z);
            glTexCoord2f(0.0,1.0);
            glVertex3f(pCorpsPieds1Sphere[fCorpsPieds1Sphere[i][j][1]].x,pCorpsPieds1Sphere[fCorpsPieds1Sphere[i][j][1]].y,pCorpsPieds1Sphere[fCorpsPieds1Sphere[i][j][1]].z);
            glTexCoord2f(1.0,1.0);
            glVertex3f(pCorpsPieds1Sphere[fCorpsPieds1Sphere[i][j][2]].x,pCorpsPieds1Sphere[fCorpsPieds1Sphere[i][j][2]].y,pCorpsPieds1Sphere[fCorpsPieds1Sphere[i][j][2]].z);
            glTexCoord2f(1.0,0.0);
            glVertex3f(pCorpsPieds1Sphere[fCorpsPieds1Sphere[i][j][3]].x,pCorpsPieds1Sphere[fCorpsPieds1Sphere[i][j][3]].y,pCorpsPieds1Sphere[fCorpsPieds1Sphere[i][j][3]].z);

            glEnd();
        }



    }
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-2,-2,0);
    glRotatef(90,0,1,0);
    glScalef(0.9,0.5,0.8);
    for (int i=0; i<n; i++)
    {

        glBegin(GL_POLYGON);
        glTexCoord2f(0,(float)i/n);
        glVertex3f(pCorpsPieds1[fCorpsPieds1[i][0][1]][1].x,pCorpsPieds1[fCorpsPieds1[i][0][1]][1].y,pCorpsPieds1[fCorpsPieds1[i][0][1]][1].z);
        glTexCoord2f(0,(float)(i+1)/n);
        glVertex3f(pCorpsPieds1[fCorpsPieds1[i][1][1]][1].x,pCorpsPieds1[fCorpsPieds1[i][1][1]][1].y,pCorpsPieds1[fCorpsPieds1[i][1][1]][1].z);
        glTexCoord2f(1,(float)(i+1)/n);
        glVertex3f(pCorpsPieds1[fCorpsPieds1[i][2][1]][1].x,pCorpsPieds1[fCorpsPieds1[i][2][1]][1].y,pCorpsPieds1[fCorpsPieds1[i][2][1]][1].z);
        glTexCoord2f(1,(float)(i)/n);
        glVertex3f(pCorpsPieds1[fCorpsPieds1[i][3][1]][1].x,pCorpsPieds1[fCorpsPieds1[i][3][1]][1].y,pCorpsPieds1[fCorpsPieds1[i][3][1]][1].z);
        glEnd();
    }
    glPopMatrix();
    glDisable(GL_TEXTURE_2D);
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-3.2,-2,0);
    glRotatef(-90,0,1,0);

    glutSolidCone(0.3,1,20,15);

    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,0,-0.5);

    glColor3f(1,1,1);
    glTranslatef(-3.2,-2,0);
    glRotatef(-90,0,1,0);

    glutSolidCone(0.3,1,20,15);

    glPopMatrix();

    glPushMatrix();

    glColor3f(1,1,1);

    glTranslatef(0,0,0.5);
    glTranslatef(-3.2,-2,0);
    glRotatef(-90,0,1,0);

    glutSolidCone(0.3,1,20,15);

    glPopMatrix();
    glEnable(GL_TEXTURE_2D);
    glPopMatrix();



}
void afficherCorpsPieds2()
{

    glPushMatrix();
    glTranslatef(-7.5,1,16);
    glRotatef(-30,0,1,0);
    glTranslatef(-20.0,-10.0,-7.5);
    glScalef(0.8,0.8,0.8);
    glPushMatrix();
    glRotatef(90,1,0,0);
    glScalef(0.9,0.9,0.9);
    for (int i=0; i<n; i++)
    {

        glBegin(GL_POLYGON);
        glTexCoord2f((float)i/n,1);
        glVertex3f(pCorpsPieds2[fCorpsPieds2[i][0][0]][0].x,pCorpsPieds2[fCorpsPieds2[i][0][0]][0].y,pCorpsPieds2[fCorpsPieds2[i][0][0]][0].z);
        glTexCoord2f((float)(i+1)/n,1);
        glVertex3f(pCorpsPieds2[fCorpsPieds2[i][1][0]][0].x,pCorpsPieds2[fCorpsPieds2[i][1][0]][0].y,pCorpsPieds2[fCorpsPieds2[i][1][0]][0].z);
        glTexCoord2f((float)(i+1)/n,0);
        glVertex3f(pCorpsPieds2[fCorpsPieds2[i][2][0]][0].x,pCorpsPieds2[fCorpsPieds2[i][2][0]][0].y,pCorpsPieds2[fCorpsPieds2[i][2][0]][0].z);
        glTexCoord2f((float)(i)/n,0);
        glVertex3f(pCorpsPieds2[fCorpsPieds2[i][3][0]][0].x,pCorpsPieds2[fCorpsPieds2[i][3][0]][0].y,pCorpsPieds2[fCorpsPieds2[i][3][0]][0].z);
        glEnd();
    }
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,-2,0);

    for(int j = 0; j<NP-1; j++)
    {
        for(int i =0; i<NM; i++)
        {


            glBegin(GL_POLYGON);



            glTexCoord2f(0.0,0.0);
            glVertex3f(pCorpsPieds2Sphere[fCorpsPieds2Sphere[i][j][0]].x,pCorpsPieds2Sphere[fCorpsPieds2Sphere[i][j][0]].y,pCorpsPieds2Sphere[fCorpsPieds2Sphere[i][j][0]].z);
            glTexCoord2f(0.0,1.0);
            glVertex3f(pCorpsPieds2Sphere[fCorpsPieds2Sphere[i][j][1]].x,pCorpsPieds2Sphere[fCorpsPieds2Sphere[i][j][1]].y,pCorpsPieds2Sphere[fCorpsPieds2Sphere[i][j][1]].z);
            glTexCoord2f(1.0,1.0);
            glVertex3f(pCorpsPieds2Sphere[fCorpsPieds2Sphere[i][j][2]].x,pCorpsPieds2Sphere[fCorpsPieds2Sphere[i][j][2]].y,pCorpsPieds2Sphere[fCorpsPieds2Sphere[i][j][2]].z);
            glTexCoord2f(1.0,0.0);
            glVertex3f(pCorpsPieds2Sphere[fCorpsPieds2Sphere[i][j][3]].x,pCorpsPieds2Sphere[fCorpsPieds2Sphere[i][j][3]].y,pCorpsPieds2Sphere[fCorpsPieds2Sphere[i][j][3]].z);

            glEnd();
        }



    }
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-2,-2,0);
    glRotatef(90,0,1,0);
    glScalef(0.9,0.5,0.8);
    for (int i=0; i<n; i++)
    {
        glBegin(GL_POLYGON);
        glTexCoord2f(0,(float)i/n);
        glVertex3f(pCorpsPieds2[fCorpsPieds2[i][0][1]][1].x,pCorpsPieds2[fCorpsPieds2[i][0][1]][1].y,pCorpsPieds2[fCorpsPieds2[i][0][1]][1].z);
        glTexCoord2f(0,(float)(i+1)/n);
        glVertex3f(pCorpsPieds2[fCorpsPieds2[i][1][1]][1].x,pCorpsPieds2[fCorpsPieds2[i][1][1]][1].y,pCorpsPieds2[fCorpsPieds2[i][1][1]][1].z);
        glTexCoord2f(1,(float)(i+1)/n);
        glVertex3f(pCorpsPieds2[fCorpsPieds2[i][2][1]][1].x,pCorpsPieds2[fCorpsPieds2[i][2][1]][1].y,pCorpsPieds2[fCorpsPieds2[i][2][1]][1].z);
        glTexCoord2f(1,(float)(i)/n);
        glVertex3f(pCorpsPieds2[fCorpsPieds2[i][3][1]][1].x,pCorpsPieds2[fCorpsPieds2[i][3][1]][1].y,pCorpsPieds2[fCorpsPieds2[i][3][1]][1].z);
        glEnd();
    }
    glPopMatrix();
    glDisable(GL_TEXTURE_2D);
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-3.2,-2,0);
    glRotatef(-90,0,1,0);

    glutSolidCone(0.3,1,20,15);

    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,0,-0.5);

    glColor3f(1,1,1);
    glTranslatef(-3.2,-2,0);
    glRotatef(-90,0,1,0);

    glutSolidCone(0.3,1,20,15);

    glPopMatrix();

    glPushMatrix();

    glColor3f(1,1,1);

    glTranslatef(0,0,0.5);
    glTranslatef(-3.2,-2,0);
    glRotatef(-90,0,1,0);

    glutSolidCone(0.3,1,20,15);

    glPopMatrix();
    glEnable(GL_TEXTURE_2D);
    glPopMatrix();





}
void afficherCorpsPieds3()
{
    glBindTexture(GL_TEXTURE_2D,texObject[1]);
    glPushMatrix();
    glTranslatef(0.6,1,16);
    glRotatef(-30,0,1,0);
    glTranslatef(-20.0,-10.0,-7.5);
    glScalef(0.8,0.8,0.8);
    glPushMatrix();
    glRotatef(90,1,0,0);
    glScalef(0.9,0.9,0.9);
    for (int i=0; i<n; i++)
    {
        glBegin(GL_POLYGON);
        glTexCoord2f((float)i/n,1);
        glVertex3f(pCorpsPieds3[fCorpsPieds3[i][0][0]][0].x,pCorpsPieds3[fCorpsPieds3[i][0][0]][0].y,pCorpsPieds3[fCorpsPieds3[i][0][0]][0].z);
        glTexCoord2f((float)(i+1)/n,1);
        glVertex3f(pCorpsPieds3[fCorpsPieds3[i][1][0]][0].x,pCorpsPieds3[fCorpsPieds3[i][1][0]][0].y,pCorpsPieds3[fCorpsPieds3[i][1][0]][0].z);
        glTexCoord2f((float)(i+1)/n,0);
        glVertex3f(pCorpsPieds3[fCorpsPieds3[i][2][0]][0].x,pCorpsPieds3[fCorpsPieds3[i][2][0]][0].y,pCorpsPieds3[fCorpsPieds3[i][2][0]][0].z);
        glTexCoord2f((float)(i)/n,0);
        glVertex3f(pCorpsPieds3[fCorpsPieds3[i][3][0]][0].x,pCorpsPieds3[fCorpsPieds3[i][3][0]][0].y,pCorpsPieds3[fCorpsPieds3[i][3][0]][0].z);
        glEnd();
    }
    glPopMatrix();
    glPushMatrix();
    glTranslatef(0,-2,0);

    for(int j = 0; j<NP-1; j++)
    {
        for(int i =0; i<NM; i++)
        {


            glBegin(GL_POLYGON);



            glTexCoord2f(0.0,0.0);
            glVertex3f(pCorpsPieds3Sphere[fCorpsPieds3Sphere[i][j][0]].x,pCorpsPieds3Sphere[fCorpsPieds3Sphere[i][j][0]].y,pCorpsPieds3Sphere[fCorpsPieds3Sphere[i][j][0]].z);
            glTexCoord2f(0.0,1.0);
            glVertex3f(pCorpsPieds3Sphere[fCorpsPieds3Sphere[i][j][1]].x,pCorpsPieds3Sphere[fCorpsPieds3Sphere[i][j][1]].y,pCorpsPieds3Sphere[fCorpsPieds3Sphere[i][j][1]].z);
            glTexCoord2f(1.0,1.0);
            glVertex3f(pCorpsPieds3Sphere[fCorpsPieds3Sphere[i][j][2]].x,pCorpsPieds3Sphere[fCorpsPieds3Sphere[i][j][2]].y,pCorpsPieds3Sphere[fCorpsPieds3Sphere[i][j][2]].z);
            glTexCoord2f(1.0,0.0);
            glVertex3f(pCorpsPieds3Sphere[fCorpsPieds3Sphere[i][j][3]].x,pCorpsPieds3Sphere[fCorpsPieds3Sphere[i][j][3]].y,pCorpsPieds3Sphere[fCorpsPieds3Sphere[i][j][3]].z);

            glEnd();
        }



    }
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-2,-2,0);
    glRotatef(90,0,1,0);
    glScalef(0.9,0.5,0.8);
    for (int i=0; i<n; i++)
    {

        glBegin(GL_POLYGON);
        glTexCoord2f(0,(float)i/n);
        glVertex3f(pCorpsPieds3[fCorpsPieds3[i][0][1]][1].x,pCorpsPieds3[fCorpsPieds3[i][0][1]][1].y,pCorpsPieds3[fCorpsPieds3[i][0][1]][1].z);
        glTexCoord2f(0,(float)(i+1)/n);
        glVertex3f(pCorpsPieds3[fCorpsPieds3[i][1][1]][1].x,pCorpsPieds3[fCorpsPieds3[i][1][1]][1].y,pCorpsPieds3[fCorpsPieds3[i][1][1]][1].z);
        glTexCoord2f(1,(float)(i+1)/n);
        glVertex3f(pCorpsPieds3[fCorpsPieds3[i][2][1]][1].x,pCorpsPieds3[fCorpsPieds3[i][2][1]][1].y,pCorpsPieds3[fCorpsPieds3[i][2][1]][1].z);
        glTexCoord2f(1,(float)(i)/n);
        glVertex3f(pCorpsPieds3[fCorpsPieds3[i][3][1]][1].x,pCorpsPieds3[fCorpsPieds3[i][3][1]][1].y,pCorpsPieds3[fCorpsPieds3[i][3][1]][1].z);
        glEnd();
    }
    glPopMatrix();
    glDisable(GL_TEXTURE_2D);
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(-3.2,-2,0);
    glRotatef(-90,0,1,0);

    glutSolidCone(0.3,1,20,15);

    glPopMatrix();

    glPushMatrix();
    glTranslatef(0,0,-0.5);

    glColor3f(1,1,1);
    glTranslatef(-3.2,-2,0);
    glRotatef(-90,0,1,0);

    glutSolidCone(0.3,1,20,15);

    glPopMatrix();

    glPushMatrix();

    glColor3f(1,1,1);

    glTranslatef(0,0,0.5);
    glTranslatef(-3.2,-2,0);
    glRotatef(-90,0,1,0);

    glutSolidCone(0.3,1,20,15);

    glPopMatrix();
    glEnable(GL_TEXTURE_2D);
    glPopMatrix();




}

