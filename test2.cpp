/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 18:03:35 by kahmada           #+#    #+#             */
/*   Updated: 2024/09/27 18:07:33 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
using namespace std;

int main()
{
    int* ptr = nullptr;//initialiser le pointeur avec NULL
    ptr = new int;
    if (ptr == nullptr) {
        cout << "Erreur d'allocation mémoire." << endl;
        return 1;
    }
    *ptr = 42;
    cout << "La valeur de l'entier alloué est: " << *ptr << endl;
    delete ptr;
    ptr = nullptr;
    return 0;
}
