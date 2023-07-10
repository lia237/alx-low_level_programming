#include <elf.h>
#include "main.h"

/**
* main - program that displays the information contained in the ELF 
* ||header at the start of an ELF file.
* @argc: num argument
* @argv: string argument
* Return: 0
*/

void display_error(const char *message)
{
    fprintf(stderr, "Error: %s\n", message);
    exit(98);
}

void display_elf_header(const Elf64_Ehdr *header)
{
    printf("ELF Header:\n");
    printf("  Magic:   %02x %02x %02x %02x\n", header->e_ident[0], header->e_ident[1],
           header->e_ident[2], header->e_ident[3]);
    printf("  Class:                             %s\n",
           (header->e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" :
           (header->e_ident[EI_CLASS] == ELFCLASS64) ? "ELF64" : "Invalid class");
    printf("  Data:                              %s\n",
           (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" :
           (header->e_ident[EI_DATA] == ELFDATA2MSB) ? "2's complement, big endian" : "Invalid data encoding");
    printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %s\n",
           (header->e_ident[EI_OSABI] == ELFOSABI_SYSV) ? "UNIX - System V" :
           (header->e_ident[EI_OSABI] == ELFOSABI_HPUX) ? "HP-UX" :
           (header->e_ident[EI_OSABI] == ELFOSABI_NETBSD) ? "NetBSD" :
           (header->e_ident[EI_OSABI] == ELFOSABI_LINUX) ? "Linux" :
           (header->e_ident[EI_OSABI] == ELFOSABI_SOLARIS) ? "Solaris" :
           (header->e_ident[EI_OSABI] == ELFOSABI_IRIX) ? "IRIX" :
           (header->e_ident[EI_OSABI] == ELFOSABI_FREEBSD) ? "FreeBSD" :
           (header->e_ident[EI_OSABI] == ELFOSABI_TRU64) ? "TRU64 UNIX" :
           (header->e_ident[EI_OSABI] == ELFOSABI_ARM) ? "ARM architecture" :
           (header->e_ident[EI_OSABI] == ELFOSABI_STANDALONE) ? "Standalone (embedded) application" : "Unknown");
    printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
    printf("  Type:                              %s\n",
           (header->e_type == ET_NONE) ? "None" :
           (header->e_type == ET_REL) ? "Relocatable" :
           (header->e_type == ET_EXEC) ? "Executable" :
           (header->e_type == ET_DYN) ? "Shared object" :
           (header->e_type == ET_CORE) ? "Core" : "Unknown");
    printf("  Entry point address:               %lx\n", header->e_entry);
}

int main(int argc, char *argv[])
{
    const char *filename;
    int fd;
    Elf64_Ehdr header;
    ssize_t bytes_read;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: elf_header elf_filename\n");
        return 98;
    }

    filename = argv[1];
    fd = open(filename, O_RDONLY);
    if (fd == -1)
    {
        display_error("Failed to open the file");
    }

    bytes_read = read(fd, &header, sizeof(header));
    if (bytes_read != sizeof(header))
    {
        display_error("Failed to read ELF header");
    }

    if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3)
    {
        display_error("Not an ELF file");
    }

    display_elf_header(&header);

    close(fd);
    return 0;
}

