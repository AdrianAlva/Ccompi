#include <iostream>

using namespace std;


void print(int arr[],int tam){
      for (int i=0;i<tam;i++){
        cout<<arr[i]<<endl;
      }
}

/*int sum(int arr[],int tam){
    int sum=0;
    for(int i=0;i<tam;i++){
         sum = sum + arr[i];
    }
    return sum;

    }*/

 /*int sumre(int arr[],int tam){
     if (tam==0)
        return 0;
     else
        return arr[tam-1]+ sumre(arr,--tam);
*/



/*void inv(int arr[],int tam){
    int v = tam/2;
    tam -= 1;
    for(int i=0;i<v;i++){
        int c = arr[i];
        arr[i]=arr[tam];
        arr[tam--]=c;
    }
}*/

void invre(int arr[],int tam){
    if (tam==1)
        return 0;
    else
        arr[]=()




}



/*void bub(int arr[],int tam){
    for (int i=1;i<tam;i++){
          for (int h=0;h<tam-i;h++){
            if(arr[h]>arr[h+1]){
                int c = arr[h];
                arr[h]= arr[h+1];
                arr[h+1]=c;
        }
    }
    }

}*/


/*void ins(int arr[],int tam){
    for(int i=1;i<tam;i++){
        int c = arr[i];
        int h = i-1;
        while ((arr[h]>c)&&(h>=0)){
            arr[h+1] = arr[h];
            h--;
            arr[h+1]=c;
    }
}
}
*/




int main(){
    int  x[5];
    for (int i =0;i<5;i++){
        cin>>x[i];
    }
print(x,5);
cout<<sumre(x,5);

}


