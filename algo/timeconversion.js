let time = '7.40pm';
 

 const parseTime =(time)=>{
    let match = time.match(/\d+(\.\d+)?/);
    let hour = parseFloat(match[0]); 
    // console.log(hour, 'hour');
    if(time.includes('pm')){
        hour += 12;
        console.log(hour);
        return hour;
    }else{
        console.log(hour);
    }
 }

parseTime(time);

// from now on, i will be practing each methods every week
// staring from the string methods and its params
// the string methods
let string ='there'

console.log(string.slice(2));