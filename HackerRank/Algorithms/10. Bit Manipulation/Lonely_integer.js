function processData(input) {
    //Enter your code here
    input = input.split('\n')
    var size = Number(input[0]);
    input = input[1].split(' ');
    var i;
    var result = 0;

    for (i = 0; i < size; i++) {
      result ^= Number(input[i]);
    }

    console.log(result);
}

process.stdin.resume();
process.stdin.setEncoding("ascii");
_input = "";
process.stdin.on("data", function (input) {
    _input += input;
});

process.stdin.on("end", function () {
   processData(_input);
});
