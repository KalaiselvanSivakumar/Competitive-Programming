function processData(input) {
    //Enter your code here
    var inputLines = input.split('\n');
    var i = 0
    var testCase = parseInt(inputLines[i])
    var inputArr;
    while (i++ < testCase) {
        inputArr = inputLines[i].split(' ');
        second = parseInt(Math.sqrt(parseInt(inputArr[1])));
        first = parseInt(Math.sqrt(parseInt(inputArr[0])));
        console.log(second - first + (first * first == parseInt(inputArr[0]) ? 1 : 0));
    }
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
