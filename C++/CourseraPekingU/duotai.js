function Behavior(){}
Behavior.prototype.sound = function(sound){
    console.log("here");
    return sound;
}

var be1 = new Behavior();
be1.sound();
