process.stdin.resume();
process.stdin.setEncoding('ascii');

var input_stdin = "";
var input_stdin_array = "";
var input_currentline = 0;

process.stdin.on('data', function (data) {
    input_stdin += data;
});

process.stdin.on('end', function () {
    input_stdin_array = input_stdin.split("\n");
    main();
});

function readLine() {
    return input_stdin_array[input_currentline++];
}

/////////////// ignore above this line ////////////////////

function stringConstruction(s){
    // Complete this function
    var characters = new Array(26);
    var i = 0, copyCost = 0;
    var length = s.length;

    while (i < length) {
      var t = s.charCodeAt(i) - 'a'.charCodeAt(0);
      if (!characters[t]) {
        characters[t] = true;
        copyCost++;
      }
      i++;
    }

    return copyCost;
}

function main() {
    var q = parseInt(readLine());
    for(var a0 = 0; a0 < q; a0++){
        var s = readLine();
        var result = stringConstruction(s);
        process.stdout.write("" + result + "\n");
    }

}
