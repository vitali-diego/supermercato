#include <iostream>
#include <string>
using namespace std;

struct prodotto {
		string nome;
		string categoria;
		float prezzo;
   };
   
   
//aggiungi variabili e dimensione una alla volta
void aggiungi (prodotto y,prodotto x[],int &d){
	prodotto c;
	
	cout<<"inserisci il nome del prodotto :";
	cin>>c.nome;
	cout<<endl;
	cout<<"inserisci la categoria del prodotto :";
	cin>>c.categoria;
	cout<<endl;
	cout<<"inserisci il prezzo del prodotto :";
	cin>>c.prezzo;
	cout<<endl;
	x[d]=c;
	
}




void visualizza (prodotto x[], int d){
	int i = 0;
	while (i<d){
		cout<<"inserisci il nome del prodotto :"<<x[i].nome;
		cout<<endl;
		cout<<"inserisci la categoria del prodotto :"<<x[i].categoria;
		cout<<endl;
		cout<<"inserisci il prezzo del prodotto :"<<x[i].prezzo;
		cout<<endl;
		i++;
	}
	
	
	
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
	prodotto sup[100];
	int d = 0;
	int n=0;
	int opzione;
	prodotto c;
	do{
		//visualizzazione voci
		cout<<"1 - inserimento"<<endl;
		cout<<"2 - visualizza"<<endl;
		cout<<"3 - cerca"<<endl;
		cout<<"4 - cancella"<<endl;
		cout<<"5 - modifica"<<endl;
		cout<<"0 - esci"<<endl;
		
		cin>>opzione;
		
		switch(opzione){
			case 1:
				aggiungi( c, sup, d);
				d++;
				break;
			case 2:
			    
				visualizza(sup , d );
				break;
			case 3:
			    
			//	cerca(,prodotti, int d = 100);
				break;
			case 4:
			    
			//	aggiungi(,prodotti, int d = 100);
				break;
			case 5:
			    
			//	aggiungi(,prodotti, int d = 100);
				break;
				
		}
		
	}while(opzione!=0);
	
	
    return 0;
}
//{}