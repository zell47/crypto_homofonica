/*
 * homofonica.c
 *
 *  Created on: 02/10/2013
 *      Author: jmorales
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 500

void main(){
	int trad[27][3]={ {1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15},{16,17,18},{19,20,21},{22,23,24},{25,26,27},{28,29,30},{31,32,33},{34,35,36},{37,38,39},{40,41,42},{43,44,45},{46,47,48},{49,50,51},{52,53,54},{55,56,57},{58,59,60},{61,62,63},{64,65,66},{67,68,69},{70,71,72},{73,74,75},{76,77,78},{79,80,81} };
	int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0,esp=0;
	int pos=0,valor=0,op=0,pos2=0;
	char string[MAX],string2[MAX]={'\0'},sup[MAX];
	char letra,carac;
	char *z4;
	int z1=0,z2=0,z3=0,z5=0,dim=0,ancho=0;
	printf("Que deseas hacer?");
	printf("\n1.Encriptar");
	printf("\n2.Desencriptar");
	scanf("%d",&op);
	getchar();
	if (op == 1){
		printf("Palabra a encriptar :");
		gets(string);
		dim=strlen(string);
		while (z1!=dim){
			string[z1] = tolower(string[z1]);
			z1++;
		}
		puts(string);
		while (z2!=dim){
			letra = string[z2];
			if (letra == 'a'){
				pos = 'a'-'a';
				if (a == 0){
					valor = 0;
					valor = trad[pos][a];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				else if (a == 1){
					valor = 0;
					valor = trad[pos][a];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				else if (a == 2){
					valor = 0;
					valor = trad[pos][a];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (a == 2){
					a=0;
				} else {
					a++;
				}
			}
			else if (letra == 'b'){
				pos = 'b'-'a';
				if (b == 0){
					valor = 0;
					valor = trad[pos][b];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (b == 1){
					valor = 0;
					valor = trad[pos][b];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (b == 2){
					valor = 0;
					valor = trad[pos][b];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (b == 2){
					b=0;
				} else {
					b++;
				}
			}
			else if (letra == 'c') {
				pos = 'c'-'a';
				if (c == 0){
					valor = 0;
					valor = trad[pos][c];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (c == 1){
					valor = 0;
					valor = trad[pos][c];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (c == 2){
					valor = 0;
					valor = trad[pos][c];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (c == 2){
					c=0;
				} else {
					c++;
				}
			}
			else if (letra == 'd') {
				pos = 'd'-'a';
				if (d == 0){
					valor = 0;
					valor = trad[pos][d];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (d == 1){
					valor = 0;
					valor = trad[pos][d];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (d == 2){
					valor = 0;
					valor = trad[pos][d];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (d == 2){
					d=0;
				} else {
					d++;
				}
			}
			else if (letra == 'e'){
				pos = 'e'-'a';
				if (e == 0){
					valor = 0;
					valor = trad[pos][e];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (e == 1){
					valor = 0;
					valor = trad[pos][e];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (e == 2){
					valor = 0;
					valor = trad[pos][e];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (e == 2){
					e=0;
				} else {
					e++;
				}
			}
			else if (letra == 'f'){
				pos = 'f'-'a';
				if (f == 0){
					valor = 0;
					valor = trad[pos][f];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (f == 1){
					valor = 0;
					valor = trad[pos][f];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (f == 2){
					valor = 0;
					valor = trad[pos][f];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (f == 2){
					f=0;
				} else {
					f++;
				}
			}
			else if (letra == 'g'){
				pos = 'g'-'a';
				if (g == 0){
					valor = 0;
					valor = trad[pos][g];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (g == 1){
					valor = 0;
					valor = trad[pos][g];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (g == 2){
					valor = 0;
					valor = trad[pos][g];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (g == 2){
					g=0;
				} else {
					g++;
				}
			}
			else if (letra == 'h'){
				pos = 'h'-'a';
				if (h == 0){
					valor = 0;
					valor = trad[pos][h];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (h == 1){
					valor = 0;
					valor = trad[pos][h];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (h == 2){
					valor = 0;
					valor = trad[pos][h];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (h == 2){
					h=0;
				} else {
					h++;
				}
			}
			else if (letra == 'i'){
				pos = 'i'-'a';
				if (i == 0){
					valor = 0;
					valor = trad[pos][i];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (i == 1){
					valor = 0;
					valor = trad[pos][i];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (i == 2){
					valor = 0;
					valor = trad[pos][i];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (i == 2){
					i=0;
				} else {
					i++;
				}
			}
			else if (letra == 'j'){
				pos = 'j'-'a';
				if (j == 0){
					valor = 0;
					valor = trad[pos][j];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (j == 1){
					valor = 0;
					valor = trad[pos][j];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (j == 2){
					valor = 0;
					valor = trad[pos][j];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (j == 2){
					j=0;
				} else {
					j++;
				}
			}
			else if (letra == 'k'){
				pos = 'k'-'a';
				if (d == 0){
					valor = 0;
					valor = trad[pos][k];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (k == 1){
					valor = 0;
					valor = trad[pos][k];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (k == 2){
					valor = 0;
					valor = trad[pos][k];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (k == 2){
					k=0;
				} else {
					k++;
				}
			}
			else if (letra == 'l'){
				pos = 'l'-'a';
				if (l == 0){
					valor = 0;
					valor = trad[pos][l];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (l == 1){
					valor = 0;
					valor = trad[pos][l];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (l == 2){
					valor = 0;
					valor = trad[pos][l];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (l == 2){
					l=0;
				} else {
					l++;
				}
			}
			else if (letra == 'm'){
				pos = 'm'-'a';
				if (m == 0){
					valor = 0;
					valor = trad[pos][m];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (m == 1){
					valor = 0;
					valor = trad[pos][m];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (m == 2){
					valor = 0;
					valor = trad[pos][m];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (m == 2){
					m=0;
				} else {
					m++;
				}
			}
			else if (letra == 'n'){
				pos = 'n'-'a';
				if (n == 0){
					valor = 0;
					valor = trad[pos][n];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (n == 1){
					valor = 0;
					valor = trad[pos][n];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (n == 2){
					valor = 0;
					valor = trad[pos][n];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (n == 2){
					n=0;
				} else {
					n++;
				}
			}
			else if (letra == 'o'){
				pos = 'o'-'a';
				if (o == 0){
					valor = 0;
					valor = trad[pos][o];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (o == 1){
					valor = 0;
					valor = trad[pos][o];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (o == 2){
					valor = 0;
					valor = trad[pos][o];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (o == 2){
					o=0;
				} else {
					o++;
				}
			}
			else if (letra == 'p'){
				pos = 'p'-'a';
				if (p == 0){
					valor = 0;
					valor = trad[pos][p];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (p == 1){
					valor = 0;
					valor = trad[pos][p];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (p == 2){
					valor = 0;
					valor = trad[pos][p];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (p == 2){
					p=0;
				} else {
					p++;
				}
			}
			else if (letra == 'q'){
				pos = 'q'-'a';
				if (q == 0){
					valor = 0;
					valor = trad[pos][q];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (q == 1){
					valor = 0;
					valor = trad[pos][q];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (q == 2){
					valor = 0;
					valor = trad[pos][q];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (q == 2){
					q=0;
				} else {
					q++;
				}
			}
			else if (letra == 'r'){
				pos = 'r'-'a';
				if (r == 0){
					valor = 0;
					valor = trad[pos][r];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (r == 1){
					valor = 0;
					valor = trad[pos][r];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (r == 2){
					valor = 0;
					valor = trad[pos][r];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (r == 2){
					r=0;
				} else {
					r++;
				}
			}
			else if (letra == 's'){
				pos = 's'-'a';
				if (s == 0){
					valor = 0;
					valor = trad[pos][s];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (s == 1){
					valor = 0;
					valor = trad[pos][s];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (s == 2){
					valor = 0;
					valor = trad[pos][s];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (s == 2){
					s=0;
				} else {
					s++;
				}
			}
			else if (letra == 't'){
				pos = 't'-'a';
				if (t == 0){
					valor = 0;
					valor = trad[pos][t];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (t == 1){
					valor = 0;
					valor = trad[pos][t];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (t == 2){
					valor = 0;
					valor = trad[pos][t];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (t == 2){
					t=0;
				} else {
					t++;
				}
			}
			else if (letra == 'u'){
				pos = 'u'-'a';
				if (u == 0){
					valor = 0;
					valor = trad[pos][u];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (u == 1){
					valor = 0;
					valor = trad[pos][u];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (u == 2){
					valor = 0;
					valor = trad[pos][u];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (u == 2){
					u=0;
				} else {
					u++;
				}
			}
			else if (letra == 'v'){
				pos = 'v'-'a';
				if (v == 0){
					valor = 0;
					valor = trad[pos][v];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (v == 1){
					valor = 0;
					valor = trad[pos][v];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (v == 2){
					valor = 0;
					valor = trad[pos][v];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (v == 2){
					v=0;
				} else {
					v++;
				}
			}
			else if (letra == 'w'){
				pos = 'w'-'a';
				if (w == 0){
					valor = 0;
					valor = trad[pos][w];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (w == 1){
					valor = 0;
					valor = trad[pos][w];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (w == 2){
					valor = 0;
					valor = trad[pos][w];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (w == 2){
					w=0;
				} else {
					w++;
				}
			}
			else if (letra == 'x'){
				pos = 'x'-'a';
				if (x == 0){
					valor = 0;
					valor = trad[pos][x];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (x == 1){
					valor = 0;
					valor = trad[pos][x];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (x == 2){
					valor = 0;
					valor = trad[pos][x];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (x == 2){
					x=0;
				} else {
					x++;
				}
			}
			else if (letra == 'y'){
				pos = 'y'-'a';
				if (y == 0){
					valor = 0;
					valor = trad[pos][y];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (y == 1){
					valor = 0;
					valor = trad[pos][y];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (y == 2){
					valor = 0;
					valor = trad[pos][y];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (y == 2){
					y=0;
				} else {
					y++;
				}
			}
			else if (letra == 'z'){
				pos = 'z'-'a';
				if (z == 0){
					valor = 0;
					valor = trad[pos][z];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (z == 1){
					valor = 0;
					valor = trad[pos][z];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (z == 2){
					valor = 0;
					valor = trad[pos][z];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (z == 2){
					z=0;
				} else {
					z++;
				}
			}
			else if (letra == 32){
				pos = 26;
				if (esp == 0){
					valor = 0;
					valor = trad[pos][esp];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (esp == 1){
					valor = 0;
					valor = trad[pos][esp];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (esp == 2){
					valor = 0;
					valor = trad[pos][esp];
					sprintf(sup, "%d,", valor);
					strcat(string2,sup);
				}
				if (esp == 2){
					esp=0;
				} else {
					esp++;
				}
			}
			z2++;
		}
		ancho=strlen(string2);
		string2[ancho-1]='\0';
		puts(string2);
		//printf("\na: %d,b: %d,c: %d,d: %d,e: %d,f: %d,g: %d,h: %d,i: %d,j %d,k: %d,l: %d,m: %d,n: %d,o: %d,p: %d,q: %d,r: %d,s: %d,t: %d,u: %d,v: %d,w: %d,x: %d,y: %d,z: %d,Espacios: %d",a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,esp);
		//puts(string2);
	}
	if (op == 2){
		printf("Numeros a desencriptar (separados por comas) :");
		gets(string);
		dim=strlen(string)+1;
		while (z1!=dim){
					letra =',';
					carac = string[z5];
					if (letra == carac || carac == '\0'){
						if (z5 >= 2){
							sup[0] = '\0';
							sup[0] = string[0];
							sup[1] = string[1];
							sup[2] = '\0';
							valor = atoi(sup);
							while (z2!=27){
								z3=0;
								while (z3!=3){
									if (valor == 79 || valor == 80 || valor == 81){
										printf("%c",32);
										z2=26;
										z3=2;
									}
									else if(valor == trad[z2][z3]){
										printf("%c",z2+'a');
									}
									z3++;
								}
								z2++;
							}
						}
						else if (z5 <=1){
							sup[0] = '\0';
							sup[0] = string[0];
							sup[1] = '\0';
							valor = atoi(sup);
							while (z2!=27){
								z3=0;
								while (z3!=3){
									if (valor == 79 || valor == 80 || valor == 81){
										printf("%c",32);
										z2=26;
										z3=2;
									}
									else if(valor == trad[z2][z3]){
										printf("%c",z2+'a');
									}
									z3++;
								}
								z2++;
							}
						}
						if (carac == '\0') exit(0);
						z4=strstr(string,",")+1;
						strcpy(string,z4);
						z2=0;
						z5=-1;
					}
					z5++;
					z1++;
				}
	}
}

