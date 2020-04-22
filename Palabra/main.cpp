#include <iostream>
#include <string.h>
#include <ctype.h> //libreria para tolower

using namespace std;

int main() {

    char cadena[30];
    int cont=0;
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,o=0,p=0,q=0,r=0,s=0,t=0,u=0,v=0,w=0,x=0,y=0,z=0;

    cout<<"Ingresa una cadena de caracteres: ";
    cin.getline(cadena,30);

    int largo = strlen(cadena);
    //cadenaminuscula = tolower(cadena[cont]);

    //entra en un ciclo donde compara las letras del abecedario y si las encuentra en la cadena, se le suma al contador de la misma letra
    do
    {
        if(cadena[cont] == 'a' ) { a++; }
        if(cadena[cont] == 'b' || cadena[cont] == 'B') { b++; }
        if(cadena[cont] == 'c' || cadena[cont] == 'C') { c++; }
        if(cadena[cont] == 'd' || cadena[cont] == 'D') { d++; }
        if(cadena[cont] == 'e' || cadena[cont] == 'E') { e++; }
        if(cadena[cont] == 'f' || cadena[cont] == 'F') { f++; }
        if(cadena[cont] == 'g' || cadena[cont] == 'G') { g++; }
        if(cadena[cont] == 'h' || cadena[cont] == 'H') { h++; }
        if(cadena[cont] == 'i' || cadena[cont] == 'I') { i++; }
        if(cadena[cont] == 'j' || cadena[cont] == 'J') { j++; }
        if(cadena[cont] == 'k' || cadena[cont] == 'K') { k++; }
        if(cadena[cont] == 'l' || cadena[cont] == 'L') { l++; }
        if(cadena[cont] == 'm' || cadena[cont] == 'M') { m++; }
        if(cadena[cont] == 'n' || cadena[cont] == 'N') { n++; }
        if(cadena[cont] == 'o' || cadena[cont] == 'O') { o++; }
        if(cadena[cont] == 'p' || cadena[cont] == 'P') { p++; }
        if(cadena[cont] == 'q' || cadena[cont] == 'Q') { q++; }
        if(cadena[cont] == 'r' || cadena[cont] == 'R') { e++; }
        if(cadena[cont] == 's' || cadena[cont] == 'S') { s++; }
        if(cadena[cont] == 't' || cadena[cont] == 'T') { t++; }
        if(cadena[cont] == 'u' || cadena[cont] == 'U') { u++; }
        if(cadena[cont] == 'v' || cadena[cont] == 'V') { v++; }
        if(cadena[cont] == 'w' || cadena[cont] == 'W') { w++; }
        if(cadena[cont] == 'x' || cadena[cont] == 'X') { x++; }
        if(cadena[cont] == 'y' || cadena[cont] == 'Y') { y++; }
        if(cadena[cont] == 'z' || cadena[cont] == 'Z') { z++; }



        cont++;
    }while(cont < largo);


    //si una letra es distinta de cero, mostrarla, en caso contrario, pasapalabra....
    if(a!=0){cout << "a" << a ;}
    if(b!=0){cout << "b" << b ;}
    if(c!=0){cout << "c" << c ;}
    if(d!=0){cout << "d" << d ;}
    if(e!=0){cout << "e" << e ;}
    if(f!=0){cout << "f" << f ;}
    if(g!=0){cout << "g" << g ;}
    if(h!=0){cout << "h" << h ;}
    if(i!=0){cout << "i" << i ;}
    if(j!=0){cout << "j" << j ;}
    if(k!=0){cout << "k" << k ;}
    if(l!=0){cout << "l" << l ;}
    if(m!=0){cout << "m" << m ;}
    if(n!=0){cout << "n" << n ;}
    if(o!=0){cout << "o" << o ;}
    if(p!=0){cout << "p" << p ;}
    if(q!=0){cout << "q" << q ;}
    if(r!=0){cout << "r" << r ;}
    if(s!=0){cout << "s" << s ;}
    if(t!=0){cout << "t" << t ;}
    if(u!=0){cout << "u" << u ;}
    if(v!=0){cout << "v" << v ;}
    if(w!=0){cout << "w" << w ;}
    if(x!=0){cout << "x" << x ;}
    if(y!=0){cout << "y" << y ;}
    if(z!=0){cout << "z" << z ;}



    return 0;
}
