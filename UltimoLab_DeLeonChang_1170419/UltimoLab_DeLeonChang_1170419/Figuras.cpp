#include "Figuras.h"
double Figuras::Area(double base, double apotema, int lados) {
	return (base * apotema * lados) / 2;
}

double Figuras::Perimetro(double base, int lado) {
	return base * lado;
}