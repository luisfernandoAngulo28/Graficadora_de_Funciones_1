//---------------------------------------------------------------------------

#pragma hdrstop

#include "Graficadora.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
void Graficadora::crear(TImage *pantalla){
	this->pantalla = pantalla;
	dibujarEje();
}

void Graficadora::dibujarEje(){
	int lx = pantalla->Width;
	int ly = pantalla->Height;

	this->cx = lx/2;
	this->cy = ly/2;

	pantalla->Canvas->Pen->Width=2;
	pantalla->Canvas->MoveTo(0,ly/2);
	pantalla->Canvas->LineTo(lx,ly/2);
	pantalla->Canvas->MoveTo(lx/2,0);
	pantalla->Canvas->LineTo(lx/2,ly);

}

void   Graficadora::dibujarPunto(double x, double y, int color){
	int xEntero, xReal, vRx, yEntero, yReal, vRy;

	xEntero = int(x*10);
	vRx = cx + (xEntero);

	yEntero = int(y*10);
	vRy = cy - (yEntero);

	pantalla->Canvas->Pixels[vRx][vRy] = color;
}

double Graficadora::fx(double x){
	return x*x;
}
