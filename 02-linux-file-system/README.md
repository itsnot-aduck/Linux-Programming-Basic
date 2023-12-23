# Linux File system

## 1. Overview
Linux manages all objects as File
- Regular File
- Directories File
- Character Device File
- Block Device File
- Link files
- Socket files
- Pipe file
Use `ls -l` to show information of file, `ls -lh` to get size of files in kb

```
duki@doro-thea:~$ ls -l
total 64
drwxrwxr-x  2 duki duki 4096 Thg 12  4 23:44 bin
drwxrwxr-x 11 duki duki 4096 Thg 12 11 18:49 contiki-ng
drwxr-xr-x  2 duki duki 4096 Thg 12  1 12:12 Desktop
drwxr-xr-x  2 duki duki 4096 Thg 12  1 12:12 Documents
drwxr-xr-x  4 duki duki 4096 Thg 12 22 23:47 Downloads
drwxrwxr-x  6 duki duki 4096 Thg 12 11 15:46 gcc-arm-none-eabi-9-2020-q2-update
drwxrwxr-x  6 duki duki 4096 Thg 12  5 16:44 imx-yocto-bsp
drwxrwxr-x  9 duki duki 4096 Thg 12 22 23:47 Materials
drwxrwxr-x 15 duki duki 4096 Thg 12 22 20:08 mfgtools
drwxr-xr-x  4 root root 4096 Thg 12 17 15:50 msp430
drwxr-xr-x  2 duki duki 4096 Thg 12  1 12:12 Music
drwxr-xr-x  3 duki duki 4096 Thg 12  2 11:15 Pictures
drwxr-xr-x  2 duki duki 4096 Thg 12  1 12:12 Public
drwx------  5 duki duki 4096 Thg 12  4 23:45 snap
drwxr-xr-x  2 duki duki 4096 Thg 12  1 12:12 Templates
drwxr-xr-x  2 duki duki 4096 Thg 12  1 12:12 Videos

```
### File Type, Right & Access
```d rwx rwx r-x```
- `d`: directory, `-`: regular

For each 3 bytes after: (r: read, w: write, x: execute)

- User Access:
- Group Access
- Other Access

Login to user root: `sudo su`

Change the access mode: `chmod + access value in hex (0646 for ex)`

## 2. Read and Write file

## 3. File Management  

## 4. File Locking

## 5. Asynchronous file reading