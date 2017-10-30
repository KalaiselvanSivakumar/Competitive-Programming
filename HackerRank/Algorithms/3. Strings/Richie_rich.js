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

function richieRich(s, n, k){
    // Complete this function
    var i = 0, j = n - 1;
    var commonChars = [], diffChars = [];
    var iCommon, jCommon, iDiff, jDiff;
    s = s.split('');
    while (i < j && k) {
        if (s[i] != '9' && s[j] != '9') {
            if (s[i] == s[j]) {
                commonChars.push(i);
            }
            else {
                diffChars.push(i);
            }
        }
        else if (s[i] == '9' && s[j] == '9') {
            i++;
            j--;
            continue;
        }
        else if (s[i] == '9') {
            --k;
            s[j] = '9';
        }
        else if (s[j] == '9') {
            --k;
            s[i] = '9';
        }
        i++;
        j--;
    }
    // Only when k is less than different characters, palindrome is not possible
    if (diffChars.length > k) {
        return -1;
    }

    iCommon = (commonChars.length > 0) ? 0 : -1;
    iDiff = (diffChars.length > 0) ? 0 : -1;

    while (k && iCommon > -1 && iCommon < commonChars.length && iDiff > -1 && iDiff < diffChars.length) {
        if (commonChars[iCommon] < diffChars[iDiff]) {
            if (k > (diffChars.length - iDiff + 1)) {
                s[commonChars[iCommon]] = '9';
                s[n - 1 - commonChars[iCommon]] = '9';
                k -= 2;
                iCommon++;
            }
            else {
                iCommon = commonChars.length;
            }
        }
        else {
            if (k > (diffChars.length - iDiff)) {
                s[diffChars[iDiff]] = '9';
                s[n - 1 - diffChars[iDiff]] = '9';
                k -= 2;
            }
            else {
                if (s[diffChars[iDiff]] > s[n - 1 - diffChars[iDiff]]) {
                    s[n - 1 - diffChars[iDiff]] = s[diffChars[iDiff]];
                }
                else {
                    s[diffChars[iDiff]] = s[n - 1 - diffChars[iDiff]];
                }
                k--;
            }
            iDiff++;
        }
    }

    while (k && iCommon > -1 && iCommon < commonChars.length) {
        if (k > 1) {
            s[commonChars[iCommon]] = '9';
            s[n - 1 - commonChars[iCommon]] = '9';
            k -= 2;
            iCommon++;
        }
        else {
            break;
        }
    }

    while (k && iDiff > -1 && iDiff < diffChars.length) {
        if (k > (diffChars.length - iDiff)) {
            s[diffChars[iDiff]] = '9';
            s[n - 1 - diffChars[iDiff]] = '9';
            k -= 2;
        }
        else {
            if (s[diffChars[iDiff]] > s[n - 1 - diffChars[iDiff]]) {
                s[n - 1 - diffChars[iDiff]] = s[diffChars[iDiff]];
            }
            else {
                s[diffChars[iDiff]] = s[n - 1 - diffChars[iDiff]];
            }
            k--;
        }
        iDiff++;
    }

    if (i == j && k) {
        s[i] = '9';
    }

    return s.join('');
}

function main() {
    var nAndK = readLine();
    var s = readLine();
    nAndK = nAndK.split(' ');
    var result = richieRich(s, parseInt(nAndK[0]), parseInt(nAndK[1]));
    process.stdout.write("" + result + "\n");

}
