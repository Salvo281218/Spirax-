#include<iostream>
using namespace std;

int main(){
	double somma=0;
	double risSalvo=0;
	double risWalter=0;
	double risIvan=0;
//	double risMarco=0;

	int Salvo=0;
	cout<<"Salvo quante cose in comune hai comprato al supermercato? "<<endl;
	cin>>Salvo;
	double a[Salvo];
	for(int i=0;i<Salvo;i++){
		cout<<"Inserisci prezzo:  ";
		cin>>a[i];
		somma=somma+a[i];
		risSalvo=somma/3;
		cout<<endl;
	}
	cout<<"Ecco la quota da versare a testa: "<<risSalvo;
	cout<<endl<<endl;
	somma=0;

	int Walter=0;
	cout<<"Walter, quante cose in comune hai comprato al supermercato? "<<endl;
	cin>>Walter;
	double b[Walter];
	for(int i=0;i<Walter;i++){
		cout<<"Inserisci prezzo:  ";
		cin>>b[i];
		somma=somma+b[i];
		risWalter=somma/3;
		cout<<endl;
	}
	cout<<"Ecco la quota da versare a testa: "<<risWalter;
	cout<<endl<<endl;
	somma=0;


	int Ivan=0;
	cout<<"Ivan, quante cose in comune hai comprato al supermercato? "<<endl;
	cin>>Ivan;
	double c[Ivan];
	for(int i=0;i<Ivan;i++){
		cout<<"Inserisci prezzo:  ";
		cin>>c[i];
		somma=somma+c[i];
		risIvan=somma/3;
		cout<<endl;
	}
	cout<<"Ecco la quota da versare a testa: "<<risIvan;
	cout<<endl<<endl;
	somma=0;

/*	int Marco=0;
	cout<<"Marco, quante cose in comune hai comprato al supermercato? "<<endl;
	cin>>Marco;
	double d[Marco];
	for(int i=0;i<Marco;i++){
		cout<<"Inserisci prezzo:  ";
		cin>>d[i];
		somma=somma+d[i];
		risMarco=somma/4;
		cout<<endl;
	}
	cout<<"Ecco la quota da versare a testa: "<<risMarco;
	cout<<endl<<endl;
	somma=0;
*/

	double conti1=0;
	double conti2=0;
//	double conti3=0;
	double conti4=0;
//	double conti5=0;
//	double conti6=0;

	conti1=risSalvo-risWalter;
	if(conti1<0)
		cout<<"Salvo deve dare a Walter: "<<conti1<<endl;
	else if(conti1==0)
		cout<<endl;
	else
		cout<<"Walter deve dare a Salvo: "<<conti1<<endl;

	conti2=risSalvo-risIvan;
	if(conti2<0)
		cout<<"Salvo deve dare a Ivan: "<<conti2<<endl;
	else if(conti2==0)
		cout<<endl;
	else
		cout<<"Ivan deve dare a Salvo: "<<conti2<<endl;
/*
	conti3=risSalvo-risMarco;
	if(conti3<0)
		cout<<"Salvo deve dare a Marco: "<<conti3<<endl;
	else if(conti3==0)
		cout<<endl;
	else
		cout<<"Marco deve dare a Salvo: "<<conti3<<endl;
*/
	conti4=risWalter-risIvan;
	if(conti4<0)
		cout<<"Walter deve dare a Ivan: "<<conti4<<endl;
	else if(conti4==0)
		cout<<endl;
	else
		cout<<"Ivan deve dare a Walter: "<<conti4<<endl;
/*
	conti5=risPeppe-risMarco;
	if(conti5<0)
		cout<<"Peppe deve dare a Marco: "<<conti5<<endl;
	else if(conti5==0)
		cout<<endl;
	else
		cout<<"Marco deve dare a Peppe: "<<conti5<<endl;

	conti6=risSimone-risMarco;
	if(conti6<0)
		cout<<"Simone deve dare a Marco: "<<conti6<<endl;
	else if(conti6==0)
		cout<<endl;
	else
		cout<<"Marco deve dare a Simone: "<<conti6<<endl;*/
}


















