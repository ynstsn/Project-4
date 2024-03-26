#include <iostream>
#include <cmath>
#include <chrono>
#include <thread>


int main(){

    int tour;
    int nombreAllumettes;
    int allumetteRetire;
    int mode;
    srand(time(0));

    std:: cout << "1.Mode Joueur 1 VS Joueur 2 " << "\n";
    std:: cout << "2.Mode Joueur 1 VS BOT " << "\n";
    std:: cout << "3.Mode BOT VS BOT " << "\n";
    std:: cout << "Entre un chiffre (1 ,2 ou 3) : ";
    std::cin >> mode;

    while(mode > 3){
        std:: cout <<"Il y a que 3 mode : ";
        std:: cin >> mode;
    }

    if (mode == 1) {

        std:: cout << "Bienvenue dans le mode Joueur 1 VS joueur 2" << "\n";

        std::cout << "Entrer un nomnre d'allumettes : ";
        std::cin >> nombreAllumettes;

        while (nombreAllumettes > 30) {
            std::cout << "Le nombre maximum est 30 rechoisie : ";
            std::cin >> nombreAllumettes;
        }
        std::cout << "Vous avez decide de jouer avec : " << nombreAllumettes << " Allumettes" << "\n";

        while (nombreAllumettes > 0) {
            tour = tour + 1;
            std::cout << "Vous etes au tour : " << tour << "\n";
            std::cout << "Joueur 1 enleve allumette (1 , 2 ou 3) : ";
            std::cin >> allumetteRetire;
            while (allumetteRetire > 3) {
                std::cout << "Le nombre maximum d'allumettes retirable est de 3 : ";
                std::cin >> allumetteRetire;
            }
            std::cout << "Le joueur 1 a retire : " << allumetteRetire << " allumettes" << "\n";
            nombreAllumettes = nombreAllumettes - allumetteRetire;
            std::cout << "Nombre allumettes restantes : " << nombreAllumettes << "\n";

            std::cout << "Joueur 2 enleve allumette (1 , 2 ou 3) : ";
            std::cin >> allumetteRetire;
            while (allumetteRetire > 3) {
                std::cout << "Le nombre maximum d'allumettes retirable est de 3 : ";
                std::cin >> allumetteRetire;
            }
            std::cout << "Le joueur 2 a retire : " << allumetteRetire << " allumettes" << "\n";
            nombreAllumettes = nombreAllumettes - allumetteRetire;
            std::cout << "Nombre allumettes restantes : " << nombreAllumettes << "\n";
        }
        std::cout << "La personne ayant retire la dernier allumettes a perdu ";
    }


    if (mode == 2){
        std:: cout << "Bienvenue dans le mode Joueur 1 VS BOT" << "\n";

        std::cout << "Entrer un nomnre d'allumettes : ";
        std::cin >> nombreAllumettes;

        while (nombreAllumettes > 30) {
            std::cout << "Le nombre maximum est 30 rechoisie : ";
            std::cin >> nombreAllumettes;
        }
        std::cout << "Vous avez decide de jouer avec : " << nombreAllumettes << " Allumettes" << "\n";

        while (nombreAllumettes > 0){
            tour = tour + 1;
            std::cout << "Vous etes au tour : " << tour << "\n";
            std::cout << "Joueur 1 enleve allumette (1 , 2 ou 3) : ";
            std::cin >> allumetteRetire;
            while (allumetteRetire > 3) {
                std::cout << "Le nombre maximum d'allumettes retirable est de 3 : ";
                std::cin >> allumetteRetire;
            }
            std::cout << "Le joueur 1 a retire : " << allumetteRetire << " allumettes" << "\n";
            nombreAllumettes = nombreAllumettes - allumetteRetire;
            std::cout << "Nombre allumettes restantes : " << nombreAllumettes << "\n";

            std::cout << "BOT enleve allumette (1 , 2 ou 3) : " << "\n";
            allumetteRetire = (1 + rand() % 3);
            std:: cout << "Le bot retire : " << allumetteRetire << " allumettes" << "\n";
            nombreAllumettes = nombreAllumettes - allumetteRetire;
            std::cout << "Nombre allumettes restantes : " << nombreAllumettes << "\n";
        }
        std::cout << "La personne ou L'IA  ayant retire la dernier allumettes a perdu ";
    }

    if (mode == 3){
        std:: cout << "Bienvenue dans le mode BOT VS BOT" << "\n";

        std::cout << "Entrer un nomnre d'allumettes : ";
        std::cin >> nombreAllumettes;

        while (nombreAllumettes > 30) {
            std::cout << "Le nombre maximum est 30 rechoisie : ";
            std::cin >> nombreAllumettes;
        }
        std::cout << "Vous avez decide de jouer avec : " << nombreAllumettes << " Allumettes" << "\n";

        while ( nombreAllumettes > 0){
            std::cout << "BOT 1 enleve allumette (1 , 2 ou 3) : " << "\n";
            allumetteRetire = (1 + rand() % 3);
            std:: cout << "Le bot retire : " << allumetteRetire << " allumettes" << "\n";
            nombreAllumettes = nombreAllumettes - allumetteRetire;
            std::cout << "Nombre allumettes restantes : " << nombreAllumettes << "\n";

            std::this_thread::sleep_for(std::chrono::seconds(2)); // Attendre 2 second

            std::cout << "BOT 2 enleve allumette (1 , 2 ou 3) : " << "\n";
            allumetteRetire = (1 + rand() % 3);
            std:: cout << "Le bot retire : " << allumetteRetire << " allumettes" << "\n";
            nombreAllumettes = nombreAllumettes - allumetteRetire;
            std::cout << "Nombre allumettes restantes : " << nombreAllumettes << "\n";
            std::this_thread::sleep_for(std::chrono::seconds(2));
        }

        std::cout << "L'IA  ayant retire la dernier allumettes a perdu ";
    }
    return 0;
}
