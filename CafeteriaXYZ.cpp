<<<<<<< HEAD
#include <iostream>
#include <windows.h>
#include <thread>
#include <chrono>

using namespace std;
using namespace std::this_thread;
using namespace std::chrono;

/*Tarea grupal: Cafeteria XYZ
1) El cliente al llegar, oprime un botón en donde se solicita el ingreso al establecimiento y se abra la puerta.
2) Una vez ingresa, se procede a asignarle el número de mesa (Por orden de llegada).
3) El cliente procede a seleccionar del menú alguno de los siguientes platos: 
-Plato del día 
-Recomendación del Chef
- Pizza Napolitana.
4) Aparece un contador con una cuenta regresiva en donde muestra el tiempo de espera para que la orden esté lista y varía de la siguiente forma: 
- Plato del día: 3 minutos.
- Recomendación del Chef: 5 minutos
- Pizza Napolitana: 2 minutos.
5) Luego de esto debe aparecer un mensaje informándole al cliente que su pedido ha sido entregado.*/
/*Integrantes: Juan Massa, David Lopez, Israel Castillo, Luis Zhang, Saul Rojas*/

int main(){
    int hr, min, sec, m=0, m1=1, fin=0, eleccion, x, o, p;
	char puerta;

        Inicio:
		cout<<"\nBienvenido a la Cafetria XYZ.\nPresione: \na - para abrir la puerta\n";
		cin>>puerta;
		system("cls");

		if (puerta==('a')){ 
            m=m+m1;
            if (m>=4){
            cout<< "Lamentamos las molestias pero no nos quedan mesas disponibles"<<endl;
            }
		}else{
			cout<<"\nBoton incorrecto, si desea entrar presione \"a\"";
            goto Inicio;
		}
            
    do{
    m:
	printf("******MENU DEL DIA******\n");
	printf("1.-PLATO DEL DIA\n");
	printf("2.-RECOMENDACION DEL CHEF\n");
	printf("3.-PIZZA NAPOLITANA\n");
    cin>>eleccion;
	
    switch(eleccion){
         case 1: 
	    printf("El tiempo de espera para este platillo es de 3 minutos desea ordenar este platillo? \nSi->1 \nNo->2\n");
        cin>>o;
        if (o==1){
            hr=00, min=02, sec=60;
            goto temporizador;
        }else if (o==2){
            system("cls");
            goto m;
        }
        break;
	         
	    case 2: 
	    printf("El tiempo de espera para este platillo es de 3 minutos desea ordenar este platillo? \nSi->1 \nNo->2\n");
        cin>>o;
        if (o==1){
            hr=00, min=04, sec=60;
            goto temporizador;
        }else if (o==2){
            system("cls");
            goto m;
        } 
	    break;
	         
	    case 3: 
	    printf("El tiempo de espera para este platillo es de 3 minutos desea ordenar este platillo? \nSi->1 \nNo->2\n");
        cin>>o;
        if (o==1){
            hr=00, min=01, sec=60;
            goto temporizador;
        }else if (o==2){
            system("cls");
            goto m;
        }
	    break;

        default:
        cout<< "Opcion invalida favor de intentarlo nuevamente"<<endl;
        goto m;
        break;
	    }

    temporizador:
    do{
        system("cls");      
        cout<< "Mesa numero: "<<m<<" "<< "su orden estara lista en: "<<endl;
        cout<< hr << ":" << min << ":" << sec <<endl;
        sleep_for(seconds(1));
        sec--;

        if (hr==00 && min==00 && sec==00){
        fin=1;
        }

        if (min==00 && sec==00){
            hr--;
        }
                    
        if (sec==00){
            min--;
            sec=59;
        }

        }while (fin==0);

    system("cls");
    cout<< "Mesa numero: "<<m<<"  "<< "su orden esta lista"<<endl;
    cout<< "00:00:00"<<endl;

    //prueba de mesa
    cout<< "Desea ir con el siguiente cliente \nSi->1 \nNo->2?"<<endl;
    cin>>p;

    }while (x!=0);

    if (p==1){
            fin=0;
            system("cls");
            goto Inicio;
        }else if(p==2){
            x==1;
            a:
            cout<< "Gracias por su atencion"<<endl;
        }
    
	return 0;
}
=======
#include <iostream>
#include <windows.h>
#include <thread>
#include <chrono>

