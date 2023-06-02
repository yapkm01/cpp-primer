int main() {
	// different forms of initialization for C style arrays
	int ar1[3]{1, 2, 3};
	int ar2[3] = {4, 5, 6};
	// assignment not allowed in C style arrays
	// ar1 = ar2;
	int ar3[] = {10, 20, 30};
	return 0;
}
