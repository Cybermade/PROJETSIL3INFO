#include "Prototypes.h"
//11 piques en tout (glutSolidCone)

void afficherPiques()
{
    glDisable(GL_TEXTURE_2D);
    glPushMatrix();
    glColor3f(1,1,1);
    glTranslatef(0,1.2,0);
    glRotatef(-40,0,0,1);
    glRotatef(-90,1,0,0);

    glutSolidCone(0.7,1.5,20,15);

    glPopMatrix();

    glPushMatrix();
    glTranslatef(-3,2.35,0);

    glRotatef(-90,1,0,0);

    glutSolidCone(0.7,1.5,20,15);

    glPopMatrix();

    glPushMatrix();
    glTranslatef(3.5,-0.6,0);

    glRotatef(-90,1,0,0);

    glutSolidCone(0.7,1.5,20,15);

    glPopMatrix();

    glPushMatrix();
    glTranslatef(-6.2,1.2,0);
    glRotatef(40,0,0,1);
    glRotatef(-90,1,0,0);

    glutSolidCone(0.7,1.5,20,15);

    glPopMatrix();

    glPushMatrix();
    glTranslatef(-8.5,-1.4,0);
    glRotatef(57,0,0,1);
    glRotatef(-90,1,0,0);

    glutSolidCone(0.7,1.5,20,15);

    glPopMatrix();

    glPushMatrix();
    glTranslatef(-11,-4.8,0);
    glRotatef(45,0,0,1);
    glRotatef(-90,1,0,0);

    glutSolidCone(0.7,1.5,20,15);

    glPopMatrix();

    glPushMatrix();
    glTranslatef(-15,-7,0);
    glRotatef(15,0,0,1);
    glRotatef(-90,1,0,0);

    glutSolidCone(0.7,1.5,20,15);

    glPopMatrix();

    glPushMatrix();
    glTranslatef(-20,-6.7,0);
    glRotatef(-20,0,0,1);
    glRotatef(-90,1,0,0);

    glutSolidCone(0.7,1.5,20,15);

    glPopMatrix();

    glPushMatrix();
    glTranslatef(-24,-3.7,0);
    glRotatef(-50,0,0,1);
    glRotatef(-90,1,0,0);

    glutSolidCone(0.7,1.5,20,15);

    glPopMatrix();

    glPushMatrix();
    glTranslatef(-26,-0.7,0);
    glRotatef(-50,0,0,1);
    glRotatef(-90,1,0,0);

    glutSolidCone(0.7,1.5,20,15);

    glPopMatrix();

    glPushMatrix();
    glTranslatef(-28.5,1.7,0);
    glRotatef(-25,0,0,1);
    glRotatef(-90,1,0,0);

    glutSolidCone(0.7,1.5,20,15);

    glPopMatrix();
    glEnable(GL_TEXTURE_2D);
}
