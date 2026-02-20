#include <iostream>
#include <string>
using namespace std;

struct prodotto {
		string nome;
		string categoria;
		float prezzo;
   };
   
   
   
void aggiungi (prodotto y,prodotto x[],int d){
	
	
	
}




void visualizza (prodotto x[], int d){
	
	
	
	
}



void cerca (prodotto y, prodotto x[], int d, int &posizione){
	
	
	
	
}



bool cancella (prodotto y, prodotto x[], int d ){
	
	
	
}



bool modifica (prodotto y, prodotto x[], int d ){
	
	
	
}



int main()
{
   // crea una struttura con tre campi nome,prodotto,prezzo,categoria individua prodotto e array di prodotti  
	int prodotti[100];
	int n=0;
	int opzione;
	do{
		//visualizzazione voci
		cout<<"1 - inserimento"<<endl;
		cout<<"2 - visualizza"<<endl;
		cout<<"3 - cerca"<<endl;
		cout<<"4 - cancella"<<endl;
		cout<<"5 - modifica"<<endl;
		cout<<"6 - esci"<<endl;
		
		cin>>opzione;
		
		switch(opzione){
			case 1:
			    
				aggiungi(,prodotti[], int d = 100);
				break;
			case 2:
			    
				visualizza(prodotti[], int d = 100);
				break;
			case 3:
			    
				cerca( prodotti[], int d = 100);
				break;
			case 1:
			    
				aggiungi(,prodotti[], int d = 100);
				break;
			case 1:
			    
				aggiungi(,prodotti[], int d = 100);
				break;
			case 6:
				break;	
				
		}
		
	}while(opzione!=0);
	
	
    return 0;
}
//{}