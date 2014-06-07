#include <iostream>
#include "Application.hpp"
#include "MappingConfiguration.hpp"

void waitForExit();

/*
 * @author: Grzegorz Mirek
*/
void main() {
	Application application(std::make_shared<MappingConfiguration>());
	application.start();
	waitForExit();
	application.end();
}

void waitForExit() {
	std::cout << "Press Enter to exit..." << std::endl;
	std::cin.get();
}