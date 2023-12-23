Create file with `O_APPEND` flag, lseek to the beginning of file and write some data

But the data is still writen at the end of the file although we call `fseek` into the begin of line. 

According to the `O_APPEND` flag

```

    The file is opened in append mode.  Before each write(2),
    the file offset is positioned at the end of the file, as
    if with lseek(2).  The modification of the file offset and
    the write operation are performed as a single atomic step.

```

Begin actually call the `write()` systemcall, the cursor is always set to the EOF.