#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "ProdigalPlugin.h"


void ProdigalPlugin::input(std::string file) 
{
 inputfile = file;
}

void ProdigalPlugin::run() {
   
}

void ProdigalPlugin::output(std::string file) {
	std::string command;
	command = "prodigal -i "+inputfile+" -o "+file;
 std::cout << command << std::endl;
 system(command.c_str());
}

PluginProxy<ProdigalPlugin> ProdigalPluginProxy = PluginProxy<ProdigalPlugin>("Prodigal", PluginManager::getInstance());
