mkdir emacs
cd emacs
wget 'http://mirror.switch.ch/ftp/mirror/gnu/windows/emacs/emacs-24.3-bin-i386.zip'
unzip emacs-24.3-bin-i386.zip
mv emacs-24.3 ${HOME}/msys/
cd ..
rm -rf emacs
