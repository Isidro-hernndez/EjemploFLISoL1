#include <iostream>

using namespace std;

int suma(int p, int s){
    //Codigo
}

int resta(int p,int s){
    //Codigo
}
int mult(int p,int s){
    //codigo
}
int div(int p,int s){
    //codigo
}


int main(){
    int p,s,x;
        cout<<"Ingresa el primer digito"<<endl;
        cin>>p;
        cout<<"Ingresa el segundo digito"<<endl;
        cin>>s;

    while(x!=5){
        cout<<"Calculadora"<<endl;
        cout<<"Indica la operacion a realizar"<<endl;
        cout<<"1 Suma"<<endl;
        cout<<"2 Resta"<<endl;
        cout<<"3 Multiplicacion"<<endl;
        cout<<"4 Divicion"<<endl;
        cout<<"5 Salir"<<endl;
        cin>>x;
        switch(x){
        case 1: suma(p,s);
                break;
        case 2: resta(p,s);
                break;
        case 3: mult(p,s);
                break;
        case 4: div(p,s);
                break;
        }

    }

    return 0;
}

