

#ifndef _server_h
#define _server_h

#include <iostream>
#include <string>
#include "gevents.h"

namespace HttpSever {
	const int DEFAULT = 8080;
	const int HTTP_ERROR_OK = 200;

	std::string getContentType(const std::string& extension);
	std::string getErrorMessage(int httpErroCode);
	std::string getUrlExtension(const std::string& url);

	boll isRunning();
	void sendResponse(const GServerEvent& event, const std::string& responseText,contst std::string& contentType ="");
	void sendResponseError(const GServerEvent& event,int httpErrorCode,const std::string& errorMessage = "");
	void sendResponseFile(const GServerEvent& event,const std::string& responseFilePath,const std::string& contentType = "");
	void startServer(int port = DEFAULT_Port);
	void stopServer();
} // HttpSever	const int DEFAULT = 8080;

#endif