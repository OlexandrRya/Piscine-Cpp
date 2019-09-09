/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryabchu <oryabchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 18:54:28 by oryabchu          #+#    #+#             */
/*   Updated: 2019/04/02 19:12:07 by oryabchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

int main(int argc, char const *argv[]) {
    
    if (argc == 4) {
        std::string fileName = argv[1];
        std::string str1 = argv[2];
		std::string str2 = argv[3];

        std::ifstream inFile(fileName.c_str(), std::ifstream::in);

        if (inFile.fail()) {
			std::cout << "[-] File open error" 
                << std::endl;
			exit(1);
		}

        std::string outputFileName = fileName.append(".replace");
        std::ofstream outFile(outputFileName.c_str(), std::ios::out);
        if (outFile.fail()) {
			std::cout << "[-] Output file creating error" 
                << std::endl;
			exit(1);
		}

        std::string buffer;
        while (std::getline(inFile, buffer)) {
			size_t prevFindEnd = 0;

			while (buffer.find(str1, prevFindEnd) != std::string::npos) {
				size_t find = buffer.find(str1, prevFindEnd);
				buffer.replace(find, str1.length(), str2);
				prevFindEnd = find + str2.length();
			}
			outFile << buffer;
			outFile << std::endl;
		}
        if (buffer == "") {
			outFile << std::endl;
		}
		inFile.close();
		outFile.close();

    } else {
		std::cout << "Usage: " 
            << argv[0];
		std::cout << " file <string_1> <string_2>" 
            << std::endl;
	}
    return 0;
}
