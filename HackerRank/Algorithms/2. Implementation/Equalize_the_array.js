function processData(input) {
    //Enter your code here
    input = input.split('\n');
    var n = parseInt(input[0]);
    var arr = input[1].split(' ')
                .map(function(num) {
                    return parseInt(num);
                });
    countArr = new Array(100);
    countArr.fill(0);
    for (var i = 0; i < n; i++) {
        countArr[arr[i] - 1]++;
    }
    console.log(n - Math.max.apply(Math, countArr));
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
