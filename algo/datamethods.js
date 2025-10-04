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


// array methods=> this needs more attension;
const array=[1,2,3,4,4,5,5,6,7];
const array2 =["1", "banana", "pineapple", "chord"];

// methods of the arrays=> training for 1 hour

// most common, push(value),pop(), sort(), concat, filter(), map();

const pushIntoArr=(array)=>{
    const pushedvalue= array.push(8);
    console.log(pushedvalue);
}

pushIntoArr(array);
console.log(array);


// filter => return the new subset of array where it each element should pass the test case

const filiterElem =(array)=>{
    const evennum = array.filter(num=> num%2===0);
    console.log(evennum);// this will return the number that is only divisible by 2
}

filiterElem(array);

// map => will return the array of the same length and element will be changed

const mapEle =(array)=>{
    const changedEle =array.map(num=> num*2);
    console.log(changedEle); // will return the array of the same length but multiplied by 2;
}

mapEle(array);

console.log(array.reverse()); // i hope this will reverse the array


// reduce methods => use to combine or accumulate the array into the single element is called the reduce methods

const reduceArray =(array)=>{
   const sum = array.reduce((acc, curr) => acc + curr, 0); // 0 = inintal value
   // acc = total for far
   // curr = current value that we are going to loop through
   console.log(sum);//
}

reduceArray(array);

// some => this method will check if the any of the element pass the given test case

// so even one element pass the test case, it will return true

const someElement =(array)=>{
    const testEle =array.some(num=> num%2 ===0);
    console.log(testEle); // this will return the true, because if contains the even num in the array
}

someElement(array);

// every => each and every test case should get passed, if not it will through false
const everyEle =(array)=>{
    const everyEle = array.every(num=>num%2===0);
    console.log(everyEle); // this will return false, because every ele should pass the test case
}
everyEle(array);


// slice => will create the copy of the array, and extract that matches the arg
const sliceEele =( array)=>{
    const sliceEle =array.slice(1,3);
    console.log(sliceEle); // will return only the ele from 1 to 3;
}
sliceEele(array);


// splice => remove or add the element in the array, and it also modifies the element
const spliceEle =(array)=>{
    const remove = array.splice(1,3);
    console.log(remove); // will return only the remove element, that is starting from index one, to till 3;
    console.log(array) // modified the array, because it does not copy;
}

