A simple Makefile template.

Features:
 * Testing
 * Debug and release style builds

How to use:
All source files(.cpp) that are in src/ are automatically compiled as per normal. Files that begin with 'main_' are transformed into executables. The name is computed by removing the 'main_' prefix. Tests are similar, but use the 'test_' prefix. Debug object files will be placed in `obj/debug`, while release object files will be placed in `obj/release`. By default both release and debug builds are built, but they chosen specifically via `make release` or `make debug` commands.

Tests are not automatically compiled, but are built via `make test`command. This command will also run all the tests. Test names will then be shown in a different colour depending on the exit code of the test program. Green is for exit code 0, while red is for others.

All executables will be placed in the root directory. Debug executables have an additional '_debug' suffix.