using namespace std;
using namespace std;
using namespace std::this_thread;
using namespace std::chrono;

/*Tarea grupal: Cafeteria XYZ
1) El cliente al llegar, oprime un botón en donde se solicita el ingreso al establecimiento y se abra la puerta.
2) Una vez ingresa, se procede a asignarle el número de mesa (Por orden de llegada).
3) El cliente procede a seleccionar del menú alguno de los siguientes platos: 
-Plato del día 
-Recomendación del Chef
- Pizza Napolitana.
4) Aparece un contador con una cuenta regresiva en donde muestra el tiempo de espera para que la orden esté lista y varía de la siguiente forma: 
- Plato del día: 3 minutos.
- Recomendación del Chef: 5 minutos
- Pizza Napolitana: 2 minutos.
5) Luego de esto debe aparecer un mensaje informándole al cliente que su pedido ha sido entregado.*/
/*Integrantes: Juan Massa, David Lopez, Israel Castillo, Luis Zhang, Saul Rojas*/

int main(){
    int hr, min, sec, m=0, m1, fin=0;
    int eleccion, num1, num2, num3;
	char puerta;

        Inicio:
		cout<<"\nBienvenido a la Cafetria XYZ.\nPresione \na - para abrir la puerta\n";
		cin>>puerta;
		system("cls");

		if (puerta==('a'))	{ 
		    m++;
            m=m+m1;
            if (m>=4){
            cout<< "Lamentamos las molestias pero no nos quedan mesas disponibles"<<endl;
        
            }
		}else{
			cout<<"\nBoton incorrecto, si desea entrar presione \"a\"";
            goto Inicio;
		}
	do{
    m:
	printf("******MENU DEL DIA******\n");
	printf("1.-PLATO DEL DIA\n");
	printf("2.-RECOMENDACION DEL CHEF\n");
	printf("3.-PIZZA NAPOLITANA\n");
    cin>>eleccion;
	
    switch(eleccion){
         case 1: 
	    printf("El tiempo de espera para este platillo es de 3 minutos desea ordenar este platillo? \nSi->1 \nNo->2\n");
        cin>>o;
        if (o==1){
            hr=00, min=02, sec=60;
            goto temporizador;
        }else if (o==2){
            system("cls");
            goto m;
        }
        break;
	         
	    case 2: 
	    printf("El tiempo de espera para este platillo es de 3 minutos desea ordenar este platillo? \nSi->1 \nNo->2\n");
        cin>>o;
        if (o==1){
            hr=00, min=04, sec=60;
            goto temporizador;
        }else if (o==2){
            system("cls");
            goto m;
        } 
	    break;
	         
	    case 3: 
	    printf("El tiempo de espera para este platillo es de 3 minutos desea ordenar este platillo? \nSi->1 \nNo->2\n");
        cin>>o;
        if (o==1){
            hr=00, min=01, sec=60;
            goto temporizador;
        }else if (o==2){
            system("cls");
            goto m;
        }
	    break;

        default:
        cout<< "Opcion invalida favor de intentarlo nuevamente"<<endl;
        goto m;
        break;
	    }
            
   temporizador:
    do{
        system("cls");      
        cout<< "Mesa numero: "<<m<<" "<< "su orden estara lista en: "<<endl;
        cout<< hr << ":" << min << ":" << sec <<endl;
        sleep_for(seconds(1));
        sec--;

        if (hr==00 && min==00 && sec==00){
        fin=1;
        }

        if (min==00 && sec==00){
            hr--;
        }
                    
        if (sec==00){
            min--;
            sec=59;
        }

        }while (fin==0);

    }while (x!=0);

	return 0;
}














>>>>>>> dec05c07db80f11b3d5d4ee0371e211feaefc6fe
