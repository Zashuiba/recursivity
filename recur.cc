#include <iostream>
using namespace std;

void serie1 (int n){
    if(n<=0)
        cout << "ERROR" << endl;

    else if (n==1)
        cout << n << endl;
    else{
        cout << n << " ";
       serie1(n-1);
    }
}

void serie2 (int n){
    if(n<=0)
        cout << "ERROR" << endl;

    else if (n==1)
        cout << n << " ";  //save thingsasd a
    else{
       serie2(n-1);
       cout << n << " ";
    }
}


void cuentaImpares(int n){

 int cont(0);

 if (n <= 0)
     cout << "ERROR" << endl;
 else if (n>0)
 {
  if ((n % 10)%2 != 0)
      cont ++;
    cuentaImpares(n/10);


 }

}

char menu(){

    cout << "1. Serie de n a 1" << endl;
cout << "2. Serie de 1 a n" << endl;
cout << "3. Cuenta las cifras impares" << endl;
cout << "4. Salir" << endl;

//prebaasd

}



int main(){
    int n;
    char op;

    do{
        op=menu();
        switch (op){
            case '1': cout << "Introduce un número ";
                      cin >> n;
                      //...
                      break;
            case '2': cout << "Introduce un número ";
                      cin >> n;
                      //...
                      break;
            case '3': cout << "Introduce un número ";
                      cin >> n;
                      //...
                      break;
        }
    }while (op!='4');

    return 0;
}
