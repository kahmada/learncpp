/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kahmada <kahmada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:43:07 by kahmada           #+#    #+#             */
/*   Updated: 2024/09/28 12:59:49 by kahmada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
// using namespace std;

int main()
{
    int num1, num2, product;
    std::cout << "Entrez le premier nombre: ";
    std::cin >> num1;

    std::cout << "Entrez le second nombre: ";
    std::cin >> num2;
    product = num1 * num2;
    std::cout << "Le produit de " << num1 << " et " << num2 << " est: " << product << std::endl;

    return 0;
}
int main()
{
    int n1, n2, somme;
    std::cout << "ENTRER LE PREMIER N: ";
    std::cin>> n1;
    std::cout <<"ENTRER LE @EM N: ";
    std::cin>>n2;
    somme = n1 * n2;
    std::cout << "the result de" <<n1 << "et " <<n2 << "est " <<somme << std::endl;
    return 0;
}