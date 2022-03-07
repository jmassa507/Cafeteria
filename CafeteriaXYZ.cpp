#include <iostream>
#include <windows.h>
#include <thread>
#include <chrono>

using namespace std;
using namespace std;
using namespace std::this_thread;
using namespace std::chrono;

/*Tarea grupal: Cafeteria XYZ*/
/*Integrantes: Juan Massa, David Lopez, Israel Castillo, Luis Zhang, Saul Rojas*/

int main(){
    int hr, min, sec, m=0, m1, fin=0;
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
        system("cls");      
        cout<< "Mesa numero: "<<m<<"  "<< "su orden estara lista en: "<<endl;
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

	return 0;
}
