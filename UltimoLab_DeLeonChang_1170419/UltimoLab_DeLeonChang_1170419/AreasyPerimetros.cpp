#include "AreasyPerimetros.h"

double AreasyPerimetros::Area(double Lados, double Apotema)
{
	double area;
	area = (Lados * Apotema) / 2;

		return area;
}

double AreasyPerimetros::Perimetro(double Lados, double cantidad)
{
	double area;
	area = Lados * cantidad;

	return area;
}