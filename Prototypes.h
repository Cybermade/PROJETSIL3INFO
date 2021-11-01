#ifndef PROTOTYPES_H
#define PROTOTYPES_H


#ifdef __APPLE__
#include <GLUT/glut.h> /* Pour Mac OS X */
#else
#include <GL/freeglut.h> /* Pour les autres systemes */
#endif
#include <cstdlib>
#include <cstdio>
#include <jpeglib.h>
#include <jerror.h>
#include <cmath>
#include <iostream>
class Point
{
public :
    //coordonnées x, y et z du point
    double x;
    double y;
    double z;
    // couleur r, v et b du point
    float r;
    float g;
    float b;
};
//LES VARIABLES EN EXTERN C'est que pour les autres .cpp puissent utiliser ces variables qui sont initialisés dans le main
extern GLuint texObject[3];
extern const int r;
extern const double animationSpeed;
extern double rotationAnimationBouche;
extern const double rotationMaxBouche;
extern double rotationAnimationBoucheDown;
extern bool pingBouche;
extern bool pongBouche;
extern bool pingBoucheDown;
extern bool pongBoucheDown;
extern const double h;
//Nombre de cylindres pour les parties du corps
const int C = 5;
const int C2 = 8;
const int C3 = 15;
const int C4 = 3;
const int C5 = 2;

//Nombre de point par face pour les cylindres
const int n = 6;

//NM et NP pour la sphére
const int NM = 18;
const int NP = 12;

extern Point pCorpsMid[(n+1)*2][C3];
extern unsigned int fCorpsMid[n][4][C3];

extern Point pCorpsBack[(n+1)*2][C];
extern unsigned int fCorpsBack[n][4][C];

extern Point pCorpsQueue[(n+1)*2][C2];
extern unsigned int fCorpsQueue[n][4][C2];

extern Point pCorpsTop[(n+1)*2][C4];
extern unsigned int fCorpsTop[n][4][C4];

extern Point pCorpsTopHead[NM*NP];
extern unsigned char fCorpsTopHead[NM][NP][4];

extern Point pCorpsPiedsSphere[NM*NP];
extern unsigned char fCorpsPiedsSphere[NM][NP][4];

extern Point pCorpsPieds[(n+1)*2][C5];
extern unsigned int fCorpsPieds[n][4][C5];


extern Point pCorpsPieds1Sphere[NM*NP];
extern unsigned char fCorpsPieds1Sphere[NM][NP][4];

extern Point pCorpsPieds1[(n+1)*2][C5];
extern unsigned int fCorpsPieds1[n][4][C5];

extern Point pCorpsPieds2Sphere[NM*NP];
extern unsigned char fCorpsPieds2Sphere[NM][NP][4];

extern Point pCorpsPieds2[(n+1)*2][C5];
extern unsigned int fCorpsPieds2[n][4][C5];

extern Point pCorpsPieds3Sphere[NM*NP];
extern unsigned char fCorpsPieds3Sphere[NM][NP][4];

extern Point pCorpsPieds3[(n+1)*2][C5];
extern unsigned int fCorpsPieds3[n][4][C5];

extern Point pCube[8];
extern int fCube[6][4];

/* Prototype des fonctions */
//Animation auto
void animeAuto();
//Animation Non auto
void anime();
void affichage();
//Initialisation des differentes parties du corps
void corpsBack();
void corpsPieds();
void corpsQueue();
void corpsTop();
void corpsPieds1();
void corpsPieds2();
void corpsPieds3();
//Affichage des differentes parties du corps
void afficherPiques();
void afficherCorpsPieds1();
void afficherCorpsPieds2();
void afficherCorpsPieds3();
void afficherCorpsPieds();
void afficherCorpsTop();
void afficherCorpsTopHead();
void afficherCorpsBack();
void afficherCorpsQueue();
void afficherCorpsMid();

void loadJpegImage(char*,int,int,unsigned char[]);
//Pour charger les textures dans des tableaux de 3 Dimensions(RGBA MODE)
void initTextures();
void clavier(unsigned char touche,int x,int y);
void keyPress(int touche,int x,int y);
void keyRelease(int touche,int x,int y);
void reshape(int x,int y);
void idle();
void mouse(int bouton,int etat,int x,int y);
void mousemotion(int x,int y);
void corpsMid();

#endif // PROTOTYPES_H
