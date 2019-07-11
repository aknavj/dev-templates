#include <stdio.h>
#include <string.h>

/*
 */
int main(int argc, char **argv) {

	if (argc < 2) {
		// print help?
		return 0;
	}

	// command line parameters
	for (int i = 1; i < argc; i++) {
		const char *s = argv[i];
		if (*s == '-') {
			while (*s && *s == '-') s++;
			if (!strcmp(s, "argument") && i < argc - 1) {
				// do something
			}
			else if (!strcmp(s, "argument2") && i < argc - 1) {
				const char *f = argv[++i];
				if (!strcmp(f, "sub-argument")) {
					// do sub arg
				}
				else if (!strcmp(f, "sub-argument2")) { 
					// do sub arg
				}
				else {

				}
				// do something else
			}
			else {
				// print help?
				return 0;
			}
		}
	}

	// program?

	return 0;
}