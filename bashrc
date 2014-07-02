# ~/.bashrc: executed by bash(1) for non-login shells.
# see /usr/share/doc/bash/examples/startup-files (in the package bash-doc)
# for examples

# If not running interactively, don't do anything
case $- in
    *i*) ;;
      *) return;;
esac

# Source paths for Xilinx ISE
source /opt/Xilinx/14.7/ISE_DS/settings64.sh &> /dev/null

# don't put duplicate lines or lines starting with space in the history.
# See bash(1) for more options
HISTCONTROL=ignoreboth

# Setting Vendor for the Makefile for FPGALink
VENDOR="xilinx"



export PATH=$PATH:$HOME/openrisc/toolchain/bin
export PATH=$HOME/openrisc/simulator/bin:$PATH

# Xilinx ISE Path
XILINX="/opt/Xilinx/14.7/ISE_DS/ISE"
#export XIL_MAP_NOCLIP_ON_ALL_SIGS_U=1
#export XIL_MAP_NO_IS_LUT6_2_VALID=1

FPGALINK="/home/cccitron/mastersThesis/makestuff/libs/libfpgalink-20120621"


# Path variables for Opencores ORPSoC
#export PATH=/opt/openrisc/toolchain/bin:/opt/openrisc/or1ksim/bin:$PATH
#export PATH=/opt/or32-elf/bin:/opt/or1ksim/bin:$PATH
#setenv PATH /opt/or32-elf/bin:/opt/or1ksim/bin:$PATH

export XIL_MAP_FIXIOSTD=1

# Path variables for Modelsim
export WINEPREFIX=/opt/Xilinx/14.7/ISE_DS/prefix
export PATH=$PATH:/opt/Xilinx/14.7/ISE_DS/modelsim/win32pe_edu
export MODELSIM=/opt/Xilinx/14.7/ISE_DS/modelsim/modelsim.ini
export MODEL_TECH=/opt/Xilinx/14.7/ISE_DS/modelsim/vhdl_src
export VHDL_DESTN=$XILINX/vhdl/xst/unisim

# Exports for Aithon stuff
export ANT_HOME=/usr/local/apache-ant-1.9.3
export JAVA_HOME=/usr/lib/jvm/java-7-openjdk-amd64
export PATH=$PATH:/usr/lib/jvm/java-7-openjdk-amd64/jre/bin
export PATH=$PATH:$ANT_HOME/bin

# append to the history file, don't overwrite it
shopt -s histappend

# for setting history length see HISTSIZE and HISTFILESIZE in bash(1)
HISTSIZE=1000
HISTFILESIZE=2000

# check the window size after each command and, if necessary,
# update the values of LINES and COLUMNS.
shopt -s checkwinsize

# If set, the pattern "**" used in a pathname expansion context will
# match all files and zero or more directories and subdirectories.
#shopt -s globstar

# make less more friendly for non-text input files, see lesspipe(1)
[ -x /usr/bin/lesspipe ] && eval "$(SHELL=/bin/sh lesspipe)"

# set variable identifying the chroot you work in (used in the prompt below)
if [ -z "${debian_chroot:-}" ] && [ -r /etc/debian_chroot ]; then
    debian_chroot=$(cat /etc/debian_chroot)
fi

# set a fancy prompt (non-color, unless we know we "want" color)
case "$TERM" in
    xterm-color) color_prompt=yes;;
esac

# uncomment for a colored prompt, if the terminal has the capability; turned
# off by default to not distract the user: the focus in a terminal window
# should be on the output of commands, not on the prompt
#force_color_prompt=yes

if [ -n "$force_color_prompt" ]; then
    if [ -x /usr/bin/tput ] && tput setaf 1 >&/dev/null; then
	# We have color support; assume it's compliant with Ecma-48
	# (ISO/IEC-6429). (Lack of such support is extremely rare, and such
	# a case would tend to support setf rather than setaf.)
	color_prompt=yes
    else
	color_prompt=
    fi
