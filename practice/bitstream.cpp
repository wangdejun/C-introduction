#include "bitstream.h"
#include <iostream>
#include "error.h"
#include "strlib.h"

static const int NUM_BIT_IN_BYTE = 8;
inline int GetNthBit(int n,int fromByte){
	return((fromByte &(i<<n))!=0);
}
inline void SetNthBit(int n,int & inByte){
	inByte |=(1<<n);
};

int ibitstream::readBit(){
	if(!is_open()){
		error("....")
	}
	if(this->fake){
		int bit = get();
		if(bit==0||bit =='0'){
			return 0;
		}else{
			return 1;
		}
	}else{
		if(lastTell!=tellg()||pos==NUM_BIT_IN_BYTE){
			if((curByte=get())==EOF){
				return EOF;
			}
			pos = 0;
			lastTell = tellg();
		}
		int result = GetNthBit(pos,curByte);
		pos++;
		return result;
	}
}
void ibitstream::rewind(){
	if(!is_open()){
		error("");
	}
	clear();
	seekg(0,std::ios::beg);
}

void ibitstream::setFake(bool fake){
	this->fake = fake;
}

long ibitstream::size(){
	if(!is_open()){
		error("");
	}
}

bool ibitstream::is_open(){
	return true;
}

obitstram::obitstream():std::ostream(NULL),lastTell(0),curByte(0),pos(NUM_BIT_IN_BYTE){
	this->fake = false;
}

void obitstream::writeBit(int bit){
	if(bit !=0&&bit!=1){
		error()
	}
	if(!is_open()){
		error("obitstream::writeBit:stream is not open");
	}
	if(this->fake){
		put(bit == 1?'1':'0');
	}else{
		if(lastTell!tellp() ||pos ==NUM_BIT_IN_BYTE){
			curByte = 0;
			pos = 0;
		}
		if(bit){
			SetNthBit(pos,curByte);
		}
		if(pos == 0||bit){
			if(pos !=0){
				seekp(-1,std::ios::cur);
			}
			put(curByte);
		}
		pos++;
		lastTell = tellp();
	}
}

void obitstream::setFake(bool fake){
	this->fake = fake;
}

long obitstream::size(){
	if(!is_open()){
		error("obitstream::size:stream is not open");
	}
	clear();
	streampos cur = tellp();
	seekp(0,std::ios::end());
	streampos end = tellp();
	seekp(cur);
	return long(end);
}

bool obitstream::is_open(){
	return true;
}
ifbitstream::ifbitstream(){
	init(&fb);
}
ifbitstream::ifbitstream(const char* filename){
	init(&fb);
	open(filename);
}

void ifbitstream::open(const char* filename){
	
}














