#include "Prototypes.h"
//LES TEXTURES ONT été appliquées en enroulé sur les pieds et par face sur le corps et une petite partie de la tête
//Les piques/dents/langue/ongles et bout de la queue ont été fait avec des objects glut à part ça tout a été fait à partir de la représentation mathématique
//rayon et hauteur des cylindres
const int r = 1;
const double h = 3;

//Objects pour les textures
GLuint texObject[3];


//ZOOM Z et S
double zoom = 0;
const double zoom_speed = 0.1;
const double maxzoom = 0.5;
const double minzoom = -0.5;

//Bool pour savoir dans quel mode on est (zoom)
bool upMode = true;
bool leftMode = true;
bool rightMode = true;
bool downMode = true;

bool zoomMode = true;






//Camera position au début
Point posCameraAtStart= {-15.0,0.0,50.0};
//Camera position
Point posCameraCurrent = posCameraAtStart;

//Camera Look at
const Point posCameraLookAt = {-15,0,0};

//Vecteur Camera pour avoir l'équation de la droite dans l'espace qui relie les 2 points(cameraposition et lookat) ce qui permettra le zoom
Point posCameraVector = {posCameraAtStart.x - posCameraLookAt.x,posCameraAtStart.y - posCameraLookAt.y,posCameraAtStart.z - posCameraLookAt.z};
//ROTATION
int rotation_left =0 ;
int rotation_right = 0;
int rotation_up = 0;
int rotation_down = 0;

//vitesse de la rotation de la camera
const double rotationSpeed = 1;
//variable pour gérer l'Animation auto
double rotationAnimationAuto = 0;

//Variable pour gérer l'animation manuel de la partie haute de la bouche
double rotationAnimationBouche = 0;
//Variable pour gérer l'animation manuel de la partie basse de la bouche
double rotationAnimationBoucheDown = 0;

//Vitesse des animations
const double animationSpeedAuto = 1.5;
const double animationSpeed = 2;

//Degré de rotation maximal pour les animations
const double rotationMax = 30;
const double rotationMaxBouche = 15;


//Systeme simple de ping pong pour les animations auto et non auto
//Qui permet d'envoyer un signal une fois que la variable de rotation a atteint son max
//De changer de mode (donc si au début on faisait des rotations positives maintenant on va les faire dans le sens négative)
bool ping = true;
bool pong = false;

bool pingBouche = true;
bool pongBouche = false;

bool pingBoucheDown = true;
bool pongBoucheDown = false;


//Pour les yeux
Point pCube[8]=
{
    {-0.5,-0.5, 0.5,1.0,0.0,0.0},
    { 0.5, -0.5, 0.5,0.0,1.0,0.0},
    { 0.5, -0.5, -0.5,0.0,0.0,1.0},
    { -0.5, -0.5, -0.5,1.0,1.0,1.0},
    { -0.5,0.5, 0.5,1.0,0.0,0.0},
    { 0.5, 0.5, 0.5,0.0,1.0,0.0},
    { 0.5, 0.5, -0.5,0.0,0.0,1.0},
    { -0.5, 0.5, -0.5,1.0,1.0,1.0}

};

int fCube[6][4]=
{
    {0,1,2,3},
    {0,1,5,4},
    {1,2,6,5},
    {2,3,7,6},
    {0,4,7,3},
    {4,5,6,7}
};

//Déclaration de multiples cylindres et spheres pour tout le corps

Point pCorpsQueue[(n+1)*2][C2];
unsigned int fCorpsQueue[n][4][C2];

Point pCorpsBack[(n+1)*2][C];
unsigned int fCorpsBack[n][4][C];

Point pCorpsMid[(n+1)*2][C3];
unsigned int fCorpsMid[n][4][C3];

Point pCorpsTop[(n+1)*2][C4];
unsigned int fCorpsTop[n][4][C4];

Point pCorpsTopHead[NM*NP];
unsigned char fCorpsTopHead[NM][NP][4];

Point pCorpsPiedsSphere[NM*NP];
unsigned char fCorpsPiedsSphere[NM][NP][4];

