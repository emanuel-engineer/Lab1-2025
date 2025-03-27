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
int Problema_5();
int Problema_6();
double aproximarEuler(int n);
int Problema_7();
int Problema_8();
int Problema_9();
int Problema_10();
int Problema_11();
int Problema_12();

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

    // buscar en la primera lista (consonantes)
    for (int i = 0; i < tamanoL1; ++i) {
        if (vocal[i] == letraMIN) {
            encontradoEnvocal = true;
            break;
        }
    }

    // buscar en la segunda lista (vocales)
    if (!encontradoEnvocal) { // solo buscar en la segunda lista si no se encontró en la primera
        for (int i = 0; i < tamanoL2; ++i) {
            if (abcd[i] == letraMIN) {
                encontradoEnabcd = true;
                break;
            }
        }
    }

    // mostrar el resultado
    if (encontradoEnvocal) {
        cout << letra << " es una vocal." << endl;
    } else if (encontradoEnabcd) {
        cout << letra << " es una consonante." << endl;
    } else {
        cout << letra << " no es una letra." << endl;
    }


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
          Problema_1();
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
    cout << "Ingrese 1 para repetir este programa."<<endl;
    cout << "Ingrese otro numero (cualquiera) para cerrar el programa"<< endl;

    int opcion;
    cin >> opcion;
    switch (opcion) {
      case 0:
      main();
        break;
    case 1:
      Problema_2();
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
        cout << "Ingrese 1 para repetir este programa."<<endl;
        cout << "Ingrese otro numero (cualquiera) para cerrar el programa"<< endl;

        int opcion;
        cin >> opcion;
        switch (opcion) {
          case 0:
          main();
            break;
        case 1:
          Problema_3();
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
        cout << "Ingrese 1 para repetir este programa."<<endl;
        cout << "Ingrese otro numero (cualquiera) para cerrar el programa"<< endl;

        int opcion;
        cin >> opcion;
        switch (opcion) {
          case 0:
          main();
            break;
        case 1:
          Problema_3();
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
    cout<<hora<<minuto<< " es un tiempo invalido"<< endl;
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
  } else if (hora >= 24){
    cout<<hora<<minuto<< " es un tiempo invalido"<< endl;
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
  } else {
  cout << "La hora es "<< hora<< minuto<< endl;
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

int Problema_5()
{
  int valor;

  cout<< "Ingrese un numero: ";
  cin >> valor;

  for (int i = 0 ; i <= valor ; ++i ){

    //dar formato a la salida
    for (int j = 0; j < valor - i; ++j) {
               cout << " ";
           }
//Imprimir asteriscos
    for (int j =1 ; j <= i ; ++j){
      cout <<"* ";
    }
    //Cambiar de linea despues de cada fila
    cout<<endl;

  }

  //Para el decrecimiento
      for (int i = valor - 1; i >= 1; --i) {
          // espacios para centrar la línea
          for (int j = 0; j < valor - i; ++j) {
              cout << " ";
          }
          //Imprimir asteriscos
          for (int j = 1; j <= i; ++j) {
              cout << "* ";
          }
          // Cambiar de línea después de cada fila
          cout << endl;
      }

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
    Problema_5();
    break;
  }
return 0;
}

double aproximarEuler(int n) {
    double e = 1.0;
    double factorial = 1.0;
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
        e += 1.0 / factorial;
    }
    return e;
}

int Problema_6(){

  int n;
  cout << "Ingrese el numero de elementos para aproximar e: ";
  cin >> n;
  double e = aproximarEuler(n);
  cout << "e es aproximadamente: " << e << endl;


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
Problema_6();
break;
}

  return 0;
}

int Problema_7(){
  int n;
      cout << "Ingrese un numero n: ";
      cin >> n;

      int a = 1, b = 1, c = 0;
      int suma = 0;

      while (b < n) {
          if (b % 2 == 0) {
              suma += b;
          }
          c = a + b;
          a = b;
          b = c;
      }

      cout << "El resultado de la suma es: " << suma << endl;

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
    Problema_7();
    break;
    }
  return 0;
}

int Problema_8(){

  int a , b , c ;

  int suma = 0 ;

  cout << "ingrese tres numeros a,b,c : " ;
  cin >> a >> b >> c ;

  for (int i = 1 ; i * a < c ; ++i){
    suma += i * a;
  }

  for (int i = 1; i * b < c; ++i) {
          if ((i * b) % a != 0) {
              suma += i * b;
          }
  }

      cout << "La sumatoria es: " << suma << endl;

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
    Problema_8();
    break;
    }
  return 0;
}

int Problema_9(){

  int n;

  cout << "ingrese un numero entero N: ";
  cin >> n ;
  int suma = 0;
  int temp = n;

  while (temp > 0) {
      int digito = temp % 10;
      int potencia = 1;
      for (int i = 0; i < digito; ++i) {
          potencia *= digito;
      }
      suma += potencia;
      temp /= 10;
  }

  cout << "El resultado de la suma es: " << suma << endl;


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
Problema_9();
break;
}

  return 0;
}

bool esPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int Problema_10() {
    int n;
    cout << "Ingrese un numero n: ";
    cin >> n;

    int contador = 0;
    int numero = 2;

    while (contador < n) {
        if (esPrimo(numero)) {
            contador++;
        }
        numero++;
    }

    cout << "El primo numero " << n << " es: " << numero - 1 << endl;


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
  Problema_10();
  break;
  }
return 0;
}

int mcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int mcm(int a, int b) {
    return a * (b / mcd(a, b));
}

int Problema_11() {
    int n;
    cout << "Ingrese un numero n: ";
    cin >> n;

    int resultado = 1;

    for (int i = 2; i <= n; ++i) {
        resultado = mcm(resultado, i);
    }

    cout << "El minimo comun multiplo es: " << resultado << endl;

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
  Problema_11();
  break;
  }
    return 0;
}

int Problema_12() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    int maxFactor = 1;

    while (n % 2 == 0) {
        maxFactor = 2;
        n /= 2;
    }

    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            maxFactor = i;
            n /= i;
        }
    }

    if (n > 2) {
        maxFactor = n;
    }

    cout << "El mayor factor primo de " << n << " es: " << maxFactor << endl;


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
  Problema_12();
  break;
  }
return 0;
}


//MENU
int main (){
  int opcion;


  cout << " -----BIENVENID@----- " << endl;
  cout << " | Ingrese un numero | " << endl;
  cout << " | 1-17 para ver el  | " << endl;
  cout << " | problema corres-  | " << endl;
  cout << " | pondiente.        | " << endl;
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
 case 5:
  Problema_5();
     break;
 case 6:
   Problema_6();
   break;
 case 7:
   Problema_7();
   break;
 case 8:
   Problema_8();
   break;
 case 9:
   Problema_9();
   break;
 case 10:
   Problema_10();
   break;
 case 11:
   Problema_11();
   break;
 case 12:
   Problema_12();
   break;
 }
  //etc...
 return 0;
}
