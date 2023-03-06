#include <stdio.h>
#include <stdlib.h>
#include <elf.h>
#include <unistd.h>
#include <stdint.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"

/**
 * main - check the code for Holberton School students.
 * @argc: name of my file
 * @argv: number of the letters that i used
 * Return: Always 0.
 */

#define READ(var) fread(&(var), sizeof(var), 1, fin)

const char *type_name(uint16_t type);
const char *sys_name(uint8_t sys);

int main(int argc, char *argv[])
{
	uint8_t e_ident[16];
	uint16_t e_type, e_machine;
	uint32_t e_version;
	int itr;
	FILE *fin;

	if (argc != 2)
		dprintf(STDERR_FILENO, "wrong number of arguments\n"), exit(98);
	
	if (argv[1] == 0)
		dprintf(STDERR_FILENO, "Please enter a name, Null error\n"), exit(98);

	fin = fopen(argv[1], "r");
	if (fin == NULL)
		dprintf(STDERR_FILENO, "Can't open file\n"), exit(98);

	READ(e_ident);
	READ(e_type);
	READ(e_machine);
	READ(e_version);

	if (e_ident[0] != 0x7F || e_ident[1] != 'E' || e_ident[2] != 'L' || e_ident[3] != 'F')
	{
		dprintf(STDERR_FILENO, "Error: file is not ELF type"), exit(98);
	}
	
	printf("ELF Header:\n  Magic:   ");
	for (itr = 0; itr < 16; itr++)
		printf("%02x ", e_ident[itr]);

	printf("\n");
	if (e_ident[4] != 1 && e_ident[4] != 2)
	{
		printf("<unknown: %02hx is not a class>\n", e_ident[4]);
		return (0);
	}
	printf("  %-35s","Class:                             ");
	if (e_ident[4] == 1)
		printf("ELF32\n");
	else
		printf("ELF64\n");


	printf("  %-35s","Data:                              2's complement, ");
	if (e_ident[5] == 1)
		printf("little endian\n");
	else if (e_ident[5] == 2)
		printf("big endian\n");
	else
		printf("<unknown: %02hx is not a elf data>\n", e_ident[4]);

	printf("  %-35s", "Version:");
	if (e_ident[6] == EV_CURRENT)
		printf("%u (current)\n", e_ident[6]);
	else
		printf("%u \n", e_ident[6]);

	printf("  %-35s", "OS/ABI:");
	printf("%s\n", sys_name(e_ident[7]));

	printf("  %-35s", "ABI Version:");
	printf("%d\n", e_ident[8]);

	printf("  %-35s", "Type:");
	printf("%s\n", type_name(e_type));
	
	fclose(fin);
	return (0);
}	

const char *sys_name(uint8_t sys)
{
	switch (sys) {
		case 0x00: return "SYSTEM V";
		case 0x01: return "HP-UX";
		case 0x02: return "NET BSD";
		case 0x03: return "Linux";
		case 0x04: return "HP-UX";
		case 0x05: return "GNU Hurd";
		case 0x06: return "Solaris";
		case 0x07: return "AIX";
		case 0x08: return "IRIX";
		case 0x09: return "FreeBSD";
		case 0x0A: return "TRU64";
		case 0x0B: return "Novell Modesto";
		case 0x0C: return "OpenBSD";
		case 0x0D: return "OpenVMS";
		case 0x0E: return "NonStop Kernel";
		case 0x0F: return "AROS";
		case 0x10: return "Fenix OS";
		case 0x11: return "CloudABI";
		case 0x12: return "Stratus Technologies OpenVOS";
	}
	return "Unknown";
}

const char *type_name(uint16_t type)
{
	switch (type)
	{
		case 0x00:   return "NONE";
		case 0x01:   return "REL";
		case 0x02:   return "EXEC";
		case 0x03:   return "DYN";
		case 0x04:   return "CORE";
		case 0xFE00: return "LOOS";
		case 0xFEFF: return "HIOS";
		case 0xFF00: return "LOPROC";
		case 0xFFFF: return "HIPROC";
	}
	return "Unknown";
}
