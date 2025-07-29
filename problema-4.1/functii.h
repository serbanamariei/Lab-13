#ifndef FUNCTII_H_
#define FUNCTII_H_

void citire(FILE *f, int v[], int n);
void citireR(FILE *f, double v[], int n);
void afisareI(int v[], int n);
void afisareR(double v[], int n);
void sumaI(int s[], int a[], int b[], int n);
void sumaR(double s[], double a[], double b[], int n);
void valoare(double val[], int v[], double pret[], int n);
void valoareTotala(double valT[], double val[], double procent, int n);
double sumaVector(double v[], int n);

#endif
