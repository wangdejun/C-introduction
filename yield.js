function* loopThroughInt(){
	for(let index = 0;index<100;index++){
		yield index;
	}
	return 100;
}

for (let v of loopThroughInt()){
	console.log(v);
}