Point pCorpsPieds[(n+1)*2][C5];
unsigned int fCorpsPieds[n][4][C5];


Point pCorpsPieds1Sphere[NM*NP];
unsigned char fCorpsPieds1Sphere[NM][NP][4];

Point pCorpsPieds1[(n+1)*2][C5];
unsigned int fCorpsPieds1[n][4][C5];

Point pCorpsPieds2Sphere[NM*NP];
unsigned char fCorpsPieds2Sphere[NM][NP][4];

Point pCorpsPieds2[(n+1)*2][C5];
unsigned int fCorpsPieds2[n][4][C5];

Point pCorpsPieds3Sphere[NM*NP];
unsigned char fCorpsPieds3Sphere[NM][NP][4];

Point pCorpsPieds3[(n+1)*2][C5];
unsigned int fCorpsPieds3[n][4][C5];


//hauteur et largeur ainsi que l'image et la texture en RGBA
const unsigned int iwidth = 256;
const unsigned int iheight = 256;
unsigned char image[iwidth*iheight*3];
unsigned char texture[iheight][iwidth][4];

const unsigned int iwidth2 = 256;
const unsigned int iheight2 = 256;
unsigned char image2[iwidth2*iheight2*3];
unsigned char texture2[iheight2][iwidth2][4];

const unsigned int iwidth3 = 500;
const unsigned int iheight3 = 350;
unsigned char image3[iwidth3*iheight3*3];
unsigned char texture3[iheight3][iwidth3][4];

char presse;
int anglex,angley,x,y,xold,yold;





int main(int argc,char **argv)
{
    //Initialisation des differentes parties du corps
    corpsBack();
    corpsQueue();
    corpsMid();
    corpsTop();
    corpsPieds();
    corpsPieds1();
    corpsPieds2();
    corpsPieds3();
    /* Chargement de la texture */
    loadJpegImage("./Dragontext.jpg",iheight,iwidth,image);
    loadJpegImage("./calimero.jpg",iheight2,iwidth2,image2);
    loadJpegImage("./drake.jpg",iheight3,iwidth3,image3);
    initTextures();
    /* initialisation de glut et creation
    de la fenetre */
    glutInit(&argc,argv);

    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutInitWindowPosition(200,200);
    glutInitWindowSize(500,500);
    glutCreateWindow("Projet");

    /* Initialisation d'OpenGL */
    glClearColor(0.0,0.0,0.0,0);
    glColor3f(1.0,1.0,1.0);
    glPointSize(2.0);

//light
    GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
    GLfloat mat_shininess[] = { 50.0 };
    GLfloat light_position[] = { 1.0, 1.0, 1.0, 0.0 };
    glClearColor (0.0, 0.0, 0.0, 1.0);
    glShadeModel (GL_SMOOTH);

    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);

    glMaterialf( GL_FRONT_AND_BACK, GL_AMBIENT, 1);
    glMaterialf( GL_FRONT_AND_BACK, GL_DIFFUSE, 0.8);
    glMaterialf( GL_FRONT_AND_BACK, GL_EMISSION, 0.0);

    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
//end light

    glEnable(GL_DEPTH_TEST);
    glEnable(GL_COLOR_MATERIAL);
    glEnable( GL_NORMALIZE );

    /* Mise en place de la projection perspective */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45,1.5,3.0,-100.0);
    //glOrtho(-45,45,-30,30,-200,200);



    glMatrixMode(GL_MODELVIEW);


    /* Parametrage du placage de textures */

    // LierTexture 1
    glEnable(GL_TEXTURE_2D);
    glGenTextures(3, texObject);

    glBindTexture(GL_TEXTURE_2D, texObject[0]);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, iwidth, iheight, 0, GL_RGBA,
                 GL_UNSIGNED_BYTE, texture);
    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER,GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_NEAREST);
    glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_REPLACE);


