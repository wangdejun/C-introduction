struct statsT{
	int low;
	int high;
	double average;
}

statsT CalculateStatistics(string filename){
	statsT stats;
	stats.low = 101;
	stats.high = -1;

	int total = 0;
	int count = 0;

	//open a file and makesure it worked
	ifstream in;
	in.open(filename.c_str());
	if(in.fail())
		Error("Could not read"+filename);

	while(true){
		int num;
		in>>num;
		//check that we read good
		if(in.fail())
			break;
		if(num<stats.low)
			stats.low = num;;
		if(num>stats.high)
			stats.high = num;
		total += num;
		count++;
	}
	stats.average = double(total)/count;
	in.close();
	return false;
}

