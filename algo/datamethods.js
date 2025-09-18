let string ='banana, apple, orange';
let string2='pineapple';
let string3 ='12324';

// string methods => split, includes, concat, trim, indexOf, slice=> this are the main methods;

const startsWith =(string)=>{
    console.log(string.startsWith('b'));// it returns a boolean;
    // need to explore the regexp operations, all the email and other string verification can be done using the regexp;
}
startsWith(string);

let number = 23.98930
// numbers methods;
// toFixed(digits), toPrecision()
const numberMethods=(number)=>{
    // will give the 3 digits decimal place
    console.log(number.toFixed(3));

    // lets see the difference between two;, this will give the round up .0
    console.log(number.toPrecision(3));

    //exponential fractions, how does this works
    console.log(number.toExponential(number));

    // valueOf
    console.log(number.valueOf());

    // typeof
    console.log(typeof(string2));

    // Number.isNaN(value);
    console.log(Number.isNaN(number)); // will probaly return boolean
    console.log(Number.isFinite(number));
    console.log(Number.parseInt(string3));
    console.log(Number.parseFloat(string3));
}

numberMethods(number);
