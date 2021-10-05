//
//  main.cpp
//  final project
//
//  Created by Linette Cassino and Cristian Tajú on 11/21/18.
//  Copyright © 2018 Linette Cassino and Cristian Tajú. All rights reserved.
//

#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <string>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

using namespace std;

char tablero[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};  // Variable utilizada para realizar el tablero
int posicion;            //posicion en el tablero elegida por el usuario
int victoria=0;         // Variable usada para repetir
int turno=1;           // Variable cambio de turno
string nombre[3];       // Variable para almacenar el nombre
int opcion;



void proyectar_tablero();   //Funcion utilizada para no imprimir el tablero constantemente
void cambio_jugador();      // Funcion para cambiar entre jugadores
void jugador_ganador_X();   // Funcion para saber cuando gana el jugador X
void jugador_ganador_O();    // Funcion para saber cuando gana el jugador O
void empate();              // Funcion para marcar empate en el tablero
void cambio_jugador_pc(); //campiar y elegir entre pc y usuario
void jugador_ganador_O_pc();  //ganador pc
void empate_pc(); //Función empate pc



void proyectar_tablero(){


                    cout<<"\n                   \n";
                    cout<<"\t\t     |     |     \n";
                    cout<<"\t\t  "<<tablero[0][0]<<"  |  "<<tablero[0][1]<<"  |  "<<tablero[0][2]<<"\n";
                    cout<<"\t\t_____|_____|_____\n";
                    cout<<"\t\t     |     |     \n";
                    cout<<"\t\t  "<<tablero[1][0]<<"  |  "<<tablero[1][1]<<"  |  "<<tablero[1][2]<<"\n";
                    cout<<"\t\t_____|_____|_____\n";
                    cout<<"\t\t     |     |     \n";
                    cout<<"\t\t  "<<tablero[2][0]<<"  |  "<<tablero[2][1]<<"  |  "<<tablero[2][2]<<"\n";
                    cout<<"\t\t     |     |     \n";
                    cout<<"\n                   \n";
}



