
#criando Atalhos
ln -s /media/hd-ext/Images/JPG JPG
#desinstalar aplications
dpkg -l | grep Nome do Programa


se estiver na versão do PHP 5.6 e quiser usar a versão do PHP 7.1, digite o comando a baixo:

sudo a2dismod php5.6; sudo a2enmod php7.1; sudo service apache2 restart | sudo update-alternatives --set php /usr/bin/php7.1

Ou:
sudo a2dismod php5.6; sudo a2enmod php7.1; sudo service apache2 restart; echo 2 | sudo update-alternatives --config php

Se estiver na versão do PHP 7.1 e quiser usar a versão do PHP 5.6, digite os comandos na seguinte ordem:

sudo a2dismod php7.1; sudo a2enmod php5.6; sudo service apache2 restart | sudo update-alternatives --set php /usr/bin/php5.6

Ou:
sudo a2dismod php7.1; sudo a2enmod php5.6; sudo service apache2 restart; echo 1 | sudo update-alternatives --config php



How to check if port is in use in
To check the listening ports and applications on Linux:

Open a terminal application i.e. shell prompt.
Run any one of the following command on Linux to see open ports:
sudo lsof -i -P -n | grep LISTEN
sudo netstat -tulpn | grep LISTEN
sudo lsof -i:22 ## see a specific port such as 22 ##
sudo nmap -sTU -O IP-address-Here
For the latest version of Linux use the ss command. For example, ss -tulw
Let us see commands and its output in details.

Option #1: lsof command
The syntax is:
$ sudo lsof -i -P -n
$ sudo lsof -i -P -n | grep LISTEN
$ doas lsof -i -P -n | grep LISTEN ### [OpenBSD] ###


ADD NODE TO CROWJOB
command which node 
/root/.nvm/versions/node/v8.10.0/bin/node /var/www/html/v1/socket.js

#if no writable sda in /etc/fstab
mount -n -o remount,rw /dev/sda1 /
