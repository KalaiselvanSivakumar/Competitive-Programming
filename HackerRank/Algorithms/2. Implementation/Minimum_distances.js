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
    var n = parseInt(readLine());
    A = readLine().split(' ');
    A = A.map(Number);

    let i, j, minimum = 10000;
    for (i = 0; i < n; i++) {
      for (j = i + 1; j < n; j++) {
        if (A[i] == A[j]) {
          minimum = Math.min(minimum, Math.abs(i - j));
        }
      }
    }

    if (minimum == 10000) {
      console.log(-1);
    } else {
      console.log(minimum);
    }
}
