//---------------------------------------------------------------------------

#ifndef GraficadoraH
#define GraficadoraH
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Graphics.hpp>
//---------------------------------------------------------------------------

class Graficadora{
	private:
		int cx, cy;
		int uPuntos;
		int dx;
		TImage *pantalla;
		void dibujarEje();
		double fx(double x);
	public:
		void crear(TImage *);
		void dibujarPunto(double x, double y, int color);
};
#endif
