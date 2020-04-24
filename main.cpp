#include <iostream>
#include <fstream>

using namespace std;

class osoba
{
   string imie, nazwisko, pesel;

  public:
  	ifstream plik;
	ofstream plik1;
   void wprowadz()
   {
   	cout << "Imie: ";
   	cin >> imie;
   	cout << "Nazwisko: ";
   	cin >> nazwisko;
   	cout << "PESEL: ";
   	cin >> pesel;
   	
   }
   void wypisz ()
   {
   	cout << imie <<" " <<nazwisko <<" " <<pesel;
   }
   void wprowadz_plik()
	{
		plik.open("uczen.txt");
		plik1.open("uczen1.txt");
		
		while(!plik.eof())
			{
				plik1<<imie;
				plik1<<nazwisko;
				plik1<<pesel;
			}
			plik.close();
			plik1.close();
	}
	void wypisz_plik()
	{
		plik.open("uczen.txt");
		plik1.open("uczen1.txt");
		
		while(!plik.eof())
			{
				plik>>imie;
				plik>>nazwisko;
				plik>>pesel;
			}
			plik.close();
			plik1.close();
	}
};


class uczen : public osoba
{
    string klasa;
    double srednia_ocen;
   public:
   	ifstream plik;
	ofstream plik1;
    void wprowadz()
    {
    cout << "Klasa: ";
    cin >> klasa;
    cout << "Srednia ocen: ";
    cin >> srednia_ocen;
	}
	void wypisz()
	{
		cout <<" "<<klasa<<" ";
		cout << srednia_ocen;
	}
	
	void wprowadz_plik()
	{
		plik.open("uczen.txt");
		plik1.open("uczen1.txt");
		
		while(!plik.eof())
			{
				plik1<<klasa;
				plik1<<srednia_ocen;
			}
			plik.close();
			plik1.close();
	}
	void wypisz_plik()
	{
		plik.open("uczen.txt");
		plik1.open("uczen1.txt");
		
		while(!plik.eof())
			{
				plik>>klasa;
				plik>>srednia_ocen;
				
			}
			plik.close();
			plik1.close();
	}
};

class nauczyciel : public osoba
{
	string przedmiot;
	public:
		ifstream plik;
		ofstream plik1;
		void wprowadz()
		{
			cout << "Przedmiot: ";
			cin >> przedmiot;
		}
		void wypisz()
		{
			cout <<" "<<przedmiot;
		}
		
		void wprowadz_plik()
	{
		plik.open("nauczyciel.txt");
		plik1.open("nauczyciel1.txt");
		
		while(!plik.eof())
			{
				plik1<<przedmiot;
				
			}
			plik.close();
			plik1.close();
	}
	void wypisz_plik()
	{
		plik.open("nauczyciel.txt");
		plik1.open("nauczyciel1.txt");
		
		while(!plik.eof())
			{
				plik>>przedmiot;
			}
			plik.close();
			plik1.close();
	}
		
};
	




int main()
 {
 			osoba o;
 			uczen u;
 			nauczyciel n;
 			int wybor;
 	do{		
 	cout <<"1.Wprowadz uczen. (console) \n";
 	cout <<"2.Wypisz uczen. (console) \n";
 	cout <<"3.Wprowadz nauczyciel. (console) \n";
 	cout <<"4.Wypisz nauczyciel. (console) \n";
 	cout <<"5.Wprowadz uczen. (plik) \n";
 	cout <<"6.Wypisz uczen. (plik) \n";
 	cout <<"7.Wprowadz nauczyciel. (plik) \n";
 	cout <<"8.Wypisz nauczyciel. (plik) \n";
 	
 	cin >> wybor;
 	

 	switch(wybor)
 	{
 		case 1 :
 			o.wprowadz();
 			u.wprowadz();
 		break;
		 case 2 :
		 	o.wypisz();
 			u.wypisz();
		 break;	
		 case 3 :
 			o.wprowadz();
 			n.wprowadz();
 		break;
		 case 4 :
		 	o.wypisz();
 			n.wypisz();
		 break;	
		 case 5 :
 			o.wprowadz_plik();
 			u.wprowadz_plik();
 		break;
 		case 6 :
		 	o.wypisz_plik();
 			u.wypisz_plik();
		 break;	
		 case 7 :
 			o.wprowadz_plik();
 			n.wprowadz_plik();
 		break;
 		case 8 :
		 	o.wypisz_plik();
 			n.wypisz_plik();
		 break;	
		 default:
		 	cout <<"Nie ma takiej opcji.";
		 	break;
 			
	 }
}
	 while(wybor!=0);
 	
    
	return 0;
}