// Lier Texture 2

    glBindTexture(GL_TEXTURE_2D, texObject[1]);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, iwidth2, iheight2, 0, GL_RGBA,
                 GL_UNSIGNED_BYTE, texture2);
    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER,GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_NEAREST);
    glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_REPLACE);

// Lier Texture 3

    glBindTexture(GL_TEXTURE_2D, texObject[2]);
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, iwidth3, iheight3, 0, GL_RGBA,
                 GL_UNSIGNED_BYTE, texture3);
    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MAG_FILTER,GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D,GL_TEXTURE_MIN_FILTER,GL_NEAREST);
    glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_REPLACE);



    /* enregistrement des fonctions de rappel */
    glutDisplayFunc(affichage);
    glutKeyboardFunc(clavier);
    glutReshapeFunc(reshape);
    glutMouseFunc(mouse);
    glutMotionFunc(mousemotion);
    glutIdleFunc(animeAuto);
    glutSpecialFunc(keyPress);


    /* Entree dans la boucle principale glut */
    glutMainLoop();
    return 0;
}



void animeAuto()
{
    if(ping)
    {
        rotationAnimationAuto+= animationSpeedAuto;
        if(rotationAnimationAuto>=rotationMax)
        {
            ping = false;
            pong = true;
        }
    }
    else if(pong)
    {
        rotationAnimationAuto-= animationSpeedAuto;
        if(rotationAnimationAuto<=-rotationMax)
        {
            ping = true;
            pong = false;
        }
    }

    glutPostRedisplay();






}
void anime()
{


    if(pingBouche)
    {
        rotationAnimationBouche+= animationSpeed;
        if(rotationAnimationBouche>=rotationMaxBouche*2)
        {
            pingBouche = false;
            pongBouche = true;
        }
    }
    else if(pongBouche)
    {
        rotationAnimationBouche-= animationSpeed;
        if(rotationAnimationBouche<=-(rotationMaxBouche*0.5))
        {
            pingBouche = true;
            pongBouche = false;
        }
    }

    if(pingBoucheDown)
    {
        rotationAnimationBoucheDown+= animationSpeed;
        if(rotationAnimationBoucheDown>=(rotationMaxBouche*0.2))
        {
            pingBoucheDown = false;
            pongBoucheDown = true;
        }
    }
    else if(pongBoucheDown)
    {
        rotationAnimationBoucheDown-= animationSpeed;
        if(rotationAnimationBoucheDown<=-(rotationMaxBouche*2))
        {
            pingBoucheDown = true;
            pongBoucheDown = false;
        }
    }

    glutPostRedisplay();




}
void affichage()
{

    /* effacement de l'image avec la couleur de fond */
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glShadeModel(GL_SMOOTH);

    glLoadIdentity();



    //Initialisation de la camera
    gluLookAt(posCameraCurrent.x,posCameraCurrent.y,posCameraCurrent.z,posCameraLookAt.x,posCameraLookAt.y,posCameraLookAt.z,0,1,0);
    glRotatef(angley,1.0,0.0,0.0);
    glRotatef(anglex,0.0,1.0,0.0);





    glPushMatrix();

    afficherCorpsBack();
    afficherCorpsTopHead();

    glPushMatrix();

    glTranslatef(-13.2,-8.5,-0.8);
    glRotatef(rotationAnimationAuto,0,0,1);
    glTranslatef(13.2,8.5,0.8);
    afficherCorpsPieds3();

    glPopMatrix();

    glPushMatrix();

    glTranslatef(-13.2,-8.5,0.2);
    glRotatef(-rotationAnimationAuto,0,0,1);
    glTranslatef(13.2,8.5,-0.2);
    afficherCorpsPieds();

    glPopMatrix();

    glPushMatrix();

    glTranslatef(-21.3,-8.5,-0.2);
    glRotatef(rotationAnimationAuto,0,0,1);
    glTranslatef(21.3,8.5,0.2);
    afficherCorpsPieds2();

    glPopMatrix();

    glPushMatrix();

    glTranslatef(-21.3,-8.5,0.2);
    glRotatef(-rotationAnimationAuto,0,0,1);
    glTranslatef(21.3,8.5,-0.2);
    afficherCorpsPieds1();

    glPopMatrix();




    afficherCorpsTop();
    afficherCorpsQueue();

    afficherCorpsMid();
    afficherPiques();
    glPopMatrix();



    glFlush();

    //On echange les buffers
    glutSwapBuffers();
}

