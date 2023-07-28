Terminal/ Command Line Interface Commands()
{
pwd     : Present Working Directory // pwd 
ls      : List                      // ./ls  
cd      : Change directory          // cd ../../..  or cd user/admin/desktop/lecture_notes 
./      : run executable            // ./pset1*
mkdir   : make directory            // mkdir newfolder
    mkdir -p: add string name       // mkdir -p "new folder"
cp      : Copy                      // cp <source> <destination> || cp file.c copy.c 
    cp -r   : Copy Folder Recursively   // cp -r folder1 folder2   //Directories must be copied recursively to include its contents
rm      : remove                    // rm file.c
    rm -f : force remove (skip y/n confirmation)
    rm -r : recursively delete things in directory (for folders with files in them) 
    rm -rf: both
rmdir   : remove directory          // rmdir newfolder
    rmdir -r: remove recursively
mv      : Move/ Rename              // mv <source> <destination> || mv rename.c renamed.c (works on directories too) | mv rename.c folder/ (moves file into a different folder) // It makes a copy of the file, then deletes the old one. 
    mv -r   : Move recursively
}


Advanced Commands()
{
chmod   : 
ln      :
touch   : makes a new file          // touch code.c  
man     : 
diff    :
sudo    : run as admin
telnet  : 
clear   : clear terminal (ctrl + l) 
}




Terminal Controls
{
    ctrl + c = (cancel or terminate foreground process or delete current line)
    ctrl + d = exit() 
    ctrl + l = clear 
}
