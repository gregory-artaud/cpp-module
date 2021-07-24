#include "ErrorHandler.hpp"
#include "FtReplace.hpp"

bool doFileExists(const std::string& filePath)
{
	std::ifstream ifile;

	ifile.open(filePath.c_str());
	if (ifile)
	{
		ifile.close();
		return (true);
	}
	return (false);
}

int main(int argc, char** argv)
{
	ErrorHandler ih(argc, argv);
	std::string s1;
	std::string s2;
	std::string fileName;

	if (ih.checkArgs())
		return (ih.getErrorCode());
	s1 = argv[1];
	s2 = argv[2];
	fileName = argv[3];
	if (!s1.length() || !s2.length())
		return (ErrorHandler::throwError(EMPTY_ARG));
	if (!doFileExists(fileName))
		return (ErrorHandler::throwError(FILE_DO_NOT_EXISTS));
	FtReplace::ftReplace(s1, s2, fileName);
	return (EXIT_SUCCESS);
}
