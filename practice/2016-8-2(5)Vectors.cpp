const int AlphabetSize = 26;

void CountLetters(string filename){
	ifstream in;
	in.open(filename.c_str());
	if(in.fail())
		Error("Could not");

	Vector<int> result;

	for(int i=0;i<AlphabetSize;i++){
		result.add(0);//
	}

	string line;
	while(true){
		getline(in,line);
		if(in.fail())
			break;
		line = ConvertToLowerCase(line);
		for(int j=0;j<line.length();j++){
			int index = line[j]-'a';
			if(index>=0&&index<AlphabetSize){
				int prevTotal = result[index];
				result[index]=prevTotal+1;
			}
		}
	}

	for(int k= 0;k<AlphabetSize;k++){
		char currLetter = 'a'+k;
		cout << currLetter <<":"<<result[k]<<endl;
	}
}


struct heroT{
	string name;
	string weakness;
	ing powerLevel;
};

struct villianT{
	string name;
	string evilPlan;
	int attackLevel;
};

void Battle(heroT aang,villianT &)