void clavier(unsigned char touche,int x,int y)
{
    switch (touche)
    {
    case 'p': /* affichage du carre plein */
        glPolygonMode(GL_FRONT_AND_BACK,GL_FILL);
        glutPostRedisplay();
        break;
    case 'f': /* affichage en mode fil de fer */
        glPolygonMode(GL_FRONT_AND_BACK,GL_LINE);
        glutPostRedisplay();
        break;
    case 's' : /* Affichage en mode sommets seuls */
        glPolygonMode(GL_FRONT_AND_BACK,GL_POINT);
        glutPostRedisplay();
        break;
    case 'd':
        glEnable(GL_DEPTH_TEST);
        glutPostRedisplay();
        break;
    case 'D':
        glDisable(GL_DEPTH_TEST);
        glutPostRedisplay();
        break;
    case 'a':
        glPolygonMode(GL_FRONT,GL_FILL);
        glPolygonMode(GL_FRONT,GL_LINE);
        glutPostRedisplay();
        break;
    //Animation non auto
    case 'x':

        anime();


        break;

    //Pour les zoom j'ai utilisé simplement l'équation de la droite dans l'espace
    //Qu'on peut avoir avec un vecteur et un point et j'avance ou je recule la camera sur cette droite

    case 'Z':
        zoom -= zoom_speed;

        if(zoomMode)
        {
            posCameraAtStart = posCameraCurrent;
            zoomMode = false;
            leftMode = true;
            rightMode = true;
            upMode = true;
            downMode = true;
            posCameraVector = {posCameraAtStart.x - posCameraLookAt.x,posCameraAtStart.y - posCameraLookAt.y,posCameraAtStart.z - posCameraLookAt.z};
        }
        posCameraCurrent.x = posCameraAtStart.x + zoom * posCameraVector.x;
        posCameraCurrent.y = posCameraAtStart.y + zoom * posCameraVector.y;
        posCameraCurrent.z = posCameraAtStart.z + zoom * posCameraVector.z;





        glutPostRedisplay();
        break;
    case 'z':
        zoom += zoom_speed;
        if(zoomMode)
        {
            posCameraAtStart = posCameraCurrent;
            zoomMode = false;
            leftMode = true;
            rightMode = true;
            upMode = true;
            downMode = true;
            posCameraVector = {posCameraAtStart.x - posCameraLookAt.x,posCameraAtStart.y - posCameraLookAt.y,posCameraAtStart.z - posCameraLookAt.z};
        }
        posCameraCurrent.x = posCameraAtStart.x + zoom * posCameraVector.x;
        posCameraCurrent.y = posCameraAtStart.y + zoom * posCameraVector.y;
        posCameraCurrent.z = posCameraAtStart.z + zoom * posCameraVector.z;



        glutPostRedisplay();
        break;

    case 37 : /*la touche 'q' permet de quitter le programme */
        exit(0);
    }
}
void keyPress(int touche,int x,int y)
{
    //Pour les buttons de rotations le concept est assez simple
    //Je rotate la position de la caméra(au début du mode) par rapport au point lookat
    //Pour celà dés qu'on change de mode (les 4 modes ici sont les modes rotation up,down,right,left)
    //on sauvegarde une seule fois la position de la caméra au début et on rotate ce dernier par une valeur qui augmente tant que la touche est pressé

    //Pour avoir celà j'ai dû utiliser ces équations:
    //x'=(x−p)cos(θ)−(y−q)sin(θ)+p,
    //y'=(x−p)sin(θ)+(y−q)cos(θ)+q.
    //Qui font une translation puis une rotation(du point) puis un translation dans l'ordre inverse


    switch(touche)
    {
    case GLUT_KEY_DOWN:
        if(downMode)
        {
            posCameraAtStart = posCameraCurrent;
            leftMode = true;
            rightMode = true;
            upMode = true;
            downMode = false;
            zoomMode = true;
            rotation_up = 0;
            rotation_down = 0;
            zoom = 0;
        }
        rotation_down -= rotationSpeed;
        rotation_down = rotation_down % 360;

        posCameraCurrent.y = (posCameraAtStart.y -posCameraLookAt.y)*cos((rotation_down*M_PI)/180)-(posCameraAtStart.z -posCameraLookAt.z)*sin((rotation_down*M_PI)/180)+posCameraLookAt.y;
        posCameraCurrent.z = (posCameraAtStart.y -posCameraLookAt.y)*sin((rotation_down*M_PI)/180)+(posCameraAtStart.z -posCameraLookAt.z)*cos((rotation_down*M_PI)/180)+posCameraLookAt.z;
        glutPostRedisplay();
        break;

    case GLUT_KEY_UP:
        if(upMode)
        {
            posCameraAtStart = posCameraCurrent;
            leftMode = true;
            rightMode = true;
            upMode = false;
            downMode = true;
            zoomMode = true;
            rotation_up = 0;
            rotation_down = 0;
            zoom = 0;
        }
        rotation_up += rotationSpeed;
        rotation_up = rotation_up % 360;

        posCameraCurrent.y = (posCameraAtStart.y -posCameraLookAt.y)*cos((rotation_up*M_PI)/180)-(posCameraAtStart.z -posCameraLookAt.z)*sin((rotation_up*M_PI)/180)+posCameraLookAt.y;
        posCameraCurrent.z = (posCameraAtStart.y -posCameraLookAt.y)*sin((rotation_up*M_PI)/180)+(posCameraAtStart.z -posCameraLookAt.z)*cos((rotation_up*M_PI)/180)+posCameraLookAt.z;

        glutPostRedisplay();


        break;
    case GLUT_KEY_LEFT:
        if(leftMode)
        {
            posCameraAtStart = posCameraCurrent;
            leftMode = false;
            upMode = true;
            downMode = true;
            rightMode = true;
            zoomMode = true;
            rotation_left = 0;
            rotation_right = 0;
            zoom = 0;
        }
        rotation_left -= rotationSpeed;
        rotation_left = rotation_left % 360;

        posCameraCurrent.x = (posCameraAtStart.x -posCameraLookAt.x)*cos((rotation_left*M_PI)/180)-(posCameraAtStart.z -posCameraLookAt.z)*sin((rotation_left*M_PI)/180)+posCameraLookAt.x;
        posCameraCurrent.z = (posCameraAtStart.x -posCameraLookAt.x)*sin((rotation_left*M_PI)/180)+(posCameraAtStart.z -posCameraLookAt.z)*cos((rotation_left*M_PI)/180)+posCameraLookAt.z;

        glutPostRedisplay();


        break;

    case GLUT_KEY_RIGHT:
        if(rightMode)
        {
            posCameraAtStart = posCameraCurrent;
            leftMode = true;
            upMode = true;
            downMode = true;
            rightMode = false;
            zoomMode = true;
            rotation_left = 0;
            rotation_right = 0;
            zoom = 0;
        }
        rotation_right += rotationSpeed;
        rotation_right = rotation_right % 360;

        posCameraCurrent.x = (posCameraAtStart.x -posCameraLookAt.x)*cos((rotation_right*M_PI)/180)-(posCameraAtStart.z -posCameraLookAt.z)*sin((rotation_right*M_PI)/180)+posCameraLookAt.x;
        posCameraCurrent.z = (posCameraAtStart.x -posCameraLookAt.x)*sin((rotation_right*M_PI)/180)+(posCameraAtStart.z -posCameraLookAt.z)*cos((rotation_right*M_PI)/180)+posCameraLookAt.z;
        glutPostRedisplay();


        break;

    }

}