void  cambio_jugador() {

              if(turno==1){
                     cout<<"Jugador: "<<nombre[1]<<" (X) Ingrese el numero en donde quiere colocar su ficha: ";
                        cin>>posicion;

                        system("cls");

                   switch(posicion){  //SWITCH utilizado para el cambio de numero  de pos a "X"

                        case 1: if(tablero[0][0]=='1'){
                                 tablero[0][0]='X';
                                 turno=2;
                                }
                                else{
                                printf("Este espacio esta en uso seleccione otro, Presione enter.");   // IF Creado para bloquear si ya existe "X"
                                getch(); system("cls");
                                turno=1;

                                }
                        break;

                        case 2: if(tablero[0][1]=='2'){
                                 tablero[0][1] = 'X';
                                 turno=2;
                                 }
                                else{
                                printf("Este espacio esta en uso seleccione otro, Presione enter.");
                                getch(); system("cls");
                                turno=1;

                                }
                        break;

                        case 3: if (tablero[0][2]=='3'){
                                    tablero[0][2] = 'X';
                                    turno=2;
                                }
                                else{
                                printf("Este espacio esta en uso seleccione otro, Presione enter.");
                                getch(); system("cls");
                                turno=1;

                                }
                        break;

                        case 4: if (tablero[1][0]=='4'){
                                    tablero[1][0] = 'X';
                                    turno=2;
                            }
                                else{
                                printf("Este espacio esta en uso seleccione otro, Presione enter.");
                                getch(); system("cls");
                                turno=1;

                                }
                        break;

                        case 5: if (tablero[1][1]=='5'){
                                   tablero[1][1] = 'X';
                                   turno=2;
                            }
                                else{
                                printf("Este espacio esta en uso seleccione otro, Presione enter.");
                                getch(); system("cls");
                                turno=1;

                                }
                        break;

                        case 6: if (tablero[1][2]=='6'){
                                    tablero[1][2] = 'X';
                                    turno=2;
                            }
                                else{
                                printf("Este espacio esta en uso seleccione otro, Presione enter.");
                                getch(); system("cls");
                                turno=1;

                                }
                        break;

                        case 7: if (tablero[2][0]=='7'){
                                   tablero[2][0] = 'X';
                                   turno=2;
                            }
                                else{
                                printf("Este espacio esta en uso seleccione otro, Presione enter.");
                                getch(); system("cls");
                                turno=1;

                                }
                        break;

                        case 8: if (tablero[2][1]=='8'){
                            tablero[2][1] = 'X';
                            turno=2;
                            }
                                else{
                                printf("Este espacio esta en uso seleccione otro, Presione enter.");
                                getch(); system("cls");
                                turno=1;

                                }
                        break;

                        case 9: if (tablero[2][2]=='9'){
                            tablero[2][2] = 'X';
                            turno=2;
                            }
                                else{
                                printf("Este espacio esta en uso seleccione otro, Presione enter.");
                                getch(); system("cls");
                                turno=1;

                                }
                        break;

                        default: printf("Por favor, ingrese un numero del tablero. Presione enter para comenzar.");
                         turno=1;
                        getch();
                        system("cls");

            }
               empate();
               proyectar_tablero();
               jugador_ganador_X();

               if(victoria==1){

                return jugador_ganador_O();
               }

            }



            if(turno==2){
                        cout<<"Jugador: "<<nombre[2]<<" (O) Ingrese el numero en donde quiere colocar su ficha: ";
                        cin>>posicion;

                        system("cls");

                   switch(posicion){  //SWITCH para cambiar de "1" a "O"

                        case 1: if (tablero[0][0]=='1'){
                            tablero[0][0] = 'O';turno=1;
                        }
                                else{
                                printf("Este espacio esta en uso seleccione otro, Presione enter.");
                                getch(); system("cls");
                                turno=2;

                                }
                        break;

                        case 2: if (tablero[0][1]=='2'){
                            tablero[0][1] = 'O';turno=1;
                        }
                                else{
                                printf("Este espacio esta en uso seleccione otro, Presione enter.");
                                getch(); system("cls");
                                turno=2;

                                }
                        break;

                        case 3: if (tablero[0][2]=='3'){
                            tablero[0][2] = 'O';turno=1;
                        }
                                else{
                                printf("Este espacio esta en uso seleccione otro, Presione enter.");
                                getch(); system("cls");
                                turno=2;

                                }
                        break;

                        case 4: if (tablero[1][0]=='4'){
                            tablero[1][0] = 'O';turno=1;
                        }
                                else{
                                printf("Este espacio esta en uso seleccione otro, Presione enter.");
                                getch(); system("cls");
                                turno=2;

                                }
                        break;

                        case 5: if (tablero[1][1]=='5'){
                            tablero[1][1] = 'O';turno=1;
                        }
                                else{
                                printf("Este espacio esta en uso seleccione otro, Presione enter.");
                                getch(); system("cls");
                                turno=2;

                                }
                        break;

                        case 6: if (tablero[1][2]=='6'){
                            tablero[1][2] = 'O';turno=1;
                        }
                                else{
                                printf("Este espacio esta en uso seleccione otro, Presione enter.");
                                getch(); system("cls");
                                turno=2;

                                }
                        break;

                        case 7: if (tablero[2][0]=='7'){
                            tablero[2][0] = 'O';turno=1;
                        }
                                else{
                                printf("Este espacio esta en uso seleccione otro, Presione enter.");
                                getch(); system("cls");
                                turno=2;

                                }
                        break;

                        case 8: if (tablero[2][1]=='8'){
                            tablero[2][1] = 'O';turno=1;
                        }
                                else{
                                printf("Este espacio esta en uso seleccione otro, Presione enter.");
                                getch(); system("cls");
                                turno=2;

                                }
                        break;

                        case 9: if (tablero[2][2]=='9'){
                            tablero[2][2] = 'O';turno=1;
                        }
                                else{
                                printf("Este espacio esta en uso seleccione otro, Presione enter.");
                                getch(); system("cls");
                                turno=2;

                                }
                        break;

                        default: printf("Por favor, ingrese un numero del tablero. Presione enter para comenzar."); turno=2;
                        getch();
                        system("cls");
                   }

                   proyectar_tablero();

                   }
}



