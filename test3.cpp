/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test3.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 19:02:13 by kahmada           #+#    #+#             */
/*   Updated: 2024/09/27 19:06:56 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Une classe peut contenir des attributs (variables) et des méthodes (fonctions) qui définissent le comportement des objets.
#include <iostream>
using namespace std;

class Voiture {
public:
    string marque;
    string modele;
    int annee;
    void afficherDetails() {
        cout << "Marque: " << marque << ", Modèle: " << modele << ", Année: " << annee << endl;
    }
};
int main() {
    Voiture maVoiture;
    maVoiture.marque = "Toyota";
    maVoiture.modele = "Corolla";
    maVoiture.annee = 2020;
    maVoiture.afficherDetails();

    return 0;
}

