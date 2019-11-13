#include <iostream>
#include <cstring>
#include <cstdlib>
#include <iomanip>
using namespace std;
struct Forward {
	char name[100];
	int age, speed, shot, dribble, passing, header;
	int rating;
};

struct Midfielder {
	char name[100];
	int age, passing, defence, physique, stamina, ball_control;
	int rating;
};

struct Defender {
	char name[100];
	int age, tackling, intercept, passing, physique, speed;
	int rating;
};
struct Goalkeeper {
	char name[100];
	int age, handling, reflex, passing, technique, jump;
	int rating;
};
int start();
char help();
void player(Goalkeeper Soccer);
void player1(Defender Football);
void player2(Midfielder Football2);
void player3(Forward Football3);
int opponents(char opponent[100], Goalkeeper one1, Defender two1, Midfielder three1, Midfielder four1, Forward five1);

int main() {
	Forward Ronaldo;
	strcpy_s(Ronaldo.name, "Cristiano Ronaldo");
	Ronaldo.age = 34; Ronaldo.speed = 90; Ronaldo.shot = 93;
	Ronaldo.dribble = 89; Ronaldo.passing = 82; Ronaldo.header = 96;
	Ronaldo.rating = 90;

	Forward Messi;
	strcpy_s(Messi.name, "Lionel Messi");
	Messi.age = 32; Messi.speed = 87; Messi.shot = 92;
	Messi.dribble = 96; Messi.passing = 93; Messi.header = 85;
	Messi.rating = 91;

	Forward Hazard;
	strcpy_s(Hazard.name, "Eden Hazard");
	Hazard.age = 28; Hazard.speed = 88; Hazard.shot = 90;
	Hazard.dribble = 94; Hazard.passing = 92; Hazard.header = 81;
	Hazard.rating = 89;

	Midfielder Kante;
	strcpy_s(Kante.name, "Ngolo Kante");
	Kante.age = 28; Kante.passing = 85; Kante.defence = 95;
	Kante.physique = 93; Kante.stamina = 89; Kante.ball_control = 83;
	Kante.rating = 89;

	Midfielder Pogba;
	strcpy_s(Pogba.name, "Paul Pogba");
	Pogba.age = 26; Pogba.passing = 91; Pogba.defence = 86;
	Pogba.physique = 85; Pogba.stamina = 84; Pogba.ball_control = 90;
	Pogba.rating = 87;

	Midfielder KDB;
	strcpy_s(KDB.name, "Kevin De Bruyne");
	KDB.age = 28; KDB.passing = 93; KDB.defence = 86;
	KDB.physique = 85; KDB.stamina = 85; KDB.ball_control = 90;
	KDB.rating = 87;

	Midfielder Busquets;
	strcpy_s(Busquets.name, "Sergio Busquets");
	Busquets.age = 31; Busquets.passing = 89; Busquets.defence = 91;
	Busquets.physique = 89; Busquets.stamina = 90; Busquets.ball_control = 84;
	Busquets.rating = 88;

	Defender Ramos;
	strcpy_s(Ramos.name, "Sergio Ramos");
	Ramos.age = 33; Ramos.tackling = 92; Ramos.intercept = 88;
	Ramos.passing = 87; Ramos.physique = 90; Ramos.speed = 86;
	Ramos.rating = 88;

	Defender Virgil;
	strcpy_s(Virgil.name, "Virgil Van Dijk");
	Virgil.age = 28; Virgil.tackling = 90; Virgil.intercept = 87;
	Virgil.passing = 87; Virgil.physique = 91; Virgil.speed = 86;
	Virgil.rating = 88;

	Defender Pique;
	strcpy_s(Pique.name, "Gerard Pique");
	Pique.age = 32; Pique.tackling = 89; Pique.intercept = 86;
	Pique.passing = 88; Pique.physique = 89; Pique.speed = 85;
	Pique.rating = 87;

	Goalkeeper Oblak;
	strcpy_s(Oblak.name, "Jan Oblak");
	Oblak.age = 26; Oblak.handling = 90; Oblak.reflex = 91;
	Oblak.passing = 85; Oblak.technique = 86; Oblak.jump = 88;
	Oblak.rating = 88;

	Goalkeeper DDG;
	strcpy_s(DDG.name, "David De Gea");
	DDG.age = 28; DDG.handling = 86; DDG.reflex = 93;
	DDG.passing = 83; DDG.technique = 88; DDG.jump = 87;
	DDG.rating = 87;

	int result = start();
	char decision;
	if (result == 2) {
		decision = help();
		if (decision == 'y')
			result = start();
		else
			cout << "You have exited the program" << endl;
	}
	char team[100];
	if (result == 1) {
		char play;
		cout << "Enter the name of your team:" << endl;
		cin.ignore(10, '\n');
		cin.getline(team, 100);

		cout << endl;
		int gk, def;

		cout << "Now, you will choose your players from the list below" << endl;
		cout << "Enter the name of the players exactly as given" << endl;
		cout << "Goalkeepers: DDG/Oblak" << endl;
		cin >> gk;
		Goalkeeper one;
		if (gk == 1) {
			player(DDG);
			one = DDG;
		}if (gk == 2) {
			player(Oblak);
			one = Oblak;
		}
		cout << endl;
		cout << "Defenders: Ramos/Virgil/Pique" << endl;
		cin >> def;
		Defender two;
		if (def == 1) {
			player1(Ramos);
			two = Ramos;
		}
		if (def == 2) {
			player1(Virgil);
			two = Virgil;
		}
		if (def == 3) {
			player1(Pique);
			two = Pique;
		}
		cout << endl;
		cout << "Midfielders: Kante/Pogba/KDB/Busquets" << endl;
		Midfielder three;
		int mid1;
		cin >> mid1;
		if (mid1 == 1) {
			player2(Kante);
			three = Kante;
		}
		if (mid1 == 2) {
			player2(Pogba);
			three = Pogba;
		}
		if (mid1 == 3) {
			player2(KDB);
			three = KDB;
		}
		if (mid1 == 4) {
			player2(Busquets);
			three = Busquets;
		}
		cout << endl;

		cout << "Choose another midfielder" << endl;
		Midfielder four;
		int mid2;
		cin >> mid2;
		if (mid2 == 1) {
			player2(Kante);
			four = Kante;
		}
		if (mid2 == 2) {
			player2(Pogba);
			four = Pogba;
		}
		if (mid2 == 3) {
			player2(KDB);
			four = KDB;
		}
		if (mid2 == 4) {
			player2(Busquets);
			four = Busquets;
		}
		cout << endl;

		int fwd;
		Forward five;
		cout << "Forwards: Messi/Hazard/Ronaldo" << endl;
		cin >> fwd;
		if (fwd == 1) {
			player3(Messi);
			five = Messi;
		}
		if (fwd == 2) {
			player3(Hazard);
			five = Hazard;
		}
		if (fwd == 3) {
			player3(Ronaldo);
			five = Ronaldo;
		}
		int total = one.rating + two.rating + three.rating + four.rating + five.rating;
		int average = total / 5;
		cout << "You have registered team " << team << endl;
		cout << "The average rating of your squad is : " << average << endl;
		cout << "Now, choose your opponent:" << endl;
		cout << "1-Atalantis" << endl;
		cout << "2-The Avengers" << endl;
		cout << "3-Invincibles" << endl;
		cout << "4-Wakanda" << endl;
		cout << "5-Titans" << endl;
		Goalkeeper one1; Defender two1; Midfielder three1; Midfielder four1; Forward five1;
		char opponent[100];
		int decide;
		cin >> decide;
		if (decide == 1) {
			strcpy_s(opponent, "Atlantis");
			one1 = DDG; two1 = Ramos; three1 = Kante; four1 = KDB; five1 = Ronaldo;
		}
		if (decide == 2) {
			strcpy_s(opponent, "The Avengers");
			one1 = Oblak; two1 = Virgil; three1 = Pogba; four1 = Busquets; five1 = Messi;
		}
		if (decide == 3) {
			strcpy_s(opponent, "Invincibles");
			one1 = Oblak; two1 = Pique; three1 = KDB; four1 = Busquets; five1 = Hazard;
		}
		if (decide == 4) {
			strcpy_s(opponent, "Wakanda");
			one1 = DDG; two1 = Virgil; three1 = Pogba; four1 = Kante; five1 = Ronaldo;
		}
		if (decide == 5) {
			strcpy_s(opponent, "Titans");
			one1 = DDG; two1 = Ramos; three1 = KDB; four1 = Pogba; five1 = Hazard;
		}
		int ave1 = opponents(opponent, one1, two1, three1, four1, five1);
		cout << "The average rating of the squad is: " << ave1 << endl;
		cout << endl;
		cout << "You will now play against them" << endl;
		srand(10);
		do {
			int random = rand() % (10 - 1) + 1;
			if (random > 3)
				cout << "You won the match!" << endl;
			else
				cout << " Sorry, you lost" << endl;
			cout << "Want to play again?" << endl;
			cin >> play;
		} while (play == 'y');
	}
	system("pause");
	return 0;
}