void jugador_ganador_X(){

     for(int a=0 ; a<3 ; a++){   //For utilizado para aumentar el valor de las matrices de "Tablero"
            if( tablero[a][0]=='X' && tablero[a][1]=='X' && tablero[a][2]=='X' ) {    //Condicion ganadora de X
                cout<<"Jugador: "<<nombre[1]<< " (X). ¡Usted es el ganador!"<<endl;
                cout<<"Jugador: "<<nombre[2]<< " (O). Perdiste :( "<<endl;
                victoria=1;empate(); break;

                }

    else if( tablero[0][a]=='X' && tablero[1][a]=='X' && tablero[2][a]=='X' ) {
            cout<<"Jugador: "<<nombre[1]<< " (X). ¡Usted es el ganador!"<<endl;
            cout<<"Jugador: "<<nombre[2]<< " (O). Perdiste :( "<<endl;
            victoria=1;empate(); break;
            }

            }

         if ( tablero[0][0]=='X' && tablero[1][1]=='X' && tablero[2][2]=='X') {
            cout<<"Jugador: "<<nombre[1]<< " (X). ¡Usted es el ganador!"<<endl;
            cout<<"Jugador: "<<nombre[2]<< " (O). Perdiste :( "<<endl;
            victoria=1;empate();
            }


    else if ( tablero[2][0]=='X' && tablero[1][1]=='X' && tablero[0][2]=='X') {
            cout<<"Jugador: "<<nombre[1]<< " (X). ¡Usted es el ganador!"<<endl;
            cout<<"Jugador: "<<nombre[2]<< " (0) Perdiste :( "<<endl;
            victoria=1;empate();

            }
}



void jugador_ganador_O(){

    for(int b=0 ; b<3 ; b++){
            if( tablero[b][0]=='O' && tablero[b][1]=='O' && tablero[b][2]=='O' ) {  //Condicion ganadora de "O"
                cout<<"Jugador: "<<nombre[2]<< " (O). ¡Usted es el ganador!"<<endl;
                cout<<"Jugador: "<<nombre[1]<< " (X). Perdiste :( "<<endl;
                victoria=2; empate();break;

                }

    else if( tablero[0][b]=='O' && tablero[1][b]=='O' && tablero[2][b]=='O' ) {
            cout<<"Jugador: "<<nombre[2]<< " (O). ¡Usted es el ganador!"<<endl;
            cout<<"Jugador: "<<nombre[1]<< " (X). Perdiste :( "<<endl;
            victoria=2;empate(); break;
            }

            }

         if ( tablero[0][0]=='O' && tablero[1][1]=='O' && tablero[2][2]=='O') {
            cout<<"Jugador: "<<nombre[2]<< " (O). ¡Usted es el ganador!"<<endl;
            cout<<"Jugador: "<<nombre[1]<< " (X). Perdiste :( "<<endl;
            victoria=2;empate();
            }


    else if ( tablero[2][0]=='O' && tablero[1][1]=='O' && tablero[0][2]=='O') {
            cout<<"Jugador: "<<nombre[2]<< " (O). ¡Usted es el ganador!"<<endl;
            cout<<"Jugador: "<<nombre[1]<< " (X). Perdiste :( "<<endl;
            victoria=2; empate();

            }
}



void empate(){
   if(tablero[0][0]!='1' && tablero[0][1]!='2' && tablero[0][2]!='3' && tablero[1][0]!='4'&& tablero[1][1]!='5'&&
      tablero[1][2]!='6'&& tablero[2][0]!='7'&& tablero[2][1]!='8'&& tablero[2][2]!='9'){


         victoria=3;
         printf("¡Ha sido un empate!\n\n");
         printf("¡Si quieres volver a jugar, Vuelve a ejecutar el programa!\n\n");
         if(victoria==3){
                proyectar_tablero();
            exit(-1);

         }
}

}


