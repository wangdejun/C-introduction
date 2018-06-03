//Funtion:CensorStrinig
//Usage: s=CensorString(input,remove);

string CensorString1(string text, string remove){
	string result = "";
	for(int i=0;i<text.length();i++){
		bool found = false;
		for(int k=0;k<remove.length();k++){
			if(text[i]==remove[k]){
				found = true;
				break;//中断，跳出循环
			}
		}
		for(!found){
			result = result +text[i];//
		}
	}
	return result;
}

string CensorString2(string text,string remove){
	int pos;
	string result = text;

	for(int i=0;i<remove.length();i++){
		while(true){
			pos = result.find(remove[i]);
			if(pos==string::npos){
				break;
			}else{
				result = result.substr(0,pos)+result.substr(pos+1);
			}
		}
	}
	return result;
}

//To write it sothat we modify the original string rather than returning
// a new string,we could do the following
void CensorString3(string &text,string remove){
	for(int i=0;i<remove.length();i++){
		int pos = 0;
		while((pos = text.find(remove[i],pos))!=string::npos){
			text.replace(pos,1,"");//replace the char with empty string
		}
	}
}








