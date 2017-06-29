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

function main() {
    var n_temp = readLine().split(' ');
    var n = parseInt(n_temp[0]);
    var k = parseInt(n_temp[1]);
    height = readLine().split(' ');
    height = height.map(Number);
    // your code goes here
    var maxHeight = 0;
    var i;
    for (i in height) {
      height[i] = Number(height[i]);
      if (maxHeight < height[i]) {
        maxHeight = height[i];
      }
    }
    var minimumMagicBeverages = maxHeight - k;
    if (minimumMagicBeverages < 0) {
      minimumMagicBeverages = 0;
    }
    console.log(minimumMagicBeverages);
}