void cambio_jugador_pc(){

    if(turno==1){
              cout<<"Jugador: "<<nombre[1]<<" (X) Ingrese el numero en donde quiere colocar su ficha: ";
              cin>>posicion;
              system("color A");

              system("cls");

    switch(posicion){  //SWITCH utilizado para el cambio de "1" a "X"

                case 1: if(tablero[0][0]=='1'){
                        tablero[0][0]='X';
                        turno=2;
}
                        else{
                        printf("Este espacio esta en uso seleccione otro, Presione enter.");   // IF Creado para bloquear si ya existe "X"
                        getch(); system("cls");
                        turno=1;

}
                break;


                case 2: if(tablero[0][1]=='2'){
                        tablero[0][1] = 'X';
                        turno=2;
}
                        else{
                        printf("Este espacio esta en uso seleccione otro, Presione enter.");
                        getch(); system("cls");
                        turno=1;

}
                break;


                case 3: if (tablero[0][2]=='3'){
                        tablero[0][2] = 'X';
                        turno=2;
}
                        else{
                        printf("Este espacio esta en uso seleccione otro, Presione enter.");
                        getch(); system("cls");
                        turno=1;

}
                break;


                case 4: if (tablero[1][0]=='4'){
                            tablero[1][0] = 'X';
                            turno=2;
}
                        else{
                        printf("Este espacio esta en uso seleccione otro, Presione enter.");
                        getch(); system("cls");
                        turno=1;

}
                break;


                case 5: if (tablero[1][1]=='5'){
                        tablero[1][1] = 'X';
                        turno=2;
}
                        else{
                        printf("Este espacio esta en uso seleccione otro, Presione enter.");
                        getch(); system("cls");
                        turno=1;

                                }
                break;


                case 6: if (tablero[1][2]=='6'){
                            tablero[1][2] = 'X';
                            turno=2;
}
                        else{
                        printf("Este espacio esta en uso seleccione otro, Presione enter.");
                        getch(); system("cls");
                        turno=1;

                                }
                break;


                case 7: if (tablero[2][0]=='7'){
                        tablero[2][0] = 'X';
                        turno=2;
}
                        else{
                        printf("Este espacio esta en uso seleccione otro, Presione enter.");
                        getch(); system("cls");
                        turno=1;

                                }
                break;


                case 8: if (tablero[2][1]=='8'){
                            tablero[2][1] = 'X';
                            turno=2;
}
                        else{
                        printf("Este espacio esta en uso seleccione otro, Presione enter.");
                        getch(); system("cls");
                        turno=1;

}
                break;


                case 9: if (tablero[2][2]=='9'){
                            tablero[2][2] = 'X';
                            turno=2;
}

                        else{
                        printf("Este espacio esta en uso seleccione otro, Presione enter.");
                        getch(); system("cls");
                        turno=1;

}
                break;


                default: printf("Por favor, ingrese un numero del tablero. Presione enter para comenzar.");
                         turno=1;
                        getch();
                        system("cls");

            }

               proyectar_tablero();
               jugador_ganador_X();

               if(victoria==1){

                return jugador_ganador_O();
               }

            }

    if(turno==2){

     //Jugada de bloqueo
    // while(turno==2){
        printf("Turno de la computadora..");
        Sleep(1000);  // El sleep funciona como el delay de Qbasic y pascal
        system("cls");
        system("color F");

        srand(time(NULL));
        int posicion_pc= 1+ rand()%9;  // Formula: Alcanze inicial + "rand" por el modulo del alcanze final

    switch(posicion_pc){

       case 1:
          if(tablero[0][0]=='1'){
            tablero[0][0]='O';
            turno=1;}
          else{
            turno=2;}

      break;


      case 2:
        if(tablero[0][1]=='2'){
            tablero[0][1]='O';
            turno=1;
        }
        else{
            system("cls");
            turno=2;
        }

       break;

        case 3:
        if(tablero[0][2]=='3'){
            tablero[0][2]='O';
            turno=1;
        }
        else{
            system("cls");
            turno=2;
        }

       break;

        case 4:
        if(tablero[1][0]=='4'){
            tablero[1][0]='O';
            turno=1;
        }
        else{
            system("cls");
            turno=2;
        }

       break;

        case 5:
        if(tablero[1][1]=='5'){
            tablero[1][1]='O';
            turno=1;
        }
        else{
            system("cls");
            turno=2;
        }

       break;

        case 6:
        if(tablero[1][2]=='6'){
            tablero[1][2]='O';
            turno=1;
        }
        else{
            system("cls");
            turno=2;
        }

       break;

        case 7:
        if(tablero[2][0]=='7'){
            tablero[2][0]='O';
            turno=1;
        }
        else{
            system("cls");
            turno=2;
        }

       break;

        case 8:
        if(tablero[2][1]=='8'){
            tablero[2][1]='O';
            turno=1;
        }
        else{
            system("cls");
            turno=2;
        }

       break;

        case 9:
        if(tablero[2][2]=='9'){
            tablero[2][2]='O';
            turno=1;
        }
        else{
            system("cls");
            turno=2;
        }

       break;

        }
     proyectar_tablero();
    }
}

void jugador_ganador_O_pc(){
      for(int b=0 ; b<3 ; b++){
            if( tablero[b][0]=='O' && tablero[b][1]=='O' && tablero[b][2]=='O' ) {  //Condicion ganadora de "O"
                cout<<"¡Ha ganado la computadora!"<<endl;
                cout<<"Jugador: "<<nombre[1]<< " (X). Perdiste :( "<<endl;
                victoria=2; break;

                }

    else if( tablero[0][b]=='O' && tablero[1][b]=='O' && tablero[2][b]=='O' ) {
            cout<<"¡Ha ganado la computadora!"<<endl;
            cout<<"Jugador: "<<nombre[1]<< " (X). Perdiste :( "<<endl;
            victoria=2; break;
            }

            }

         if ( tablero[0][0]=='O' && tablero[1][1]=='O' && tablero[2][2]=='O') {
            cout<<"¡Ha ganado la computadora!"<<endl;
            cout<<"Jugador: "<<nombre[1]<< " (X). Perdiste :( "<<endl;
            victoria=2;
            }


    else if ( tablero[2][0]=='O' && tablero[1][1]=='O' && tablero[0][2]=='O') {
            cout<<"¡Ha ganado la computadora!"<<endl;
            cout<<"Jugador: "<<nombre[1]<< " (X). Perdiste :( "<<endl;
            victoria=2;

            }



}


