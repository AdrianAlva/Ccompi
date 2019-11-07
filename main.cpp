#include <iostream>
#include <string.h>

using namespace std;

class persona{
protected:
    int edad;
    string nombre;
public:
    persona(int e,string n){
        edad = e;
        nombre = n;
    }

    void set_edad(int e){edad=e;}
    void set_nombre(string n){nombre=n;}

    int get_edad(){return edad;}
    string get_nombre(){return nombre;}
};

class estudiante : public persona{
protected:
    string grado;
    string codigo;
public:
    estudiante(int e,string n,string g,string c):persona(e,n){
        grado = g;
        codigo = c;
    }
    void set_grado(string g){grado=g;}
    void set_codigo(string c){codigo=c;}

    string get_grado(){return grado;}
    string get_codigo(){return codigo;}
} ;

class comida{
protected:
    string procedencia;
    string tipo;
public:
    comida(string p,string t){
        procedencia = p;
        tipo = t;
    }
    void set_procedencia(string p){procedencia=p;}
    void set_tipo(string t){tipo=t;}

    string get_procedencia(){return procedencia;}
    string get_tipo(){return tipo;}
};

class pasteldep : public comida{
protected:
    string ingredientes;
public:
    pasteldep(string p,string t,string i):comida(p,t){
        ingredientes = i;
    }
    void set_ingredientes(string i){ingredientes=i;}

    string get_ingredientes(){return ingredientes;}
} ;

class transporte{
protected:
    string tipo;
    int velocidad;
public:
    transporte(string t,int v){
        tipo=t;
        velocidad=v;
    }
    void set_tipo(string t){tipo=t;}
    void set_velocidad(int v){velocidad=v;}

    string get_tipo(){return tipo;}
    int get_velocidad(){return velocidad;}
};

class combi : public transporte{
protected:
        string color;
        int placa;
public:
        combi(string t,int v,string c,int p):transporte(t,v){
            color=c;
            placa=p;
        }
    void set_color(string c){color=c;}
    void set_placa(int p){placa=p;}

    string get_color(){return color;}
    int get_placa(){return placa;}
};

int main()
{

    combi b("combi",40,"amarillo",1235);
    estudiante p(8,"Alison","2do de primaria","001");
    pasteldep a("leche,papas","Peru","entrada");
    cout<<b.get_tipo()<<" "<<b.get_velocidad()<<"km"<<" "<<b.get_color()<<" "<<b.get_placa()<<endl;
    cout<<a.get_ingredientes()<<" "<<a.get_procedencia()<<" "<<a.get_tipo()<<endl;
    cout << p.get_edad()<<"years"<<" "<<p.get_nombre()<<" "<<p.get_grado() << endl;
}
