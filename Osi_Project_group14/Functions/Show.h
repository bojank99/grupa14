#ifndef Show_H
#define Show_H

// Header za funkcije za prikaz, ispisivanje i tako to


void head(char*);				//kao neki naslov
void showOptions(char*);     	// za prikaz opcija na pocetku i izbor opcije
void chooseOption(char []);			//izbor opcije na meniju na pocetku i kontrola greske pri unosu

int checkUserData(char*, char*);			// za provjeru unesenih podataka u users.txt
void logInForm(char*);	//obicna forma za prijavljivanje

//funkcija vraca 1 ako je korisnik uspjesno prijavljen
//ili 0 ako korisnik nije registrovan
//prima ime grada
int userLogIn(char[]);
void guestLogIn();			// treba da generise random guest usrname (npr guest1056) i samo prikazuje dogadjaje

void adminLayout();			//prikazi za razlicite tipove korisnika (guest je neregistrovan)
void userLayout();
void guestLayout();
void registerLayout(char[]);		//prikaz za registraciju i to


//Ispisuje da ne postoji korisnik sa datim imenom
//ako korisnik hoce da pokusa ponovo vrati 1
//u suprotnom vrati 0
int errorUnreg();

//pogresna sifra
//ako korisnik hoce da pokusa ponovo vrati 1
//u suprotnom vrati 0
int errorWrong();

//kao sto sam naziv kaze
//ucitava sifru ali u formatiranom obliku
//prima string
void readPassword(char*);

void faq();					//FAQ (mozda, da ima kao opcija)


#endif
