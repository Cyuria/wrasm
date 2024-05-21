
#include <string.h>

#include "asm.h"
#include "debug.h"
#include "parsers.h"

int compare_parsers(struct parser_t *a, struct parser_t *b)
{
	if (a->isize != b->isize)
		return 0;
	if (a->handler != b->handler)
		return 0;
	if (a->opcode != b->opcode)
		return 0;
	if (a->funct3 != b->funct3)
		return 0;
	if (a->funct7 != b->funct7)
		return 0;
	if (strcmp(a->name, b->name))
		return 0;

	return 1;
}

int test_parser(struct parser_t parser)
{
	struct parser_t found;
	if (parse_parser(parser.name, &found)) {
		logger(ERROR, error_internal,
		       "Test Failed, parse_parser returned error code with instruction %s",
		       parser.name);
		return 1;
	}
	if (!compare_parsers(&parser, &found)) {
		logger(ERROR, error_internal,
		       "Test Failed, parser for %s not correctly found",
		       parser.name);
		return 1;
	}
	return 0;
}

int main(void)
{
	int errors = 0;
	for (size_t i = 0; rv64s[i].name; i++)
		errors += test_parser(rv64s[i]);
	for (size_t i = 0; rv64i[i].name; i++)
		errors += test_parser(rv64i[i]);
	return errors != 0;
}