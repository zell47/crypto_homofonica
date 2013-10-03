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
	int trad[25][2]={ {1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15},{16,17,18},{19,20,21},{22,23,24},{25,26,27},{28,29,30},{31,32,33},{34,35,36},{37,38,39},{40,41,42},{43,44,45},{46,47,48},{49,50,51},{52,53,54},{55,56,57},{58,59,60},{61,62,63},{64,65,66},{67,68,69},{70,71,72},{73,74,75},{76,77,78} };
	int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0,esp=0;
	char string[MAX],string2[MAX];
	char letra;
	int z1=0,z2=0,z3=0,z4=0,dim=0;
	printf("Donam la paraula a traduir :");
	gets(string);
	dim=strlen(string);
	while (z1!=dim){
		string[z1] = tolower(string[z1]);
		z1++;
	}
	puts(string);
	while (z2!=dim){
		letra = string[z2];
		printf("\n%c",letra);
		if (letra == 'a') a++;
		else if (letra == 'b') b++;
		else if (letra == 'c') c++;
		else if (letra == 'd') d++;
		else if (letra == 'e') e++;
		else if (letra == 'f') f++;
		else if (letra == 'g') g++;
		else if (letra == 'h') h++;
		else if (letra == 'i') i++;
		else if (letra == 'j') j++;
		else if (letra == 'k') k++;
		else if (letra == 'l') l++;
		else if (letra == 'm') m++;
		else if (letra == 'n') n++;
		else if (letra == 'o') o++;
		else if (letra == 'p') p++;
		else if (letra == 'q') q++;
		else if (letra == 'r') r++;
		else if (letra == 's') s++;
		else if (letra == 't') t++;
		else if (letra == 'u') u++;
		else if (letra == 'v') v++;
		else if (letra == 'w') w++;
		else if (letra == 'x') x++;
		else if (letra == 'y') y++;
		else if (letra == 'z') z++;
		else if (letra == 32) esp++;
		z2++;
	}
	printf("\na: %d,b: %d,c: %d,d: %d,e: %d,f: %d,g: %d,h: %d,i: %d,j %d,k: %d,l: %d,m: %d,n: %d,o: %d,p: %d,q: %d,r: %d,s: %d,t: %d,u: %d,v: %d,w: %d,x: %d,y: %d,z: %d,Espacios: %d",a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,esp);
}