void empate_pc(){

 if(tablero[0][0]!='1' && tablero[0][1]!='2' && tablero[0][2]!='3' && tablero[1][0]!='4'&& tablero[1][1]!='5'&&
    tablero[1][2]!='6'&& tablero[2][0]!='7'&& tablero[2][1]!='8'&& tablero[2][2]!='9'){

         victoria=3;
         printf("¡Ha sido un empate!\n\n");
         printf("¡Si quieres volver a jugar, Vuelve a ejecutar el programa!\n\n");
         if(victoria==3){
                proyectar_tablero();
            exit(-1);

         }
 }


}





int main()    //Desde aqui inicia el programa
{
        system("color F");          //Configuracion SYSTEM para cambio de color Con ayuda del CMD
        setlocale(LC_ALL,"spanish");


        system("cls");

            cout<<"Bienvenido a Tic Tac Toe, el juego de equis y cero\n\n";
            cout<<"Instrucciones: \n 1. El jugador 1 siempre será x y el jugador 2 siempre será 0\n 2. El número que está en el tablero representa la posición en donde se agregan las fichas.\n 3. Cuando ingrese su nombre, No escriba signos.\n 4. No escribir letras a la hora de colocar su ficha.\n\n";


    while(opcion==0 || opcion>=3){

            printf("Usted puede tomar dos opciones: \n 1) Jugador VS Jugador \n 2) Jugador VS Maquina\n\nTome una opción: ");
            cin>>opcion;
            cout<<"\n\n";

     if(opcion==0 || opcion >=3){
            system("cls");
               printf("Por favor, ingrese un numero valido ( 1 / 2)\n\n");

            }

    }


    switch(opcion){

        case 1:
               for(int contador_nombre=1;contador_nombre<3;contador_nombre++){   // utilizado para almacenar el nombre de los jugadores 1 y 2

                    printf("Jugador %d Ingrese su nombre: ",contador_nombre);
                    cin>>nombre[contador_nombre];
}


                   cout<<"\n\n";
                   cout<<"¿Quien ira primero?\n\n1) Jugador: "<<nombre[1]<<" ( X )\n\n"<<"2) Jugador: "<<nombre[2]<<" ( O )"<<"\n\nEscriba el numero de quien comenzará: ";
                   cin>>turno;


    if(turno>=3){
           do{
               printf("Por favor ingrese un numero valido ( 1 / 2 ): ");
               cin>>turno;
               system("cls");

             } while(turno>=3);}

               cout<<"\n";
               cout<<"El juego ya puede empezar, Presione enter para comenzar."<<endl;


               proyectar_tablero();
               getch();              // Detiene por momento la pantalla luego de un enter

               system("cls");

               proyectar_tablero();
               empate();


          for( int contador=0;contador<8;contador++){

               cambio_jugador();
               jugador_ganador_O();
               empate();

                   if(victoria==1){
                    printf("\n\n¿Quiere volver a jugar? ¡Ejecuta nuevamente el programa! Presione enter para continuar");
                    break;

               }

               if(victoria==2){
                    printf("\n\n¿Quiere volver a jugar? ¡Ejecuta nuevamente el programa! Presione enter para continuar");
                    break;
               }

          }
              getch();
              system("cls");
    break;


    case 2:



                 printf("Ingrese su nombre ( Jugador 1) : ");
                 cin>>nombre[1];

                 cout<<"¿Quién comenzara primero?\n\n1. "<<nombre[1]<<"\n2. Computadora\n\nTome una opcion: ";
                 cin>>turno;
                   proyectar_tablero();

                 printf("El juego ya puede empezar, Presione enter para continuar");
                 getch();

                  // Detiene por momento la pantalla luego de un enter

               system("cls");

               proyectar_tablero();


    while(victoria!=1 || victoria!=2 || victoria!=3){

            cambio_jugador_pc();
            jugador_ganador_O_pc();

            if(victoria==3){
            empate_pc();
            }


            if(victoria==1){
                exit(-1);
            }

            if(victoria==2){
                exit(-1);
            }
     }
    break;

    }
                    return 0;
}