void reshape(int x,int y)
{
    if (x<y)
        glViewport(0,(y-x)/2,x,x);
    else
        glViewport((x-y)/2,0,y,y);
}

void mouse(int button, int state,int x,int y)
{
    /* si on appuie sur le bouton gauche */
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        presse = 1; /* le booleen presse passe a 1 (vrai) */
        xold = x; /* on sauvegarde la position de la souris */
        yold=y;
    }
    /* si on relache le bouton gauche */
    if (button == GLUT_LEFT_BUTTON && state == GLUT_UP)
        presse=0; /* le booleen presse passe a 0 (faux) */
}

void mousemotion(int x,int y)
{
    if (presse) /* si le bouton gauche est presse */
    {
        /* on modifie les angles de rotation de l'objet
        en fonction de la position actuelle de la souris et de la derniere
         position sauvegardee */
        anglex=anglex+(x-xold);
        angley=angley+(y-yold);
        glutPostRedisplay(); /* on demande un rafraichissement de l'affichage */
    }

    xold=x; /* sauvegarde des valeurs courante de le position de la souris */
    yold=y;
}
void loadJpegImage(char *fichier, int iheight, int iwidth,unsigned char image[] )
{
    struct jpeg_decompress_struct cinfo;
    struct jpeg_error_mgr jerr;
    FILE *file;
    unsigned char *ligne;

    cinfo.err = jpeg_std_error(&jerr);
    jpeg_create_decompress(&cinfo);
#ifdef __WIN32
    if (fopen_s(&file,fichier,"rb") != 0)
    {
        fprintf(stderr,"Erreur : impossible d'ouvrir le fichier texture.jpg\n");
        exit(1);
    }
#elif __GNUC__
    if ((file = fopen(fichier,"rb")) == 0)
    {
        fprintf(stderr,"Erreur : impossible d'ouvrir le fichier texture.jpg\n");
        exit(1);
        unsigned char texture[iheight][iwidth][3];
    }
#endif
    jpeg_stdio_src(&cinfo, file);
    jpeg_read_header(&cinfo, TRUE);

    if ((cinfo.image_width!=iwidth)||(cinfo.image_height!=iheight))
    {
        fprintf(stdout,"Erreur : l'image n'est pas de taille %dx%d\n",iheight,iwidth);
        exit(1);
    }
    if (cinfo.jpeg_color_space==JCS_GRAYSCALE)
    {
        fprintf(stdout,"Erreur : l'image doit etre de type RGB\n");
        exit(1);
    }

    jpeg_start_decompress(&cinfo);
    ligne=image;
    while (cinfo.output_scanline<cinfo.output_height)
    {
        ligne=image+3*iwidth*cinfo.output_scanline;
        jpeg_read_scanlines(&cinfo,&ligne,1);
    }
    jpeg_finish_decompress(&cinfo);
    jpeg_destroy_decompress(&cinfo);


}
void initTextures()
{
    for(int i =0; i<iheight; i++)
    {
        for(int j =0; j<iwidth; j++)
        {
            texture[i][j][0]= image[i*iwidth*3+j*3];
            texture[i][j][1]= image[i*iwidth*3+j*3+1];
            texture[i][j][2]= image[i*iwidth*3+j*3+2];
            texture[i][j][3]= 255;

        }
    }

    for(int i =0; i<iheight2; i++)
    {
        for(int j =0; j<iwidth2; j++)
        {
            texture2[i][j][0]= image2[i*iwidth2*3+j*3];
            texture2[i][j][1]= image2[i*iwidth2*3+j*3+1];
            texture2[i][j][2]= image2[i*iwidth2*3+j*3+2];
            texture2[i][j][3]= 255;

        }
    }
    for(int i =0; i<iheight3; i++)
    {
        for(int j =0; j<iwidth3; j++)
        {
            texture3[i][j][0]= image3[i*iwidth3*3+j*3];
            texture3[i][j][1]= image3[i*iwidth3*3+j*3+1];
            texture3[i][j][2]= image3[i*iwidth3*3+j*3+2];
            texture3[i][j][3]= 255;

        }
    }
}