fi

if [ "$color_prompt" = yes ]; then
    PS1='${debian_chroot:+($debian_chroot)}\[\033[01;32m\]\u@\h\[\033[00m\]:\[\033[01;34m\]\w\[\033[00m\]\$ '
else
    PS1='${debian_chroot:+($debian_chroot)}\u@\h:\w\$ '
fi
unset color_prompt force_color_prompt

# If this is an xterm set the title to user@host:dir
case "$TERM" in
xterm*|rxvt*)
    PS1="\[\e]0;${debian_chroot:+($debian_chroot)}\u@\h: \w\a\]$PS1"
    ;;
*)
    ;;
esac

# enable color support of ls and also add handy aliases
if [ -x /usr/bin/dircolors ]; then
    test -r ~/.dircolors && eval "$(dircolors -b ~/.dircolors)" || eval "$(dircolors -b)"
    alias ls='ls --color=auto'
    #alias dir='dir --color=auto'
    #alias vdir='vdir --color=auto'

    alias grep='grep --color=auto'
    alias fgrep='fgrep --color=auto'
    alias egrep='egrep --color=auto'
fi

# some more aliases
alias ll='ls -l'
alias la='ls -a'
alias lla='ls -la'
alias h='history | less'
alias c='clear'
alias emacs='emacs -nw'
alias vb='vim ~/.bashrc'
alias sb='source ~/.bashrc'
alias jedit='/usr/local/bin/jedit'
alias cd-jedit='cd /usr/local/share/jEdit/5.1.0'
alias p3='python3'
alias unix3='ssh ccitron@unix3.csc.calpoly.edu'
alias xise='ise *.xise'

alias cdfpgalink='cd /home/cccitron/mastersThesis/makestuff/libs/libfpgalink-20120621'
alias cdvhdl='cd /home/cccitron/mastersThesis/makestuff/libs/libfpgalink-20120621/hdl/fx2/vhdl'
alias program-cksum='sudo $FPGALINK/linux.x86_64/rel/flcli -v 1443:0007 -i 1443:0007 -s -x $FPGALINK/gen_xsvf/ex_cksum_atlys_fx2_vhdl.xsvf'
alias program-fifo='sudo $FPGALINK/linux.x86_64/rel/flcli -v 1443:0007 -i 1443:0007 -s -x $FPGALINK/gen_xsvf/ex_fifo_atlys_fx2_vhdl.xsvf'
alias fpga='sudo $FPGALINK/linux.x86_64/rel/flcli -v 1443:0007 -c'
alias program-fpga='sudo $FPGALINK/linux.x86_64/rel/flcli -v 1443:0007 -i 1443:0007 -s -x ./default.xsvf'
alias program-core='sudo $FPGALINK/linux.x86_64/rel/flcli -v 1443:0007 -i 1443:0007 -s -x ./*.xsvf'

# Add an "alert" alias for long running commands.  Use like so:
#   sleep 10; alert
alias alert='notify-send --urgency=low -i "$([ $? = 0 ] && echo terminal || echo error)" "$(history|tail -n1|sed -e '\''s/^\s*[0-9]\+\s*//;s/[;&|]\s*alert$//'\'')"'

# Alias definitions.
# You may want to put all your additions into a separate file like
# ~/.bash_aliases, instead of adding them here directly.
# See /usr/share/doc/bash-doc/examples in the bash-doc package.

if [ -f ~/.bash_aliases ]; then
    . ~/.bash_aliases
fi

# enable programmable completion features (you don't need to enable
# this, if it's already enabled in /etc/bash.bashrc and /etc/profile
# sources /etc/bash.bashrc).
if ! shopt -oq posix; then
  if [ -f /usr/share/bash-completion/bash_completion ]; then
    . /usr/share/bash-completion/bash_completion
  elif [ -f /etc/bash_completion ]; then
    . /etc/bash_completion
  fi
fi
