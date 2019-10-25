#include <iostream>

using namespace std;

int si(char *cadena){
    int tam=0;
    for(int i=0;*cadena++!='\0';i++)
        tam++;
    return tam;
}

int sir(char *cad){
    if(*cad=='\0')
        return 0;
    return 1+sir(++cad);
}

void inv(char *cad){
    char *fin =cad+si(cad)-1;
    while(fin>cad){
       char t=*cad;
       *cad=*fin;
       *fin=t;
       fin--;
       cad++;
    }
}

void invre(char *cad,int i=0){
    char *fin= cad+si(cad)-1-i;
    if (fin<=cad)
        return;
    char t=*cad;
    *cad=*fin;
    *fin=t;
    invre(++cad,++i);


}

bool pali(char *cad){
    int tam=si(cad);
    char *ptr=tam-1+cad;
    while(ptr-->=cad++)
    if(*cad!=*ptr)
        return false;
    return true;


}

bool palire(char *cad,int i=0){
    char *fin=cad+si(cad)-1-i;
    if(*cad!=*fin)
        return 0;
    if(i==si(cad)/2)
        return 1;
    return palire(++cad,++i);

}


int main()
{
    char cadena[]="putito";
    int a=palire(cadena);
    if(a==1)
        cout<<"es palindrome";
    else
        cout<<"no es palindrome";
}
