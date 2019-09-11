#include <iostream>

using namespace std;

void tabular(int x){
  int a=x,b,c,d,e,f;
  b = a/10000;
  c = (a-(b*10000))/1000;
  d=  (a-(b*10000+c*1000))/100;
  e = (a-(b*10000+c*1000+d*100))/10;
  f = a-(b*10000+c*1000+d*100+e*10);
  cout << b << '\t' << c << '\t' << d << '\t' << e << '\t' << f ;


}
int main(){
    int a;
    cout<<"ingresew num: ";
    cin>> a;
    tabular(a);


}




int contdi(int x){
    int n = 1;
    int a = x;
    int b = 10;
    while(true){
        if (a>b){
            b=b*10;
            n=n+1;
        }
     if (a<b){
        cout<<a<<"tiene"<<n<<"digitos.";
        return false;
     }
}
}

int main(){
int n;
cin>>n;
contdi(n);
return 0;

}


bool palin(int x){

 int a=x,b,c,d,e,f;
  b = a/10000;
  c = (a-(b*10000))/1000;
  d=  (a-(b*10000+c*1000))/100;
  e = (a-(b*10000+c*1000+d*100))/10;
  f = a-(b*10000+c*1000+d*100+e*10);
    if (b==f && c==e)
        cout <<"es palindromo";

    else
        cout<<"no es p";
}


int fibo (int n){
        int a = 0;
        int b = 1;
        int m;

        if (n%2==0)
            m = 0;
        else
            m = 1;

        while (m<n){
            if (n%2!=0){
                a = a+b;
                n--;
            }
            else{
                b = b+a;
                n--;
            }
        }
        if (a>b)
            cout << a << endl;
        else
            cout << b << endl;
    }






bool esn(char x){

 char a = x;
 int n= static_cast<int>(a);
 if(n>=48 && n<=57)
    cout<<"si es p";
 else
    cout<<"no es p";

}

int main(){
char a ;
cin>> a;
esn(a);
}






int letra (char n){
        int a = static_cast<int>(n);
        if ((a>=65 && a<=90) || (a>=97 && a<=122)) return a;
        else return -1;
    }

    char Mm (int b){
        return static_cast <char> (b+32);
    }

    char mM (int b){
        return static_cast <char> (b-32);
    }

    void endme(char n){
        int s = letra(n);
        if (s != -1){
            if (s<91)
                cout << (Mm(s)) << endl;
            else
                cout <<(mM(s)) << endl;
        }
        else
            cout << "no es numero";
        }







