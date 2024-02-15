// Problem statement
// Programming languages have some conditional / decision-making statements that execute when some specific condition is fulfilled.
// If-else is one of the ways to implement them.

// You are given two numbers 'a' and 'b'.
// Compare the numbers and print the relation.
// Print “smaller”, “greater” or “equal” when ‘a’ is smaller than ‘b’, greater than ‘b’, or equal to ‘b’ respectively.

// Example :
// Input: ‘a’ = 5 and ‘b’ = 3
// Output: greater

// Explanation: Since ‘a’ (= 5) is greater than ‘b’ (= 3), we are printing “greater”.

string compareIfElse(int a, int b) {
	// Write your code here
	string res;
	if(a<b){
	res = "smaller";
	return res;
	}

	else if(a>b){
	res = "greater";
	return res;
	}

	else if(a==b){
	res = "equal";
	return res;
	}
}
