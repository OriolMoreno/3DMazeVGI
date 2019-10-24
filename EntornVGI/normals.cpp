//******** PRACTICA VISUALITZACI� GR�FICA INTERACTIVA (Entorn pr�ctiques)
//******** marc Vivet, Carme Juli�, D�bora Gil, Enric Mart�  (Octubre 2019)
// normals.cpp : Funcions de c�lcul de vectors normals per
//               visualitzaci� de fractals 

#include "StdAfx.h"

#include <math.h>

#include "normals.h"

// -------------- Entorn VGI: CALCUL DE LES NORMALS A UNA TRIANGULACIO  D'UNA QUADR�CULA zz ---------------

// normal: C�lcul del producte vectorial normalitzat de dos vectors v1,v2.
//         Resultat a la variable n.
void normal(GLfloat v1[3], GLfloat v2[3], GLfloat n[3])
{
    
	float longitud;

	n[0] = v1[1] * v2[2] - v2[1] * v1[2];
	n[1] = v1[2] * v2[0] - v2[2] * v1[0];
	n[2] = v1[0] * v2[1] - v1[1] * v2[0];

// Normalitzem el vector
	longitud = sqrt( n[0] * n[0] + n[1] * n[1]+ n[2] * n[2]);
	n[0] = n[0] / longitud;
	n[1] = n[1] / longitud;
	n[2] = n[2] / longitud;
}

