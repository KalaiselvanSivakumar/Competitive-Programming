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

function getRecord(s){
    // Complete this function
    var currentMax = s[0], currentMin = s[0];
    var maxBreakCount = 0, minBreakCount = 0;
    for (var i = 0; i < s.length; i++) {
      if (s[i] > currentMax) {
        maxBreakCount++;
        currentMax = s[i];
      }
      else if (s[i] < currentMin) {
        minBreakCount++;
        currentMin = s[i];
      }
    }
    console.log(maxBreakCount + " " + minBreakCount);
}

function main() {
    var n = parseInt(readLine());
    s = readLine().split(' ');
    s = s.map(Number);
    var result = getRecord(s);
    console.log(result.join(" "));

}
