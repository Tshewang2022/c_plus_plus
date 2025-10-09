// i found that i have limitations in the recursion concepts;
// here is the general concept of the recursion
// the fuction will get exe repeatedly untill and unless it met the base conditions

let recursion = (x) => {
    if (x != 10) {
        let count = x + 1;
        recursion(count);
        console.log(count);
    }
};
recursion(1);

