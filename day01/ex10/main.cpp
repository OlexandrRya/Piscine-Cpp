/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 20:03:13 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/02 20:17:23 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cerrno>
#include <string.h>
#include <sys/stat.h>


static void readFromSreamAndWriteToTerm(std::istream &inputStream) {
    std::cout << inputStream.rdbuf();
}

int main(int argc, char**argv)
{
    if (argc == 1) {
        readFromSreamAndWriteToTerm(std::cin);
    }
    else {
        for (int i = 1; i < argc; i++) {
            std::string file_name(argv[i]);

            if (!file_name.compare("-") || !file_name.compare("--")) {
                readFromSreamAndWriteToTerm(std::cin);
            }
            else {
                std::ifstream iFileStream(file_name.c_str());
                if (iFileStream) {
                    readFromSreamAndWriteToTerm(iFileStream);
                }
                else {
                    std::cout << "ft_cat: " 
                        << file_name << ": " 
                        << strerror(errno) 
                        << std::endl;
                }
                iFileStream.close();
            }
        }
    }
    return 0;
}