int start() {
	int choice;
	cout << "Welcome to Dan Manager 2019. Choose from the options what to do:" << endl;
	cout << "1-Register your 5-a-side team" << endl;
	cout << "2-Help on how to play and rules" << endl;
	cout << "3-Exit" << endl;
	cout << "Enter your choice:" << endl;
	cin >> choice;
	return choice;
}
char help() {
	char decision;
	cout << "This is how it goes. You get to create a team of 5-players" << endl;
	cout << "Players are chosen from the list of the best players in the world football" << endl;
	cout << "By default, you choose one forward, two midfielders, a defender and a goalkeeper" << endl;
	cout << "You will play against a random selection of the players from the same list" << endl;
	cout << "You get to see Messi play against Pique or Hazard versus Kante" << endl;
	cout << "Choose wisely" << endl;
	cout << endl;
	cout << "Return to top menu? Enter y to return or no to exit" << endl;
	cin >> decision;
	return decision;
}
void player(Goalkeeper Soccer) {
	cout << "Nice, you chose " << Soccer.name << endl;
	cout << "He's " << Soccer.age << " years old" << ", super shotstopper" << endl;
	cout << Soccer.rating << " rated goalkeeper" << ", really one of the best" << endl;
}
void player1(Defender Football) {
	cout << "Nice, you chose " << Football.name << endl;
	cout << "He's " << Football.age << " years old" << " superb defender" << endl;
	cout << Football.rating << " rated defender" << ", incredible defensive rock!" << endl;
}
void player2(Midfielder Football2) {
	cout << "Nice, you chose " << Football2.name << endl;
	cout << "He's " << Football2.age << " years old" << ", world class midfielder" << endl;
	cout << Football2.rating << " rated player" << ", really one of the best" << endl;
}
void player3(Forward Football3) {
	cout << "Nice, you chose " << Football3.name << endl;
	cout << "He's " << Football3.age << " years old" << ", world class forward" << endl;
	cout << Football3.rating << " rated player" << ", really a dangerous player for any team" << endl;
}
int opponents(char opponent[100], Goalkeeper one1, Defender two1, Midfielder three1, Midfielder four1, Forward five1) {
	cout << "You are going to play against " << opponent <<", these are their players"<< endl;
	cout << "Goalkeeper: " << one1.name << endl;
	cout << "Defender: " << two1.name << endl;
	cout << "Midfielders: " << three1.name << " and " << four1.name << endl;
	cout << "Forward: " << five1.name << endl;
	int total1, ave;
	total1 = one1.rating + two1.rating + three1.rating + four1.rating + five1.rating;
	ave = total1 / 5;
	return ave;
}