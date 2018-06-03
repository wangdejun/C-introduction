#ifndef _bitstream_h
#define _bitstream_h

#include <istream>
#include <ostream>
#include <fstream>
#include <sstream>

const int PSEUDO_EOF = 256;
const int NOT_A_CHAR = 257;

class ibitstream:public  std:istream{
public:
	ibitstream();
	int readBit();
	void rewind();
	void setFake(bool fake);
	long size();
	virtual bool is_open();
private:
	std::streampos lastTell;
	int curByte;
	int pos;
	bool fake;
};

class obitsteam: public std::ostream{
	obitstream();
	void writeBit(int bit);
	long size();
	void setFake(bool fake);
	virtual bool is_open();

private:
	std::streampos lastTell;
	int curByte;
	int pos;
	bool fake;
};

class ifbitstream:public ibitstream{
public:
	ifbitstream();
	ifbitstream(const char* filename);
	ifbitstream(const std::strings& filename);

	void open(const char* filename)
	void open(const std::string& filename);
	bool is_open();
	void close();

private:
	std::filebuf fb;
};

class ofbitstream:public obitsteam{
	ofbitstream();
	ofbitstream(const char* filename);
	ofbitstream(const std::string& filename);

	bool is_open();
	void close();

private:
	std::filebuf fb;
};


class isstringstream:public ibitstream(){
public:
	isstringstream(const std::string& s="");
	void str(const std::string& s);
private:
	std::stringbuf sb;
}

class ostringstream:public obitsteam{
public:
	ostringstream();
	std::string str();
private:
	std::stringbuf sb;
};

#endif




















