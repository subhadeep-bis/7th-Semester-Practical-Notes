document.write("5 + 4 = ", 5+4, "<br>");
document.write("5 - 4 = ", 5-4, "<br>");
document.write("5 * 4 = ", 5*4, "<br>");
document.write("5 / 4 = ", 5/4, "<br>");
document.write("5 % 4 = ", 5%4, "<br>");

document.write("<br>");

document.write("Max num = ", Number.MAX_VALUE, "<br>");
document.write("Max num = ", Number.MIN_VALUE, "<br>");

document.write("<br>");

var balance = 1563.87;
document.write("Monthly Payment = ", (balance/12).toFixed(2), "<br>");

document.write("<br>");

// Math functions
var randNumber = 5;
document.write("randNumber++ = ", randNumber++, "<br>");
document.write("++randNumber = ", ++randNumber, "<br>");
document.write("<br>");
document.write("Math.E = ", Math.E, "<br>");
document.write("Math.PI = ", Math.PI, "<br>");
document.write("Math.abs(-8) = ", Math.abs(-8), "<br>");
document.write("Math.cbrt(1000) = ", Math.cbrt(1000), "<br>");
document.write("Math.ceil(6.45) = ", Math.ceil(6.45), "<br>");
document.write("Math.floor(6.45) = ", Math.floor(6.45), "<br>");
document.write("Math.round(6.45) = ", Math.round(6.45), "<br>");
document.write("Math.log(10) = ", Math.log(10), "<br>");
document.write("Math.log10(10) = ", Math.log10(10), "<br>");
document.write("Math.max(10,5) = ", Math.max(10,5), "<br>");
document.write("Math.min(10,5) = ", Math.min(10,5), "<br>");
document.write("Math.pow(4,2) = ", Math.pow(4,2), "<br>");
document.write("Math.sqrt(1000) = ", Math.sqrt(1000).toFixed(2), "<br>");

document.write("<br>");

document.write("Random Number = ",Math.floor((Math.random() * 10)+1), "<br>");

document.write("<br>");

document.write("Converted String = ", Number("5"), "<br>");
document.write("Converted Int = ", parseInt("5"), "<br>");
document.write("Converted Float = ", parseFloat("5.14"), "<br>");

document.write("<br>");

// Strings
var randStr = "A Long" + " string that " + " goes on and on....";
document.write("String Length = ", randStr.Length, "<br>");
document.write("Index for \"goes\" = ", randStr.indexOf("goes"), "<br>");
document.write("Converted Int = ", parseInt("5"), "<br>");
document.write("randStr.slice(20,24) = ",randStr.slice(20,24),"<br>");
document.write("randStr.slice(20) = ",randStr.slice(20),"<br>");
document.write("randStr.substr(20,4) = ",randStr.slice(20,24),"<br>");
document.write("randStr.slice(20,24) = ",randStr.slice(20,24),"<br>");
document.write("randStr.replace(20,24) = ",randStr.replace("and on","forever"),"<br>");
document.write("ranStr.slice(20,24) = ",randStr.slice(20,24),"<br>");
document.write("ranStr.charAt(2) = ",randStr.charAt(2),"<br>");

var randStrArray = randStr.split(" ");
console.log(randStrArray);

randStr = randStr.trim();
console.log(randStr);

document.write(randStr.toUpperCase() + "<br>");
document.write(randStr.toLowerCase() + "<br>");

//String Styling
var strToStyle = "Random String";
document.write("Big:", strToStyle.big(), "<br>");
document.write("Bold:", strToStyle.bold(), "<br>");
document.write("Font Color:", strToStyle.fontcolor("blue"), "<br>");
document.write("Font size:", strToStyle.fontsize("8em"), "<br>");
document.write("Italics:", strToStyle.italics(), "<br>");
document.write("Google:", strToStyle.link("https://google.com"), "<br>");
document.write("Small:", strToStyle.small(), "<br>");
document.write("Strike:", strToStyle.strike(), "<br>");
document.write("Sub:", strToStyle.sub(), "<br>");
document.write("Big:", strToStyle.sup(), "<br>");

// Conditionals

var age = 8;
if(age>=5 && age<=6) {
	document.write("Go to Kindergarten!", "<br>");
} else if(age>18) {
	document.write("Go to College", "<br>");
} else {
	document.write("Go to grage ", age-5 ,"<br>");
}

//Array

var tomSmith = ["Tom","123main",123];
var a = tomSmith.pop();
console.log(a);
console.log(tomSmith.valueOf());
delete tomSmith[3];
console.log(tomSmith.valueOf());
tomSmith.push("9893");
console.log(tomSmith);

//functions

function inArray(arrayToCheck, value) {
	var k=0;
	for(i=0;i<arrayToCheck.length;i++){
		if(arrayToCheck[i]===value){
			k=1;
			break;
		}
	}
	if(k===1)
		document.write("Found!"+"<br>");
	else
		document.write("not found!"+"<br>");
}

var a=[1,2,3,4];

inArray(a,5);


function times2(num){
	return num*2;
} 

function multiply(func, num) {
	return func(num);
}
document.write(multiply(times2,15)+"<br>");


// variable arguments
function sum() {
	var sum=0;
	for(i=0;i<arguments.length;i++){
		sum+=arguments[i];
	}
	return sum;
}
console.log(sum());

function fact(num) {
	if(num<=0)
		return 1;
	return num*fact(num-1);
}
console.log(fact(5));
var num = [2,78,12,23];
num.sort(function(x,y){return x-y});
document.write("Sorted Array", num.toString());

