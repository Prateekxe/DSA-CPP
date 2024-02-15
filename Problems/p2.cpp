// Problem statement
// Data type refers to the type of value a variable has and the way the computer interprets it.

// Each data type has a different size. You’ve studied 5 different data types and the sizes of the data types:

// Integer: 4 bytes
// Long: 8 bytes
// Float: 4 bytes
// Double: 8 bytes
// Character: 1 byte

// You’re given a data type. Print its size in bytes.

// Example :
// Input: Long

// Output: 8



int dataTypes(string type) {
	// Write your code here
	int val;
	if(type=="Integer"){
		val = 4;
		return val;
	}

	else if(type=="Long"){
		val = 8;
		return val;
	}

	else if(type=="Float"){
		val = 4;
		return val;
	}

	else if(type=="Double"){
		val = 8;
		return val;
	}

	else if(type=="Character"){
		val = 1;
		return val;
	}

	return 0;
}
