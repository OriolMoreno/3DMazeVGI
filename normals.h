//******** PRACTICA VISUALITZACI� GR�FICA INTERACTIVA (Entorn Basic)
//******** Marc Vivet, Carme Juli�, D�bora Gil, Enric Mart�  (Octubre 2019)
// normals.h : interface de normals.cpp
//             Declaracions de les funcions de c�lcul de 
//			   vectors normals per la visualitzaci� dels fractals 


#ifndef NORMALS
#define NORMALS

// -------------- Entorn VGI: Refer�ncia a les quadr�cules zz i normals, definides
//                            a fractals.cpp.
extern float zz[513][513];
extern float normalsC[513][513][3];
extern float normalsV[513][513][3];

// normal: C�lcul del producte vectorial normalitzat de dos vectors v1,v2.
//         Resultat a la variable n.
void normal(float v1[3], float v2[3], float n[3]);


#endif
