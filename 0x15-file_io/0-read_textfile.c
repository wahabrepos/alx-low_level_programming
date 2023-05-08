#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters) {
    if (filename == NULL) {
        return 0;
    }

    int fd = open(filename, O_RDONLY);
    if (fd == -1) {
        return 0;
    }

    char *buf = (char *)malloc(sizeof(char) * (letters + 1));
    if (buf == NULL) {
        close(fd);
        return 0;
    }

    ssize_t nread = read(fd, buf, letters);
    if (nread == -1) {
        close(fd);
        free(buf);
        return 0;
    }

    buf[nread] = '\0';
    ssize_t nwritten = write(STDOUT_FILENO, buf, nread);
    if (nwritten != nread) {
        close(fd);
        free(buf);
        return 0;
    }

    close(fd);
    free(buf);
    return nwritten;
}

