#include "FtReplace.hpp"  
	
FtReplace::FtReplace()
{
	
}
	
FtReplace::~FtReplace()
{
	
}

int createOutputFile(std::string fileName, std::string& newFileName)
{
	std::ofstream newFile;

	newFileName = fileName.append(REPLACE_EXT);
	newFile.open(newFileName.c_str());
	newFile.close();
	return (0);
}

int FtReplace::ftReplace(std::string s1, std::string s2, std::string fileName)
{
	std::string newFileName;
	std::string line;
	std::ifstream ifile;
	std::ofstream ofile;
	size_t i;

	if(createOutputFile(fileName, newFileName))
		return (ErrorHandler::throwError(CANNOT_CREATE_FILE));
	ifile.open(fileName.c_str());
	ofile.open(newFileName.c_str());
	while (std::getline(ifile, line))
	{
		i = 0;
		while ((i = line.find(s1, i) != std::string::npos))
		{
			std::cout << "i: " << i << std::endl;
			line.erase(i, s1.length());
			line.insert(i, s2);
			i++;
		}
		ofile << line << std::endl;
	}
	return (0);
}
