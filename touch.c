void touch(int argc, char **argv, FILE *ponteiroarquivo) {
	for(int i = 0; i < argc; ++i) {
		ponteiroarquivo = fopen(argv[i], "w");
	}

	fclose(ponteiroarquivo);
}