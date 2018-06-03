#include "server.h"
#include "file.h"
#include "map.h"
#include "platform.h"
#include "strlib.h"

namespace HttpServer {
	static bool _isRunning = false;
	static Map<std::string, std::string> CONTENT_TYPE_MAP;
	static const std::string CONTENT_TYPE_DEFAULT = "text/html";
	static const std::string CONTENT_TYPE_ERROR = "text/plain";
	static Map<int, std::string> ERROR_MESSAGE_MAP;

	bool isRunning(){
		return _isRunning;
	}

	std::string getContentType(const std::string& extension){
		if(extension.empty()){
			return CONTENT_TYPE_DEFAULT;
		}
		if(CONTENT_TYPE_MAP.isEmpty()){
			CONTENT_TYPE_MAP["bmp"]="image/bmp";
			CONTENT_TYPE_MAP["cpp"]="text/plain"
		}
		std::string ext = toLowerCase(extension);
		int dot = stringLastIndexOf(ext,".")
		if(CONTENT_TYPE_MAP.containsKey(ext)){
			return CONTENT_TYPE_MAP[ext];
		}else{
			return CONTENT_TYPE_DEFAULT;
		}
	}
} // HttpServer

std::string getUrlExtension(const std::string& url){
	std::string url2 = toLowerCase(trim(url));
	int questionMark = stringIndexOf(url2,"?");
	if(questionMark>=0){
		url2 = url2.substr(0,questionMark)
	}
}