/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tborges- <tborges-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 13:18:10 by tborges-          #+#    #+#             */
/*   Updated: 2025/05/13 13:31:48 by tborges-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

std::string replaceAllOccurrences(const std::string &content,
	const std::string &s1, const std::string &s2)
{
	std::string result;
	std::string::size_type pos = 0;
	std::string::size_type found;
	if (s1.empty())
		return (content);
	while ((found = content.find(s1, pos)) != std::string::npos)
	{
		result += content.substr(pos, found - pos);
		result += s2;
		pos = found + s1.length();
	}
	result += content.substr(pos);
	return (result);
}

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "Usage: ./SedIsForLosers <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::ifstream inputFile(filename.c_str());
	if (!inputFile)
	{
		std::cerr << "Error: Cannot open input file: " << filename << std::endl;
		return (1);
	}
	std::string line;
	std::string fullContent;
	while (std::getline(inputFile, line))
	{
		fullContent += line;
		fullContent += "\n";
	}
	inputFile.close();
	std::string newContent = replaceAllOccurrences(fullContent, s1, s2);
	std::ofstream outputFile((filename + ".replace").c_str());
	if (!outputFile)
	{
		std::cerr << "Error: Cannot write to output file." << std::endl;
		return (1);
	}
	outputFile << newContent;
	outputFile.close();
	std::cout << "File created: " << filename << ".replace" << std::endl;
	return (0);
}
