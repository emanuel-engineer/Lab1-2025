#include <iostream>
using namespace std;

//Prototipos de funciones
//(pre-compilación)

int division_mod(int A, int B, int MOD);
char convertirAMinuscula(char caracter);
int Problema_1();
int Problema_2();
int Problema_3();
int Problema_4();
int main();
//etc...

//funciones
char convertirAMinuscula(char caracter) {
    // Verificar si el carácter es una letra mayúscula
    if (caracter >= 'A' && caracter <= 'Z') {
        // Convertir a minúscula sumando 32 en la tabla ASCII
        return caracter + 32;
    }
    // Si no es una letra mayúscula, devolver el carácter original
    return caracter;
}

int Problema_1()
{
 //TODO:::
 //LA ñ rompe el programa, SOLUCIONAR!!!
  /*Definimos listas, y su tamaño (tamano)*/
  char vocal[] ={'a','e','i','o','u'};
  char abcd[] = {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','u','v','w','x','y','z'};
  int tamanoL1 = sizeof(vocal) / sizeof(vocal[0]);
  int tamanoL2 = sizeof(abcd) / sizeof(abcd[0]);
 //Pedimos el caracter a buscar
  char letra;
  cout<<"Ingresa la letra a identificar: ";
  cin >> letra ;
  //Lo convertimos a minuscula
  char letraMIN = convertirAMinuscula(letra);


  //verificamos si el caracter está en alguna listas

    bool encontradoEnvocal = false;
    bool encontradoEnabcd = false;

    // Buscar en la primera lista
    for (int i = 0; i < tamanoL1; ++i) {
        if (vocal[i] == letraMIN) {
            encontradoEnvocal = true;
            break;
        }
    }

    // Buscar en la segunda lista
    if (!encontradoEnvocal) { // Solo buscar en la segunda lista si no se encontró en la primera
        for (int i = 0; i < tamanoL2; ++i) {
            if (abcd[i] == letraMIN) {
                encontradoEnabcd = true;
                break;
            }
        }
    }

    // Mostrar el resultado
    if (encontradoEnvocal) {
        cout << letra << " es una vocal." << endl;
    } else if (encontradoEnabcd) {
        cout << letra << " es una consonante." << endl;
    } else {
        cout << letra << " no es una letra." << endl;
    }


//Volver a MAIN
    cout << "Ingrese 0 (cero) para volver al menu."<<endl;
    cout << "Ingrese otro numero (cualquiera) para cerrar el programa"<< endl;

    int opcion;
    cin >> opcion;
    switch (opcion) {
      case 0:
      main();
        break;
          }

    return 0;


}


int Problema_2()
{
//definimos que billetes y monedas se van a usar.
  int billetes[] = {50000, 20000, 10000, 5000, 2000, 1000 };
  int monedas[] = {500, 200, 100, 50};
//Ponemos la cantidad que hay de cada uno en cada lista.
  int cantbilletes[6]={0};
  int cantmonedas[4]={0};


//pedimos que se ingrese la cantidad.
  int cantidad;
  cout<< "Ingrese la cantidad a determinar: "<<endl;
  cin>>cantidad;


//Se recorre la cantidad de billetes y monedas con un FOR

 //BILLETES
  for (int i = 0; i < 6; i++) {
   if (cantidad >= billetes[i]) {
   cantbilletes[i] = cantidad/billetes[i];
   cantidad %= billetes[i];
   }
  }


  //MONEDAS
  for (int i = 0; i < 4; i++) {
   if (cantidad >= monedas[i]) {
   cantmonedas[i] = cantidad/monedas[i];
   cantidad %= monedas[i];
   }
  }

  // Mostrar el resultado para billetes
  for (int i = 0; i < 6; i++) {
      cout << billetes[i] << " : " << cantbilletes[i] << endl;
  }

 // Mostrar el resultado para monedas
  for (int i = 0; i < 4; i++) {
      cout << monedas[i] << " : " << cantmonedas[i] << endl;
  }

//FALTANTE

if (cantidad > 0) {
  cout << "Faltante: " << cantidad << endl ;

}

//Volver a MAIN
    cout << "Ingrese 0 (cero) para volver al menu."<<endl;
    cout << "Ingrese otro numero (cualquiera) para cerrar el programa"<< endl;

    int opcion;
    cin >> opcion;
    switch (opcion) {
      case 0:
      main();
        break;
    }


  return 0;
}


int Problema_3()
{
  int mes;
  int dia;


  cout << "Ingrese un mes: " << endl;
  cin >> mes;
  //Verifica si el mes es valido, y si no, detiene el programa.
  if(mes>12){
    cout<< mes <<  " Es un mes invalido." << endl;
    //Volver a MAIN
        cout << "Ingrese 0 (cero) para volver al menu."<<endl;
        cout << "Ingrese otro numero (cualquiera) para cerrar el programa"<< endl;

        int opcion;
        cin >> opcion;
        switch (opcion) {
          case 0:
          main();
            break;
        }
  }



  cout << "Ingrese un dia: " << endl;
  cin >> dia;
//Verifica si el dia es valido, y si no, detiene el programa.
  if (dia>31){
    cout<< dia << " Es un dia invalido." << endl;
    //Volver a MAIN
        cout << "Ingrese 0 (cero) para volver al menu."<<endl;
        cout << "Ingrese otro numero (cualquiera) para cerrar el programa"<< endl;

        int opcion;
        cin >> opcion;
        switch (opcion) {
          case 0:
          main();
            break;
        }
  }

  if (dia == 29 && mes == 2){
    cout<< "29/2 es valida en bisiesto." << endl;
  }else{
    cout << dia << "/" << mes << " es una fecha valida"<< endl;
  }
/*Se verifica que la fecha sea correcta, de lo contrario, se devuelve al menú.
 * Si es correcta, se imprime con el formato deseado*/



  //Volver a MAIN
      cout << "Ingrese 0 (cero) para volver al menu."<<endl;
      cout << "Ingrese otro numero (cualquiera) para cerrar el programa"<< endl;

      int opcion;
      cin >> opcion;
      switch (opcion) {
        case 0:
        main();
          break;
      }

  return 0;
}


int Problema_4()
{

  /*TO DO
   Implementar el volver a main de problema 4 a los demás.*/
  int hora;
  int minuto;
  cout<<"Ingese una hora en formato militar, sin puntos decimales, ni dos puntos (:). Ej. 14 (2pm) : "<< endl;
  cin >> hora;
  cout<<"Ingese los minutos: "<< endl;
  cin >> minuto;

  if (minuto >=60){
    cout<<"ERROR. Los minutos no pueden ser mayor a 59"<<endl;
    //Volver a MAIN
        cout << "Ingrese 0 (cero) para volver al menu."<<endl;
        cout << "Ingrese 1 para repetir este programa."<<endl;
        cout << "Ingrese otro numero (cualquiera) para cerrar el programa"<< endl;

        int opcion;
        cin >> opcion;
        switch (opcion) {
          case 0:
          main();
            break;
        case 1:
          Problema_4();
          break;
        }
  }

  if (hora >= 24){
    cout<< "ERROR. La hora no puede ser mayor a 24"<< endl;
    //Volver a MAIN
        cout << "Ingrese 0 (cero) para volver al menu."<<endl;
        cout << "Ingrese 1 para repetir este programa."<<endl;
        cout << "Ingrese otro numero (cualquiera) para cerrar el programa"<< endl;

        int opcion;
        cin >> opcion;
        switch (opcion) {
          case 0:
          main();
            break;
        case 1:
          Problema_4();
          break;
        }
  }



  return 0;
}
//MENU
int main ()
{
  int opcion;


  cout << " -----BIENVENID@----- " << endl;
  cout << " | 1). Punto 1..... | " << endl;
  cout << " | 2). Punto 2..... | " << endl;
  cout << " | 3). Punto 3..... | " << endl;
  cout << " | 4). Punto 4..... | " << endl;
  //Otras opciones


  cout << " -------------------- "<< endl;

  cout << " Ingresa una opcion:  ";
  cin >> opcion ;



 switch(opcion)
 {
  case 1:
  //Codigo de el problema
  Problema_1();
    break;
  case 2:
  Problema_2();
      break;
 case 3:
  Problema_3();
     break;
 case 4:
  Problema_4();
     break;
 }
  //etc...
 return 0;
}
