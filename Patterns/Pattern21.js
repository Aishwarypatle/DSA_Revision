const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

const pattern = (n) => {
    console.log("*".repeat(n));
    
    // Middle rows
    for (let i = 0; i < n - 2; i++) {
        console.log("*" + " ".repeat(n - 2) + "*");
    }
    
    // Last row
    console.log("*".repeat(n));
}

rl.question('Enter something: ', (n) => {
    pattern(n);
  rl.close();
});