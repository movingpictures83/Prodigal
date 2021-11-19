#ifndef PRODIGALPLUGIN_H
#define PRODIGALPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>
#include <vector>

class ProdigalPlugin : public Plugin
{
public: 
 std::string toString() {return "Prodigal";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;
};

#endif
